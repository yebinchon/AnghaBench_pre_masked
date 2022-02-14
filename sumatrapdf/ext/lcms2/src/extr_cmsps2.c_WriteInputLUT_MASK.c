
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int cmsToneCurve ;
typedef int cmsPipeline ;
typedef int cmsIOHANDLER ;
typedef int * cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
typedef int cmsCIEXYZ ;
struct TYPE_4__ {TYPE_1__* core; } ;
typedef TYPE_2__ _cmsTRANSFORM ;
struct TYPE_3__ {int Lut; } ;


 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (int ,int *,int *,int,int *) ;
 int * FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int **,int,int*,int*,int*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int *,int,int,int ,int,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *,int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ,int ,int,int ) ;
 int FUNC_11 (int ,int *) ;
 int * FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ,char*,...) ;

__attribute__((used)) static
int FUNC_15(cmsContext VAR_5, cmsIOHANDLER* VAR_6, cmsHPROFILE VAR_7, cmsUInt32Number VAR_8, cmsUInt32Number VAR_9)
{
    cmsHPROFILE VAR_10;
    cmsHTRANSFORM VAR_11;
    cmsUInt32Number VAR_12;
    cmsUInt32Number VAR_13;
    int VAR_14;
    cmsHPROFILE VAR_15[2];
    cmsCIEXYZ VAR_16;




    VAR_13 = FUNC_10(VAR_5, VAR_7, 2, VAR_0);
    VAR_12 = FUNC_3(VAR_13);


    FUNC_9(VAR_5, &VAR_16, VAR_7, VAR_8, 0);


    VAR_10 = FUNC_6(VAR_5, ((void*)0));

    VAR_15[0] = VAR_7;
    VAR_15[1] = VAR_10;

    VAR_11 = FUNC_7(VAR_5, VAR_15, 2, VAR_13, VAR_2, VAR_8, 0);
    FUNC_5(VAR_5, VAR_10);

    if (VAR_11 == ((void*)0)) {

        FUNC_14(VAR_5, VAR_3, "Cannot create transform Profile -> Lab");
        return 0;
    }



    switch (VAR_12) {

    case 1: {
            cmsToneCurve* VAR_17 = FUNC_2(VAR_5, VAR_7, VAR_8);
            FUNC_0(VAR_5, VAR_6, VAR_17, &VAR_16);
            FUNC_11(VAR_5, VAR_17);
            }
            break;

    case 3:
    case 4: {
            cmsUInt32Number VAR_18 = VAR_1;
            cmsPipeline* VAR_19;
            _cmsTRANSFORM* VAR_20 = (_cmsTRANSFORM*) VAR_11;

            VAR_19 = FUNC_12(VAR_5, VAR_20 ->core->Lut);
            if (VAR_19 == ((void*)0)) return 0;

            VAR_9 |= VAR_4;
            FUNC_4(VAR_5, &VAR_19, VAR_8, &VAR_13, &VAR_18, &VAR_9);

            VAR_14 = FUNC_1(VAR_5, VAR_6, VAR_19, VAR_8, &VAR_16);
            FUNC_13(VAR_5, VAR_19);
            if (VAR_14 == 0) return 0;
            }
            break;

    default:

        FUNC_14(VAR_5, VAR_3, "Only 3, 4 channels supported for CSA. This profile has %d channels.", VAR_12);
        return 0;
    }


    FUNC_8(VAR_5, VAR_11);

    return 1;
}
