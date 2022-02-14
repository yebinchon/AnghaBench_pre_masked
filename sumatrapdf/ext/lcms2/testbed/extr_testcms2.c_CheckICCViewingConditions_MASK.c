
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsInt32Number ;
struct TYPE_6__ {double X; double Y; double Z; } ;
struct TYPE_5__ {double X; double Y; double Z; } ;
struct TYPE_7__ {int IlluminantType; TYPE_2__ SurroundXYZ; TYPE_1__ IlluminantXYZ; } ;
typedef TYPE_3__ cmsICCViewingConditions ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 (char*,double,double,double) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,TYPE_3__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsInt32Number VAR_1, cmsHPROFILE VAR_2)
{
    cmsICCViewingConditions* VAR_3;
    cmsICCViewingConditions VAR_4;

    switch (VAR_1) {

        case 1:
            VAR_4.IlluminantType = 1;
            VAR_4.IlluminantXYZ.X = 0.1;
            VAR_4.IlluminantXYZ.Y = 0.2;
            VAR_4.IlluminantXYZ.Z = 0.3;
            VAR_4.SurroundXYZ.X = 0.4;
            VAR_4.SurroundXYZ.Y = 0.5;
            VAR_4.SurroundXYZ.Z = 0.6;

            if (!FUNC_3(FUNC_0(), VAR_2, VAR_0, &VAR_4)) return 0;
            return 1;

        case 2:
            VAR_3 = (cmsICCViewingConditions *) FUNC_2(FUNC_0(), VAR_2, VAR_0);
            if (VAR_3 == ((void*)0)) return 0;

            if (VAR_3 ->IlluminantType != 1) return 0;
            if (!FUNC_1("IlluminantXYZ.X", VAR_3 ->IlluminantXYZ.X, 0.1, 0.001)) return 0;
            if (!FUNC_1("IlluminantXYZ.Y", VAR_3 ->IlluminantXYZ.Y, 0.2, 0.001)) return 0;
            if (!FUNC_1("IlluminantXYZ.Z", VAR_3 ->IlluminantXYZ.Z, 0.3, 0.001)) return 0;

            if (!FUNC_1("SurroundXYZ.X", VAR_3 ->SurroundXYZ.X, 0.4, 0.001)) return 0;
            if (!FUNC_1("SurroundXYZ.Y", VAR_3 ->SurroundXYZ.Y, 0.5, 0.001)) return 0;
            if (!FUNC_1("SurroundXYZ.Z", VAR_3 ->SurroundXYZ.Z, 0.6, 0.001)) return 0;

            return 1;

        default:
            return 0;
    }

}
