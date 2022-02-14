
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numalloc; } ;
typedef int SetConstraintTriggerData ;
typedef TYPE_1__* SetConstraintState ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static SetConstraintState
FUNC_2(int VAR_3)
{
 SetConstraintState VAR_4;


 if (VAR_3 <= 0)
  VAR_3 = 1;




 VAR_4 = (SetConstraintState)
  FUNC_0(VAR_1,
          FUNC_1(VAR_0, VAR_2) +
          VAR_3 * sizeof(SetConstraintTriggerData));

 VAR_4->numalloc = VAR_3;

 return VAR_4;
}
