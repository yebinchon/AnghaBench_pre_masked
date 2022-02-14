
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sem_t ;
typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;

int
FUNC_6()
{
  pthread_t VAR_2;
  sem_t VAR_3;

  FUNC_0(FUNC_4(&VAR_3, VAR_0, 0) == 0);
  FUNC_0(FUNC_1(&VAR_2, ((void*)0), VAR_1, (void *)&VAR_3) == 0);

  FUNC_0(FUNC_5(&VAR_3) == 0);
  FUNC_0(FUNC_3(&VAR_3) == 0);

  FUNC_0(FUNC_2(VAR_2, ((void*)0)) == 0);

  return 0;
}
