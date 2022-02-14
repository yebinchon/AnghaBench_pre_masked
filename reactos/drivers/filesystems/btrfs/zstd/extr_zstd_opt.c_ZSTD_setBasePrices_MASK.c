
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offCodeSum; void* offCodeSumBasePrice; int matchLengthSum; void* matchLengthSumBasePrice; int litLengthSum; void* litLengthSumBasePrice; int litSum; void* litSumBasePrice; } ;
typedef TYPE_1__ optState_t ;


 void* FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(optState_t* VAR_0, int VAR_1)
{
    VAR_0->litSumBasePrice = FUNC_0(VAR_0->litSum, VAR_1);
    VAR_0->litLengthSumBasePrice = FUNC_0(VAR_0->litLengthSum, VAR_1);
    VAR_0->matchLengthSumBasePrice = FUNC_0(VAR_0->matchLengthSum, VAR_1);
    VAR_0->offCodeSumBasePrice = FUNC_0(VAR_0->offCodeSum, VAR_1);
}
