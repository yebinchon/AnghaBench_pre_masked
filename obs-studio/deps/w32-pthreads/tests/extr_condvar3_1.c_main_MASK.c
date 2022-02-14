
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_12__ {long tv_sec; int tv_nsec; } ;
struct TYPE_11__ {char* nWaitersBlocked; char* nWaitersGone; char* nWaitersToUnblock; } ;
struct TYPE_10__ {int const millitm; scalar_t__ time; } ;
typedef TYPE_1__ PTW32_STRUCT_TIMEB ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_8__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 char** VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_2__**) ;
 scalar_t__ FUNC_5 (TYPE_2__**,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__**) ;
 scalar_t__ FUNC_7 (TYPE_2__**,int *) ;
 scalar_t__ FUNC_8 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_9 (int ,void**) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int
FUNC_14()
{
  int VAR_13;
  pthread_t VAR_14[VAR_0 + 1];
  void* VAR_15 = (void*)0;
  PTW32_STRUCT_TIMEB VAR_16;
  const DWORD VAR_17 = 1000000;

  FUNC_1(FUNC_5(&VAR_3, ((void*)0)) == 0);
  FUNC_1(FUNC_5(&VAR_4, ((void*)0)) == 0);

  FUNC_1(FUNC_11(&VAR_6, ((void*)0)) == 0);
  FUNC_1(FUNC_11(&VAR_7, ((void*)0)) == 0);


  FUNC_0(&VAR_16);

  VAR_1.tv_sec = (long)VAR_16.time;
  VAR_1.tv_nsec = VAR_17 * VAR_16.millitm;

  VAR_1.tv_sec += 5;

  FUNC_1(FUNC_12(&VAR_7) == 0);

  for (VAR_13 = 1; VAR_13 <= VAR_0; VAR_13++)
    {
      FUNC_1(FUNC_8(&VAR_14[VAR_13], ((void*)0), VAR_8, (void *)(size_t)VAR_13) == 0);
    }

  do {
    FUNC_1(FUNC_7(&VAR_4,&VAR_7) == 0);
  } while ( VAR_0 > VAR_12 );

  FUNC_1(FUNC_13(&VAR_7) == 0);

  for (VAR_13 = VAR_0/3; VAR_13 <= 2*VAR_0/3; VAR_13++)
    {

      FUNC_1(FUNC_6(&VAR_3) == 0);


      VAR_9++;
    }

  for (VAR_13 = 1; VAR_13 <= VAR_0; VAR_13++)
    {
      FUNC_1(FUNC_9(VAR_14[VAR_13], &VAR_15) == 0);
        FUNC_1((int)(size_t)VAR_15 == VAR_13);
    }

      FUNC_3(VAR_10, "awk = %d\n", VAR_2);
      FUNC_3(VAR_10, "sig = %d\n", VAR_9);
      FUNC_3(VAR_10, "tot = %d\n", VAR_11);

  FUNC_1(VAR_9 == VAR_2);
  FUNC_1(VAR_11 == VAR_0 - VAR_9);

  FUNC_1(FUNC_4(&VAR_4) == 0);

  {
  int VAR_18 = FUNC_4(&VAR_3);
  if (VAR_18 != 0)
    {
      FUNC_3(VAR_10, "Result = %s\n", VAR_5[VAR_18]);
        FUNC_3(VAR_10, "\tWaitersBlocked = %s\n", VAR_3->nWaitersBlocked);
        FUNC_3(VAR_10, "\tWaitersGone = %s\n", VAR_3->nWaitersGone);
        FUNC_3(VAR_10, "\tWaitersToUnblock = %s\n", VAR_3->nWaitersToUnblock);
        FUNC_2(VAR_10);
    }
  FUNC_1(VAR_18 == 0);
  }

  FUNC_1(FUNC_10(&VAR_7) == 0);
  FUNC_1(FUNC_10(&VAR_6) == 0);

  return 0;
}
