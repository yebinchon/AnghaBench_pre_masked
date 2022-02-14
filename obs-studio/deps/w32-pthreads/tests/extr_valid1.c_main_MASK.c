
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int ,void**) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int VAR_2 ;

int
FUNC_5()
{
  pthread_t VAR_3;
  void * VAR_4 = ((void*)0);

  VAR_2 = 0;
  FUNC_0(FUNC_1(&VAR_3, ((void*)0), VAR_1, ((void*)0)) == 0);
  FUNC_0(FUNC_2(VAR_3, &VAR_4) == 0);
  FUNC_0((int)(size_t)VAR_4 == 0);
  FUNC_0(VAR_2 == 1);
  FUNC_4();
  FUNC_0(FUNC_3(VAR_3, 0) == VAR_0);

  return 0;
}
