
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_9__ {long tv_sec; int tv_nsec; } ;
struct TYPE_8__ {char* nWaitersBlocked; char* nWaitersGone; char* nWaitersToUnblock; } ;
struct TYPE_7__ {int const millitm; scalar_t__ time; } ;
typedef TYPE_1__ PTW32_STRUCT_TIMEB ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_2 ;
 char** VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__**) ;
 scalar_t__ FUNC_5 (TYPE_2__**,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_7 (int ,void**) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_6 ;

int
FUNC_11()
{
  int VAR_7;
  pthread_t VAR_8[VAR_0 + 1];
  void* VAR_9 = (void*)0;
  PTW32_STRUCT_TIMEB VAR_10;
  const DWORD VAR_11 = 1000000;

  FUNC_1(FUNC_5(&VAR_2, ((void*)0)) == 0);

  FUNC_1(FUNC_8(&VAR_4, ((void*)0)) == 0);


  FUNC_0(&VAR_10);

  VAR_1.tv_sec = (long)VAR_10.time;
  VAR_1.tv_nsec = VAR_11 * VAR_10.millitm;

  VAR_1.tv_sec += 5;

  FUNC_1(FUNC_9(&VAR_4) == 0);

  for (VAR_7 = 1; VAR_7 <= VAR_0; VAR_7++)
    {
      FUNC_1(FUNC_6(&VAR_8[VAR_7], ((void*)0), VAR_5, (void *)(size_t)VAR_7) == 0);
    }

  FUNC_1(FUNC_10(&VAR_4) == 0);

  for (VAR_7 = 1; VAR_7 <= VAR_0; VAR_7++)
    {
      FUNC_1(FUNC_7(VAR_8[VAR_7], &VAR_9) == 0);
 FUNC_1((int)(size_t)VAR_9 == VAR_7);
    }

  {
  int VAR_12 = FUNC_4(&VAR_2);
  if (VAR_12 != 0)
    {
      FUNC_3(VAR_6, "Result = %s\n", VAR_3[VAR_12]);
 FUNC_3(VAR_6, "\tWaitersBlocked = %s\n", VAR_2->nWaitersBlocked);
 FUNC_3(VAR_6, "\tWaitersGone = %s\n", VAR_2->nWaitersGone);
 FUNC_3(VAR_6, "\tWaitersToUnblock = %s\n", VAR_2->nWaitersToUnblock);
 FUNC_2(VAR_6);
    }
  FUNC_1(VAR_12 == 0);
  }

  return 0;
}
