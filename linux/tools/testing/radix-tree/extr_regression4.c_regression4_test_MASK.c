
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_7(void)
{
 pthread_t VAR_5, VAR_6;

 FUNC_2(1, "regression test 4 starting\n");

 FUNC_6(&VAR_0, 0, &VAR_1);
 FUNC_3(&VAR_3, ((void*)0), 2);

 if (FUNC_4(&VAR_5, ((void*)0), VAR_2, ((void*)0)) ||
     FUNC_4(&VAR_6, ((void*)0), VAR_4, ((void*)0))) {
  FUNC_1("pthread_create");
  FUNC_0(1);
 }

 if (FUNC_5(VAR_5, ((void*)0)) || FUNC_5(VAR_6, ((void*)0))) {
  FUNC_1("pthread_join");
  FUNC_0(1);
 }

 FUNC_2(1, "regression test 4 passed\n");
}
