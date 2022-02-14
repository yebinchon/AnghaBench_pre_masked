
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int owner; int state; } ;
typedef scalar_t__ LWLockMode ;
typedef TYPE_1__ LWLock ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static bool
FUNC_4(LWLock *VAR_6, LWLockMode VAR_7)
{
 uint32 VAR_8;

 FUNC_0(VAR_7 == VAR_0 || VAR_7 == VAR_2);





 VAR_8 = FUNC_2(&VAR_6->state);


 while (1)
 {
  uint32 VAR_9;
  bool VAR_10;

  VAR_9 = VAR_8;

  if (VAR_7 == VAR_0)
  {
   VAR_10 = (VAR_8 & VAR_1) == 0;
   if (VAR_10)
    VAR_9 += VAR_3;
  }
  else
  {
   VAR_10 = (VAR_8 & VAR_3) == 0;
   if (VAR_10)
    VAR_9 += VAR_4;
  }
  if (FUNC_1(&VAR_6->state,
             &VAR_8, VAR_9))
  {
   if (VAR_10)
   {





    return 0;
   }
   else
    return 1;
  }
 }
 FUNC_3();
}
