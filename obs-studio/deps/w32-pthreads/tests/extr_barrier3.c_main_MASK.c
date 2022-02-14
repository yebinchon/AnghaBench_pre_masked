
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_barrierattr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_7 (int ,scalar_t__*) ;
 scalar_t__ VAR_4 ;

int
FUNC_8()
{
  pthread_t VAR_5;
  pthread_barrierattr_t VAR_6;

  FUNC_0(FUNC_4(&VAR_6) == 0);
  FUNC_0(FUNC_5(&VAR_6, VAR_1) == 0);
  FUNC_0(FUNC_2(&VAR_2, &VAR_6, 1) == 0);

  FUNC_0(FUNC_6(&VAR_5, ((void*)0), VAR_3, ((void*)0)) == 0);

  FUNC_0(FUNC_7(VAR_5, &VAR_4) == 0);

  FUNC_0((int)(size_t)VAR_4 == VAR_0);

  FUNC_0(FUNC_1(&VAR_2) == 0);
  FUNC_0(FUNC_3(&VAR_6) == 0);

  return 0;
}
