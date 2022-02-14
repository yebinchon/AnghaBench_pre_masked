
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;

int FUNC_8(void)
{
 pthread_t VAR_6;

 FUNC_2(&VAR_4, ((void*)0), 2);

 if (FUNC_4(&VAR_6, ((void*)0), VAR_3, ((void*)0))) {
  FUNC_0(VAR_5, "pthread_create() failed\n");
  return 1;
 }
 FUNC_6(&VAR_1);

 if (FUNC_3(&VAR_4) == VAR_0)
  FUNC_1(&VAR_4);

 FUNC_6(&VAR_2);

 FUNC_7(&VAR_2);
 FUNC_7(&VAR_1);

 FUNC_5(VAR_6, ((void*)0));

 return 0;
}
