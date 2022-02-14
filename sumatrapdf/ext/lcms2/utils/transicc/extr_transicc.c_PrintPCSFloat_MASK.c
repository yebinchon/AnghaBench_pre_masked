
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsFloat64Number ;
typedef int cmsContext ;
struct TYPE_4__ {double L; double a; double b; double X; double Y; double Z; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ cmsCIEXYZ ;
typedef TYPE_1__ cmsCIELab ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int *,TYPE_1__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,double,double,double,double,double,double) ;

__attribute__((used)) static
void FUNC_2(cmsContext VAR_3, cmsFloat64Number VAR_4[])
{
    if (VAR_0 > 1 && VAR_2 && VAR_1) {

        cmsCIEXYZ VAR_5 = { 0, 0, 0 };
        cmsCIELab VAR_6 = { 0, 0, 0 };

        if (VAR_2) FUNC_0(VAR_3, VAR_2, VAR_4, &VAR_5, 1);
        if (VAR_1) FUNC_0(VAR_3, VAR_1, VAR_4, &VAR_6, 1);

        FUNC_1("[PCS] Lab=(%.4f,%.4f,%.4f) XYZ=(%.4f,%.4f,%.4f)\n", VAR_6.L, VAR_6.a, VAR_6.b,
            VAR_5.X * 100.0, VAR_5.Y * 100.0, VAR_5.Z * 100.0);

    }
}
