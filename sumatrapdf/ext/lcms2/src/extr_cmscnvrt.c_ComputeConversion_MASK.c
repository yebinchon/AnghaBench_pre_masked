
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int * n; } ;
typedef TYPE_1__ cmsVEC3 ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsMAT3 ;
typedef int cmsHPROFILE ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
struct TYPE_14__ {scalar_t__ X; scalar_t__ Y; scalar_t__ Z; } ;
typedef TYPE_2__ cmsCIEXYZ ;
typedef scalar_t__ cmsBool ;


 int FUNC_0 (int ,int ,TYPE_2__*,int *,TYPE_2__*,int *,int *) ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_2__*,int *,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 (int ,TYPE_1__*,int ,int ,int ) ;
 int FUNC_6 (int ,TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,TYPE_2__*,int ,scalar_t__,int ) ;

__attribute__((used)) static
cmsBool FUNC_8(cmsContext VAR_4,
                          cmsUInt32Number VAR_5,
                          cmsHPROFILE VAR_6[],
                          cmsUInt32Number VAR_7,
                          cmsBool VAR_8,
                          cmsFloat64Number VAR_9,
                          cmsMAT3* VAR_10, cmsVEC3* VAR_11)
{

    int VAR_12;


    FUNC_2(VAR_4, VAR_10);
    FUNC_5(VAR_4, VAR_11, 0, 0, 0);


    if (VAR_7 == VAR_1) {

        cmsCIEXYZ VAR_13, VAR_14;
        cmsMAT3 VAR_15, VAR_16;

        FUNC_4(VAR_4, &VAR_13, VAR_6[VAR_5-1]);
        FUNC_3(VAR_4, &VAR_15, VAR_6[VAR_5-1]);

        FUNC_4(VAR_4, &VAR_14, VAR_6[VAR_5]);
        FUNC_3(VAR_4, &VAR_16, VAR_6[VAR_5]);

        if (!FUNC_0(VAR_4, VAR_9,
                                  &VAR_13, &VAR_15,
                                  &VAR_14, &VAR_16, VAR_10)) return VAR_0;

    }
    else {


        if (VAR_8) {

            cmsCIEXYZ VAR_17, VAR_18;

            FUNC_6(VAR_4, &VAR_17, VAR_6[VAR_5-1], VAR_7, 0);
            FUNC_7(VAR_4, &VAR_18, VAR_6[VAR_5], VAR_7, 0);


            if (VAR_17.X != VAR_18.X ||
                VAR_17.Y != VAR_18.Y ||
                VAR_17.Z != VAR_18.Z)
                    FUNC_1(VAR_4, &VAR_17, &VAR_18, VAR_10, VAR_11);
        }
    }
    for (VAR_12=0; VAR_12 < 3; VAR_12++) {
        VAR_11 ->n[VAR_12] /= VAR_2;
    }

    return VAR_3;
}
