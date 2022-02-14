
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {unsigned long rlim_cur; scalar_t__ rlim_max; } ;
struct perf_sched {unsigned long nr_tasks; scalar_t__ force; } ;
struct perf_event_attr {int config; int type; } ;
typedef int sbuf ;
typedef int attr ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct rlimit*) ;
 int FUNC_3 (struct perf_event_attr*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,int ,char*) ;
 int FUNC_6 (int ,struct rlimit*) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (struct perf_event_attr*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_10(struct perf_sched *VAR_8, unsigned long VAR_9)
{
 struct perf_event_attr VAR_10;
 char VAR_11[VAR_6], VAR_12[VAR_6];
 int VAR_13;
 struct rlimit VAR_14;
 bool VAR_15 = 0;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.type = VAR_4;
 VAR_10.config = VAR_3;

force_again:
 VAR_13 = FUNC_9(&VAR_10, 0, -1, -1,
     FUNC_4());

 if (VAR_13 < 0) {
  if (VAR_7 == VAR_0) {
   if (VAR_8->force) {
    FUNC_0(FUNC_2(VAR_5, &VAR_14) == -1);
    VAR_14.rlim_cur += VAR_8->nr_tasks - VAR_9;
    if (VAR_14.rlim_cur > VAR_14.rlim_max) {
     VAR_14.rlim_max = VAR_14.rlim_cur;
     VAR_15 = 1;
    }
    if (FUNC_6(VAR_5, &VAR_14) == -1) {
     if (VAR_15 && VAR_7 == VAR_1)
      FUNC_8(VAR_12, "Need privilege\n");
    } else
     goto force_again;
   } else
    FUNC_8(VAR_12, "Have a try with -f option\n");
  }
  FUNC_5("Error: sys_perf_event_open() syscall returned "
         "with %d (%s)\n%s", VAR_13,
         FUNC_7(VAR_7, VAR_11, sizeof(VAR_11)), VAR_12);
  FUNC_1(VAR_2);
 }
 return VAR_13;
}
