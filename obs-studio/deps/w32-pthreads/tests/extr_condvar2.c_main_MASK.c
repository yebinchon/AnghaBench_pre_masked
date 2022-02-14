
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timespec {long tv_sec; int tv_nsec; int member_1; int member_0; } ;
struct TYPE_8__ {char* nWaitersBlocked; char* nWaitersGone; char* nWaitersToUnblock; } ;
struct TYPE_7__ {int const millitm; scalar_t__ time; } ;
typedef TYPE_1__ PTW32_STRUCT_TIMEB ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_1 ;
 char** VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__**) ;
 scalar_t__ FUNC_5 (TYPE_2__**,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__**,int *,struct timespec*) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_4 ;

int
FUNC_10()
{
  struct timespec VAR_5 = { 0, 0 };
  PTW32_STRUCT_TIMEB VAR_6;
  const DWORD VAR_7 = 1000000;

  FUNC_1(FUNC_5(&VAR_1, ((void*)0)) == 0);

  FUNC_1(FUNC_7(&VAR_3, ((void*)0)) == 0);

  FUNC_1(FUNC_8(&VAR_3) == 0);


  FUNC_0(&VAR_6);

  VAR_5.tv_sec = (long)VAR_6.time;
  VAR_5.tv_nsec = VAR_7 * VAR_6.millitm;

  VAR_5.tv_sec += 1;

  FUNC_1(FUNC_6(&VAR_1, &VAR_3, &VAR_5) == VAR_0);

  FUNC_1(FUNC_9(&VAR_3) == 0);

  {
  int VAR_8 = FUNC_4(&VAR_1);
  if (VAR_8 != 0)
    {
      FUNC_3(VAR_4, "Result = %s\n", VAR_2[VAR_8]);
 FUNC_3(VAR_4, "\tWaitersBlocked = %s\n", VAR_1->nWaitersBlocked);
 FUNC_3(VAR_4, "\tWaitersGone = %s\n", VAR_1->nWaitersGone);
 FUNC_3(VAR_4, "\tWaitersToUnblock = %s\n", VAR_1->nWaitersToUnblock);
 FUNC_2(VAR_4);
    }
  FUNC_1(VAR_8 == 0);
  }

  return 0;
}
