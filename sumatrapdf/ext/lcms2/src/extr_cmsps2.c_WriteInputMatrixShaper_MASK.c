
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsToneCurve ;
typedef int cmsStage ;
struct TYPE_5__ {TYPE_1__* v; } ;
typedef TYPE_2__ cmsMAT3 ;
typedef int cmsIOHANDLER ;
typedef int cmsHPROFILE ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef scalar_t__ cmsColorSpaceSignature ;
typedef int cmsCIEXYZ ;
struct TYPE_4__ {int * n; } ;
typedef int Mat ;


 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (int ,int *,int *,int **,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

__attribute__((used)) static
int FUNC_8(cmsContext VAR_5, cmsIOHANDLER* VAR_6, cmsHPROFILE VAR_7, cmsStage* VAR_8, cmsStage* VAR_9)
{
    cmsColorSpaceSignature VAR_10;
    int VAR_11;
    cmsCIEXYZ VAR_12;

    VAR_10 = FUNC_5(VAR_5, VAR_7);

    FUNC_4(VAR_5, &VAR_12, VAR_7, VAR_0, 0);

    if (VAR_10 == VAR_3) {

        cmsToneCurve** VAR_13 = FUNC_3(VAR_9);
        VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_13[0], &VAR_12);

    }
    else
        if (VAR_10 == VAR_4) {

            cmsMAT3 VAR_14;
            int VAR_15, VAR_16;

            FUNC_7(&VAR_14, FUNC_2(VAR_8), sizeof(VAR_14));

            for (VAR_15 = 0; VAR_15 < 3; VAR_15++)
                for (VAR_16 = 0; VAR_16 < 3; VAR_16++)
                    VAR_14.v[VAR_15].n[VAR_16] *= VAR_1;

            VAR_11 = FUNC_1(VAR_5, VAR_6, (cmsFloat64Number *) &VAR_14,
                FUNC_3(VAR_9),
                &VAR_12);
        }
        else {

            FUNC_6(VAR_5, VAR_2, "Profile is not suitable for CSA. Unsupported colorspace.");
            return 0;
        }

    return VAR_11;
}
