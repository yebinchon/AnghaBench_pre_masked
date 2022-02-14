
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RecoveryTargetTimeLineGoal ;
typedef int GucSource ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int *,int ) ;

__attribute__((used)) static bool
FUNC_4(char **VAR_7, void **VAR_8, GucSource VAR_9)
{
 RecoveryTargetTimeLineGoal VAR_10;
 RecoveryTargetTimeLineGoal *VAR_11;

 if (FUNC_2(*VAR_7, "current") == 0)
  VAR_10 = VAR_3;
 else if (FUNC_2(*VAR_7, "latest") == 0)
  VAR_10 = VAR_4;
 else
 {
  VAR_10 = VAR_5;

  VAR_6 = 0;
  FUNC_3(*VAR_7, ((void*)0), 0);
  if (VAR_6 == VAR_0 || VAR_6 == VAR_1)
  {
   FUNC_0("recovery_target_timeline is not a valid number.");
   return 0;
  }
 }

 VAR_11 = (RecoveryTargetTimeLineGoal *) FUNC_1(VAR_2, sizeof(RecoveryTargetTimeLineGoal));
 *VAR_11 = VAR_10;
 *VAR_8 = (void *) VAR_11;

 return 1;
}
