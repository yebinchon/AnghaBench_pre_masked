
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_mutexattr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;

int
FUNC_11()
{
  pthread_t VAR_6, VAR_7;
  pthread_mutexattr_t VAR_8;

  FUNC_0(FUNC_9(&VAR_8) == 0);
  FUNC_0(FUNC_10(&VAR_8, VAR_1) == 0);

  VAR_3 = 0;
  FUNC_0(FUNC_5(&VAR_4[0], &VAR_8) == 0);
  FUNC_0(FUNC_5(&VAR_4[1], &VAR_8) == 0);
  FUNC_0(FUNC_5(&VAR_4[2], &VAR_8) == 0);
  FUNC_0(FUNC_1(&VAR_6, ((void*)0), VAR_5, ((void*)0)) == 0);
  FUNC_0(FUNC_2(VAR_6, ((void*)0)) == 0);
  FUNC_0(FUNC_1(&VAR_7, ((void*)0), VAR_2, ((void*)0)) == 0);
  FUNC_0(FUNC_2(VAR_7, ((void*)0)) == 0);
  FUNC_0(VAR_3 == 6);
  FUNC_0(FUNC_6(&VAR_4[0]) == VAR_0);
  FUNC_0(FUNC_3(&VAR_4[0]) == 0);
  FUNC_0(FUNC_7(&VAR_4[0]) == 0);
  FUNC_0(FUNC_4(&VAR_4[0]) == 0);
  FUNC_0(FUNC_6(&VAR_4[1]) == VAR_0);
  FUNC_0(FUNC_3(&VAR_4[1]) == 0);
  FUNC_0(FUNC_7(&VAR_4[1]) == 0);
  FUNC_0(FUNC_4(&VAR_4[1]) == 0);
  FUNC_0(FUNC_6(&VAR_4[2]) == VAR_0);
  FUNC_0(FUNC_3(&VAR_4[2]) == 0);
  FUNC_0(FUNC_7(&VAR_4[2]) == 0);
  FUNC_0(FUNC_4(&VAR_4[2]) == 0);

  FUNC_0(FUNC_8(&VAR_8) == 0);

  return 0;
}
