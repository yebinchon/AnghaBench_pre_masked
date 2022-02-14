
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ eDy; scalar_t__ eDx; scalar_t__ eM22; scalar_t__ eM21; scalar_t__ eM12; scalar_t__ eM11; } ;
typedef TYPE_1__ XFORM ;
typedef int BOOL ;


 float FUNC_0 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(const XFORM *VAR_0, const XFORM *VAR_1)
{
    return FUNC_0(VAR_0->eM11 - VAR_1->eM11) < 0.001f &&
        FUNC_0(VAR_0->eM12 - VAR_1->eM12) < 0.001f &&
        FUNC_0(VAR_0->eM21 - VAR_1->eM21) < 0.001f &&
        FUNC_0(VAR_0->eM22 - VAR_1->eM22) < 0.001f &&
        FUNC_0(VAR_0->eDx - VAR_1->eDx) < 0.001f &&
        FUNC_0(VAR_0->eDy - VAR_1->eDy) < 0.001f;
}
