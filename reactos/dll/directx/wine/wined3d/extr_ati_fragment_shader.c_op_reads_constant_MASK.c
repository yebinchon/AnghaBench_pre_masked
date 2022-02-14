
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct texture_stage_op {int carg0; int carg1; int carg2; int aarg0; int aarg1; int aarg2; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const struct texture_stage_op *VAR_2)
{
    return (VAR_2->carg0 & VAR_1) == VAR_0
            || (VAR_2->carg1 & VAR_1) == VAR_0
            || (VAR_2->carg2 & VAR_1) == VAR_0
            || (VAR_2->aarg0 & VAR_1) == VAR_0
            || (VAR_2->aarg1 & VAR_1) == VAR_0
            || (VAR_2->aarg2 & VAR_1) == VAR_0;
}
