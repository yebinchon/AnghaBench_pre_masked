
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptid; int ppid; int tid; int pid; } ;
union perf_event {TYPE_1__ fork; } ;
struct thread {int tid; } ;
struct perf_sched {int dummy; } ;
struct machine {int dummy; } ;


 struct thread* FUNC_0 (struct machine*,int ,int ) ;
 int FUNC_1 (char*,struct thread*,struct thread*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct perf_sched*,int,char*) ;
 char* FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_6(struct perf_sched *VAR_1,
        union perf_event *VAR_2,
        struct machine *VAR_3)
{
 struct thread *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_2->fork.pid,
     VAR_2->fork.tid);
 VAR_5 = FUNC_0(VAR_3, VAR_2->fork.ppid,
      VAR_2->fork.ptid);

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  FUNC_1("thread does not exist on fork event: child %p, parent %p\n",
     VAR_4, VAR_5);
  goto out_put;
 }

 if (VAR_0 > 0) {
  FUNC_2("fork event\n");
  FUNC_2("... parent: %s/%d\n", FUNC_4(VAR_5), VAR_5->tid);
  FUNC_2("...  child: %s/%d\n", FUNC_4(VAR_4), VAR_4->tid);
 }

 FUNC_3(VAR_1, VAR_5->tid, FUNC_4(VAR_5));
 FUNC_3(VAR_1, VAR_4->tid, FUNC_4(VAR_4));
out_put:
 FUNC_5(VAR_4);
 FUNC_5(VAR_5);
 return 0;
}
