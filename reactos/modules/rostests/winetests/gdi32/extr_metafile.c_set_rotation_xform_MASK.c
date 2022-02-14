
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float eM12; float eM21; int eDx; int eDy; void* eM22; void* eM11; } ;
typedef TYPE_1__ XFORM ;


 void* FUNC_0 (float) ;
 float FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(XFORM *VAR_0, float VAR_1, int VAR_2, int VAR_3)
{
    VAR_0->eM11 = FUNC_0(VAR_1);
    VAR_0->eM12 = -1.f * FUNC_1(VAR_1);
    VAR_0->eM21 = FUNC_1(VAR_1);
    VAR_0->eM22 = FUNC_0(VAR_1);
    VAR_0->eDx = VAR_2;
    VAR_0->eDy = VAR_3;
}
