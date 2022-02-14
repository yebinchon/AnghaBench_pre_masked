
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

void *
FUNC_6(void * VAR_5)
{
  sem_t VAR_6;
  int VAR_7;

  FUNC_0(FUNC_3(&VAR_6, VAR_1, 0) == 0);

  FUNC_0((VAR_7 = FUNC_5(&VAR_6)) == -1);

  if ( VAR_7 == -1 )
  {
    int VAR_8 = VAR_2;
    if (VAR_8 != VAR_0)
    {
      FUNC_2("thread: sem_trywait 1: expecting error %s: got %s\n",
      VAR_3[VAR_0], VAR_3[VAR_8]); FUNC_1(VAR_4);
    }
    FUNC_0(VAR_8 == VAR_0);
  }
  else
  {
    FUNC_2("thread: ok 1\n");
  }

  FUNC_0((VAR_7 = FUNC_4(&VAR_6)) == 0);

  FUNC_0((VAR_7 = FUNC_5(&VAR_6)) == 0);

  FUNC_0(FUNC_4(&VAR_6) == 0);

  return ((void*)0);
}
