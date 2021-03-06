
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int comm; scalar_t__ tid; scalar_t__ pid; } ;
struct TYPE_5__ {scalar_t__ type; } ;
union perf_event {TYPE_3__ comm; TYPE_2__ header; } ;
struct mmap {int dummy; } ;
struct TYPE_4__ {int nr_mmaps; } ;
struct evlist {struct mmap* mmap; TYPE_1__ core; } ;
typedef scalar_t__ pid_t ;


 scalar_t__ PERF_RECORD_COMM ;
 scalar_t__ getpid () ;
 int perf_mmap__consume (struct mmap*) ;
 int perf_mmap__read_done (struct mmap*) ;
 union perf_event* perf_mmap__read_event (struct mmap*) ;
 scalar_t__ perf_mmap__read_init (struct mmap*) ;
 scalar_t__ strcmp (int ,char const*) ;

__attribute__((used)) static int find_comm(struct evlist *evlist, const char *comm)
{
 union perf_event *event;
 struct mmap *md;
 int i, found;

 found = 0;
 for (i = 0; i < evlist->core.nr_mmaps; i++) {
  md = &evlist->mmap[i];
  if (perf_mmap__read_init(md) < 0)
   continue;
  while ((event = perf_mmap__read_event(md)) != ((void*)0)) {
   if (event->header.type == PERF_RECORD_COMM &&
       (pid_t)event->comm.pid == getpid() &&
       (pid_t)event->comm.tid == getpid() &&
       strcmp(event->comm.comm, comm) == 0)
    found += 1;
   perf_mmap__consume(md);
  }
  perf_mmap__read_done(md);
 }
 return found;
}
