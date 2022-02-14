
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct machine {int dummy; } ;
typedef int pid_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,union perf_event*,int ,int ,int ,struct machine*,int) ;

__attribute__((used)) static int FUNC_2(struct machine *VAR_1)
{
 union perf_event VAR_2;
 pid_t VAR_3 = FUNC_0();

 return FUNC_1(((void*)0), &VAR_2, VAR_3, VAR_3,
        VAR_0, VAR_1, 1);
}
