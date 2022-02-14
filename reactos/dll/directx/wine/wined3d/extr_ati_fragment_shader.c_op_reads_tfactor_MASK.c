
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct texture_stage_op {int carg0; int carg1; int carg2; int aarg0; int aarg1; int aarg2; scalar_t__ cop; scalar_t__ aop; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static BOOL FUNC_0(const struct texture_stage_op *VAR_3)
{
    return (VAR_3->carg0 & VAR_0) == VAR_1
            || (VAR_3->carg1 & VAR_0) == VAR_1
            || (VAR_3->carg2 & VAR_0) == VAR_1
            || (VAR_3->aarg0 & VAR_0) == VAR_1
            || (VAR_3->aarg1 & VAR_0) == VAR_1
            || (VAR_3->aarg2 & VAR_0) == VAR_1
            || VAR_3->cop == VAR_2
            || VAR_3->aop == VAR_2;
}
