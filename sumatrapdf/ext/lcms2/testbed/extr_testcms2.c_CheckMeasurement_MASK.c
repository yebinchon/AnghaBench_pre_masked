
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsTagSignature ;
typedef int cmsInt32Number ;
struct TYPE_4__ {double X; double Y; double Z; } ;
struct TYPE_5__ {double Flare; int Geometry; int Observer; int IlluminantType; TYPE_1__ Backing; } ;
typedef TYPE_2__ cmsICCMeasurementConditions ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 (char*,double,double) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsInt32Number VAR_1, cmsHPROFILE VAR_2, cmsTagSignature VAR_3)
{
    cmsICCMeasurementConditions *VAR_4, VAR_5;

    switch (VAR_1) {

        case 1:
            VAR_5.Backing.X = 0.1;
            VAR_5.Backing.Y = 0.2;
            VAR_5.Backing.Z = 0.3;
            VAR_5.Flare = 1.0;
            VAR_5.Geometry = 1;
            VAR_5.IlluminantType = VAR_0;
            VAR_5.Observer = 1;
            return FUNC_3(FUNC_0(), VAR_2, VAR_3, &VAR_5);


        case 2:
            VAR_4 = (cmsICCMeasurementConditions *) FUNC_2(FUNC_0(), VAR_2, VAR_3);
            if (VAR_4 == ((void*)0)) return 0;

            if (!FUNC_1("Backing", VAR_4 ->Backing.X, 0.1)) return 0;
            if (!FUNC_1("Backing", VAR_4 ->Backing.Y, 0.2)) return 0;
            if (!FUNC_1("Backing", VAR_4 ->Backing.Z, 0.3)) return 0;
            if (!FUNC_1("Flare", VAR_4 ->Flare, 1.0)) return 0;

            if (VAR_4 ->Geometry != 1) return 0;
            if (VAR_4 ->IlluminantType != VAR_0) return 0;
            if (VAR_4 ->Observer != 1) return 0;
            return 1;

        default:
            return 0;
    }
}
