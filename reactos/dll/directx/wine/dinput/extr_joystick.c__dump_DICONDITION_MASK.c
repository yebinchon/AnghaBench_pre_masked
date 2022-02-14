
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lDeadBand; int dwNegativeSaturation; int dwPositiveSaturation; int lNegativeCoefficient; int lPositiveCoefficient; int lOffset; } ;
typedef TYPE_1__* LPCDICONDITION ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(LPCDICONDITION VAR_0)
{
    FUNC_0("Condition has offset %d, pos/neg coefficients %d and %d, pos/neg saturations %d and %d, deadband %d\n",
          VAR_0->lOffset, VAR_0->lPositiveCoefficient, VAR_0->lNegativeCoefficient,
          VAR_0->dwPositiveSaturation, VAR_0->dwNegativeSaturation, VAR_0->lDeadBand);
}
