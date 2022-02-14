
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TimeLineID ;
typedef scalar_t__ RecoveryTargetTimeLineGoal ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int *,int ) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_3, void *VAR_4)
{
 VAR_2 = *((RecoveryTargetTimeLineGoal *) VAR_4);
 if (VAR_2 == VAR_0)
  VAR_1 = (TimeLineID) FUNC_0(VAR_3, ((void*)0), 0);
 else
  VAR_1 = 0;
}
