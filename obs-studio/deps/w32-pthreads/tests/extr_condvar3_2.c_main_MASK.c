
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_12__ {long tv_sec; int tv_nsec; } ;
struct TYPE_11__ {long tv_sec; int tv_nsec; } ;
struct TYPE_10__ {char* nWaitersBlocked; char* nWaitersGone; char* nWaitersToUnblock; } ;
struct TYPE_9__ {int const millitm; scalar_t__ time; } ;
typedef TYPE_1__ PTW32_STRUCT_TIMEB ;
typedef int LPLONG ;
typedef int DWORD ;


 int FUNC_0 (int ,long) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 char** VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (TYPE_2__**) ;
 int FUNC_6 (TYPE_2__**) ;
 scalar_t__ FUNC_7 (TYPE_2__**,int *) ;
 scalar_t__ FUNC_8 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_9 (int ,void**) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int VAR_8 ;
 int VAR_9 ;

int
FUNC_14()
{
  int VAR_10;
  pthread_t VAR_11[VAR_0 + 1];
  void* VAR_12 = (void*)0;
  PTW32_STRUCT_TIMEB VAR_13;
  const DWORD VAR_14 = 1000000;

  FUNC_2(FUNC_7(&VAR_4, ((void*)0)) == 0);

  FUNC_2(FUNC_11(&VAR_6, ((void*)0)) == 0);


  FUNC_1(&VAR_13);

  VAR_1.tv_sec = VAR_2 = (long)VAR_13.time + 5;
  VAR_1.tv_nsec = VAR_2 = VAR_14 * VAR_13.millitm;

  FUNC_2(FUNC_12(&VAR_6) == 0);

  for (VAR_10 = 1; VAR_10 <= VAR_0; VAR_10++)
    {
      FUNC_2(FUNC_8(&VAR_11[VAR_10], ((void*)0), VAR_7, (void *)(size_t)VAR_10) == 0);
    }

  FUNC_2(FUNC_13(&VAR_6) == 0);

  for (VAR_10 = 1; VAR_10 <= VAR_0; VAR_10++)
    {
      FUNC_2(FUNC_9(VAR_11[VAR_10], &VAR_12) == 0);
 FUNC_2((int)(size_t)VAR_12 == VAR_10);
      if (FUNC_0((LPLONG)&VAR_3, 0L) > VAR_0/3)
        {
          FUNC_2(FUNC_5(&VAR_4) == 0);
        }



    }

  FUNC_2(VAR_3 == VAR_0 - VAR_9);

  {
  int VAR_15 = FUNC_6(&VAR_4);
  if (VAR_15 != 0)
    {
      FUNC_4(VAR_8, "Result = %s\n", VAR_5[VAR_15]);
 FUNC_4(VAR_8, "\tWaitersBlocked = %s\n", VAR_4->nWaitersBlocked);
 FUNC_4(VAR_8, "\tWaitersGone = %s\n", VAR_4->nWaitersGone);
 FUNC_4(VAR_8, "\tWaitersToUnblock = %s\n", VAR_4->nWaitersToUnblock);
 FUNC_3(VAR_8);
    }
  FUNC_2(VAR_15 == 0);
  }

  FUNC_2(FUNC_10(&VAR_6) == 0);

  return 0;
}
