
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;

void FUNC_8(void)
{
 int VAR_3;
 int VAR_4;
 long VAR_5;


 FUNC_4(1, "running regression test 1, should finish in under a minute\n");
 VAR_3 = 2;
 FUNC_5(&VAR_2, ((void*)0), VAR_3);

 VAR_1 = FUNC_2(VAR_3 * sizeof(pthread_t *));

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = VAR_4;
  if (FUNC_6(&VAR_1[VAR_4], ((void*)0), VAR_0, (void *)VAR_5)) {
   FUNC_3("pthread_create");
   FUNC_0(1);
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (FUNC_7(VAR_1[VAR_4], ((void*)0))) {
   FUNC_3("pthread_join");
   FUNC_0(1);
  }
 }

 FUNC_1(VAR_1);

 FUNC_4(1, "regression test 1, done\n");
}
