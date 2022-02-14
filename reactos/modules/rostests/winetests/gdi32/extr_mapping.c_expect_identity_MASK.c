
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double eM11; double eM12; double eM21; double eM22; double eDx; double eDy; } ;
typedef TYPE_1__ XFORM ;


 int FUNC_0 (int,char*,int,double) ;

__attribute__((used)) static inline void FUNC_1(int VAR_0, XFORM *VAR_1)
{
    FUNC_0(VAR_1->eM11 == 1.0, "%d: got %f\n", VAR_0, VAR_1->eM11);
    FUNC_0(VAR_1->eM12 == 0.0, "%d: got %f\n", VAR_0, VAR_1->eM12);
    FUNC_0(VAR_1->eM21 == 0.0, "%d: got %f\n", VAR_0, VAR_1->eM21);
    FUNC_0(VAR_1->eM22 == 1.0, "%d: got %f\n", VAR_0, VAR_1->eM22);
    FUNC_0(VAR_1->eDx == 0.0, "%d: got %f\n", VAR_0, VAR_1->eDx);
    FUNC_0(VAR_1->eDy == 0.0, "%d: got %f\n", VAR_0, VAR_1->eDy);
}
