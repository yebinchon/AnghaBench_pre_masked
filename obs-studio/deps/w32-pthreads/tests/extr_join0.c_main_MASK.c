
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_2 (int ,void**) ;

int
FUNC_3(int VAR_1, char * VAR_2[])
{
  pthread_t VAR_3;
  void* VAR_4 = (void*)0;


  FUNC_0(FUNC_1(&VAR_3, ((void*)0), VAR_0, (void *) 123) == 0);

  FUNC_0(FUNC_2(VAR_3, &VAR_4) == 0);

  FUNC_0((int)(size_t)VAR_4 == 123);


  return 0;
}
