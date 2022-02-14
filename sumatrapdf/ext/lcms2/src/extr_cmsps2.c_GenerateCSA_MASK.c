
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int cmsStage ;
typedef int cmsPipeline ;
struct TYPE_6__ {int UsedSpace; } ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
typedef scalar_t__ cmsColorSpaceSignature ;


 int FUNC_0 (int ,TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int *,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int ,int ) ;
 int * FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *,int,int ,int ,int **,int **) ;
 int FUNC_7 (int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,int ,char*) ;

__attribute__((used)) static
cmsUInt32Number FUNC_9(cmsContext VAR_6,
                            cmsHPROFILE VAR_7,
                            cmsUInt32Number VAR_8,
                            cmsUInt32Number VAR_9,
                            cmsIOHANDLER* VAR_10)
{
    cmsUInt32Number VAR_11;
    cmsPipeline* VAR_12 = ((void*)0);
    cmsStage* VAR_13, *VAR_14;



    if (FUNC_4(VAR_6, VAR_7) == VAR_4) {

        if (!FUNC_2(VAR_6, VAR_10, VAR_7, VAR_8)) goto Error;
    }
    else {




        cmsColorSpaceSignature VAR_15 = FUNC_5(VAR_6, VAR_7);

        if (VAR_15 != VAR_5 &&
            VAR_15 != VAR_2) {

                FUNC_8(VAR_6, VAR_0, "Invalid output color space");
                goto Error;
        }



        VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_8);
        if (VAR_12 == ((void*)0)) goto Error;



        if (FUNC_6(VAR_6, VAR_12, 2, VAR_1, VAR_3, &VAR_14, &VAR_13)) {

            if (!FUNC_1(VAR_6, VAR_10, VAR_7, VAR_13, VAR_14)) goto Error;

        }
        else {

           if (!FUNC_0(VAR_6, VAR_10, VAR_7, VAR_8, VAR_9)) goto Error;
        }
    }



    VAR_11 = VAR_10 ->UsedSpace;


    if (VAR_12 != ((void*)0)) FUNC_7(VAR_6, VAR_12);


    return VAR_11;

Error:
    if (VAR_12 != ((void*)0)) FUNC_7(VAR_6, VAR_12);
    return 0;
}
