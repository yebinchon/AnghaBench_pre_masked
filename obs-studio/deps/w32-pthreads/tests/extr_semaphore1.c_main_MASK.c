
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sem_t ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_4 (int ,void**) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_8()
{
  pthread_t VAR_6;
  sem_t VAR_7;
  void* VAR_8 = (void*)-1;
  int VAR_9;

  FUNC_0(FUNC_3(&VAR_6, ((void*)0), VAR_5, ((void*)0)) == 0);
  FUNC_0(FUNC_4(VAR_6, &VAR_8) == 0);
  FUNC_0((int)(size_t)VAR_8 == 0);

  FUNC_0(FUNC_5(&VAR_7, VAR_1, 0) == 0);

  FUNC_0((VAR_9 = FUNC_7(&VAR_7)) == -1);

  if (VAR_9 == -1)
  {
    int VAR_10 = VAR_2;
    if (VAR_10 != VAR_0)
    {
      FUNC_2("main: sem_trywait 1: expecting error %s: got %s\n",
      VAR_3[VAR_0], VAR_3[VAR_10]); FUNC_1(VAR_4);
    }
    FUNC_0(VAR_10 == VAR_0);
  }
  else
  {
    FUNC_2("main: ok 1\n");
  }

  FUNC_0((VAR_9 = FUNC_6(&VAR_7)) == 0);

  FUNC_0((VAR_9 = FUNC_7(&VAR_7)) == 0);

  FUNC_0(FUNC_6(&VAR_7) == 0);

  return 0;
}
