
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_3 (int ,void**) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_4()
{
  pthread_t VAR_3;
  pthread_t VAR_4;
  pthread_t VAR_5;
  pthread_t VAR_6;
  void* VAR_7 = (void*)0;
  void* VAR_8 = (void*)0;
  void* VAR_9 = (void*)0;
  void* VAR_10 = (void*)0;

  VAR_0 = 0;

  FUNC_1(FUNC_2(&VAR_3, ((void*)0), VAR_2, ((void*)0)) == 0);
  FUNC_0(500);
  FUNC_1(FUNC_2(&VAR_5, ((void*)0), VAR_1, (void *)(size_t)1) == 0);
  FUNC_0(500);
  FUNC_1(FUNC_2(&VAR_4, ((void*)0), VAR_2, ((void*)0)) == 0);
  FUNC_0(500);
  FUNC_1(FUNC_2(&VAR_6, ((void*)0), VAR_1, (void *)(size_t)2) == 0);

  FUNC_1(FUNC_3(VAR_3, &VAR_7) == 0);
  FUNC_1(FUNC_3(VAR_5, &VAR_9) == 0);
  FUNC_1(FUNC_3(VAR_4, &VAR_8) == 0);
  FUNC_1(FUNC_3(VAR_6, &VAR_10) == 0);

  FUNC_1((int)(size_t)VAR_7 == 10);
  FUNC_1((int)(size_t)VAR_9 == 0);
  FUNC_1((int)(size_t)VAR_8 == 20);
  FUNC_1((int)(size_t)VAR_10 == 20);

  return 0;
}
