
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record_opts {scalar_t__ affinity; int mmap_pages; int auxtrace_mmap_pages; int comp_level; int mmap_flush; int nr_cblocks; int auxtrace_snapshot_mode; } ;
struct record {struct record_opts opts; } ;
struct evlist {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct evlist*,int,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static int FUNC_4(struct record *VAR_4,
          struct evlist *VAR_5)
{
 struct record_opts *VAR_6 = &VAR_4->opts;
 char VAR_7[512];

 if (VAR_6->affinity != VAR_2)
  FUNC_0();

 if (FUNC_1(VAR_5, VAR_6->mmap_pages,
     VAR_6->auxtrace_mmap_pages,
     VAR_6->auxtrace_snapshot_mode,
     VAR_6->nr_cblocks, VAR_6->affinity,
     VAR_6->mmap_flush, VAR_6->comp_level) < 0) {
  if (VAR_3 == VAR_1) {
   FUNC_2("Permission error mapping pages.\n"
          "Consider increasing "
          "/proc/sys/kernel/perf_event_mlock_kb,\n"
          "or try again with a smaller value of -m/--mmap_pages.\n"
          "(current value: %u,%u)\n",
          VAR_6->mmap_pages, VAR_6->auxtrace_mmap_pages);
   return -VAR_3;
  } else {
   FUNC_2("failed to mmap with %d (%s)\n", VAR_3,
    FUNC_3(VAR_3, VAR_7, sizeof(VAR_7)));
   if (VAR_3)
    return -VAR_3;
   else
    return -VAR_0;
  }
 }
 return 0;
}
