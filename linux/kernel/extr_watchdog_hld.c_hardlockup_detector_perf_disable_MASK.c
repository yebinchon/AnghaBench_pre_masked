
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 () ;
 struct perf_event* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct perf_event*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_6(void)
{
 struct perf_event *VAR_4 = FUNC_4(VAR_3);

 if (VAR_4) {
  FUNC_2(VAR_4);
  FUNC_5(VAR_3, ((void*)0));
  FUNC_5(VAR_0, VAR_4);
  FUNC_1(FUNC_3(), &VAR_1);
  FUNC_0(&VAR_2);
 }
}
