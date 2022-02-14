
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct perf_event_attr*,int ,int,int,int,unsigned long) ;

void FUNC_3(struct perf_event_attr *VAR_1, pid_t VAR_2, int VAR_3,
       int VAR_4, int VAR_5, unsigned long VAR_6)
{
 int VAR_7 = VAR_0;

 if ((VAR_4 != -1) && FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6)) {
  FUNC_1("test attr FAILED");
  FUNC_0(128);
 }

 VAR_0 = VAR_7;
}
