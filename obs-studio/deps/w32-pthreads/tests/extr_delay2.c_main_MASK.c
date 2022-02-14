
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_3 (int ,void**) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

int
FUNC_6(int VAR_3, char * VAR_4[])
{
  pthread_t VAR_5;
  void* VAR_6 = (void*)0;

  FUNC_0(FUNC_4(&VAR_2) == 0);

  FUNC_0(FUNC_2(&VAR_5, ((void*)0), VAR_1, ((void*)0)) == 0);
  FUNC_0(FUNC_1(VAR_5) == 0);

  FUNC_0(FUNC_5(&VAR_2) == 0);

  FUNC_0(FUNC_3(VAR_5, &VAR_6) == 0);
  FUNC_0(VAR_6 == (void*)VAR_0);

  return 0;
}
