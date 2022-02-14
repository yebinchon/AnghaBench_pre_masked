
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ acquired_by; int origin_cv; } ;
typedef int Datum ;
typedef int ConditionVariable ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_3(int VAR_4, Datum VAR_5)
{
 ConditionVariable *VAR_6 = ((void*)0);

 FUNC_1(VAR_2, VAR_0);

 if (VAR_3 != ((void*)0) &&
  VAR_3->acquired_by == VAR_1)
 {
  VAR_6 = &VAR_3->origin_cv;

  VAR_3->acquired_by = 0;
  VAR_3 = ((void*)0);
 }

 FUNC_2(VAR_2);

 if (VAR_6)
  FUNC_0(VAR_6);
}
