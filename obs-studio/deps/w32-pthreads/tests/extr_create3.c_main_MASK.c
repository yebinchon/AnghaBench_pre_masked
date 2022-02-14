
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_4 (int ,void**) ;
 int VAR_3 ;

int
FUNC_5()
{
  pthread_t VAR_4;
  pthread_attr_t VAR_5;
  void * VAR_6 = ((void*)0);
  int VAR_7;

  FUNC_1(&VAR_5);
  FUNC_2(&VAR_5, VAR_1);

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    {
      VAR_3 = 0;
      FUNC_0(FUNC_3(&VAR_4, &VAR_5, VAR_2, (void *)(size_t)1) == 0);
      FUNC_0(FUNC_4(VAR_4, &VAR_6) == 0);
      FUNC_0((int)(size_t)VAR_6 == 0);
      FUNC_0(VAR_3 == 1);
    }

  return 0;
}
