
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ eDy; scalar_t__ eDx; scalar_t__ eM22; scalar_t__ eM21; scalar_t__ eM12; scalar_t__ eM11; } ;
typedef TYPE_1__ XFORM ;


 double FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(int VAR_0, XFORM *VAR_1, XFORM *VAR_2)
{
    FUNC_1(FUNC_0(VAR_1->eM11 - VAR_2->eM11) < 0.001, "%d: got %f expect %f\n", VAR_0, VAR_1->eM11, VAR_2->eM11);
    FUNC_1(FUNC_0(VAR_1->eM12 - VAR_2->eM12) < 0.001, "%d: got %f expect %f\n", VAR_0, VAR_1->eM12, VAR_2->eM12);
    FUNC_1(FUNC_0(VAR_1->eM21 - VAR_2->eM21) < 0.001, "%d: got %f expect %f\n", VAR_0, VAR_1->eM21, VAR_2->eM21);
    FUNC_1(FUNC_0(VAR_1->eM22 - VAR_2->eM22) < 0.001, "%d: got %f expect %f\n", VAR_0, VAR_1->eM22, VAR_2->eM22);
    FUNC_1(FUNC_0(VAR_1->eDx - VAR_2->eDx) < 0.001, "%d: got %f expect %f\n", VAR_0, VAR_1->eDx, VAR_2->eDx);
    FUNC_1(FUNC_0(VAR_1->eDy - VAR_2->eDy) < 0.001, "%d: got %f expect %f\n", VAR_0, VAR_1->eDy, VAR_2->eDy);
}
