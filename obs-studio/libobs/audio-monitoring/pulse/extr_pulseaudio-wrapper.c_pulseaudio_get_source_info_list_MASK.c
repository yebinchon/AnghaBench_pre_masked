
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pa_source_info_cb_t ;
typedef int pa_operation ;
typedef int int_fast32_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,int ,void*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int_fast32_t FUNC_7(pa_source_info_cb_t VAR_2,
          void *VAR_3)
{
 if (FUNC_3() < 0)
  return -1;

 FUNC_4();

 pa_operation *VAR_4 = FUNC_0(VAR_1,
          VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_5();
  return -1;
 }
 while (FUNC_1(VAR_4) == VAR_0)
  FUNC_6();
 FUNC_2(VAR_4);

 FUNC_5();

 return 0;
}
