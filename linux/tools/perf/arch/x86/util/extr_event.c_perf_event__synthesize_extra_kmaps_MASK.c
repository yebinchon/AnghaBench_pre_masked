
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t size; int type; } ;
struct TYPE_6__ {int filename; int pid; int pgoff; scalar_t__ len; scalar_t__ start; TYPE_2__ header; } ;
struct TYPE_4__ {int misc; } ;
union perf_event {TYPE_3__ mmap; TYPE_1__ header; } ;
typedef int u64 ;
struct perf_tool {int dummy; } ;
struct maps {int dummy; } ;
struct map_groups {struct maps maps; } ;
struct map {int pgoff; scalar_t__ start; scalar_t__ end; } ;
struct machine {int id_hdr_size; int pid; struct map_groups kmaps; } ;
struct kmap {int name; } ;
typedef int perf_event__handler_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct map*) ;
 int FUNC_2 (union perf_event*) ;
 scalar_t__ FUNC_3 (struct machine*) ;
 struct kmap* FUNC_4 (struct map*) ;
 struct map* FUNC_5 (struct map*) ;
 struct map* FUNC_6 (struct maps*) ;
 int FUNC_7 (union perf_event*,int ,size_t) ;
 scalar_t__ FUNC_8 (struct perf_tool*,union perf_event*,struct machine*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 union perf_event* FUNC_12 (int) ;

int FUNC_13(struct perf_tool *VAR_4,
           perf_event__handler_t VAR_5,
           struct machine *VAR_6)
{
 int VAR_7 = 0;
 struct map *VAR_8;
 struct map_groups *VAR_9 = &VAR_6->kmaps;
 struct maps *VAR_10 = &VAR_9->maps;
 union perf_event *VAR_11 = FUNC_12(sizeof(VAR_11->mmap) +
      VAR_6->id_hdr_size);

 if (!VAR_11) {
  FUNC_9("Not enough memory synthesizing mmap event "
    "for extra kernel maps\n");
  return -1;
 }

 for (VAR_8 = FUNC_6(VAR_10); VAR_8; VAR_8 = FUNC_5(VAR_8)) {
  struct kmap *VAR_12;
  size_t VAR_13;

  if (!FUNC_1(VAR_8))
   continue;

  VAR_12 = FUNC_4(VAR_8);

  VAR_13 = sizeof(VAR_11->mmap) - sizeof(VAR_11->mmap.filename) +
         FUNC_0(FUNC_11(VAR_12->name) + 1, sizeof(u64)) +
         VAR_6->id_hdr_size;

  FUNC_7(VAR_11, 0, VAR_13);

  VAR_11->mmap.header.type = VAR_3;





  if (FUNC_3(VAR_6))
   VAR_11->header.misc = VAR_2;
  else
   VAR_11->header.misc = VAR_1;

  VAR_11->mmap.header.size = VAR_13;

  VAR_11->mmap.start = VAR_8->start;
  VAR_11->mmap.len = VAR_8->end - VAR_8->start;
  VAR_11->mmap.pgoff = VAR_8->pgoff;
  VAR_11->mmap.pid = VAR_6->pid;

  FUNC_10(VAR_11->mmap.filename, VAR_12->name, VAR_0);

  if (FUNC_8(VAR_4, VAR_11, VAR_6,
         VAR_5) != 0) {
   VAR_7 = -1;
   break;
  }
 }

 FUNC_2(VAR_11);
 return VAR_7;
}
