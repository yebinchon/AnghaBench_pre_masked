
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cmsUInt32Number ;
typedef int cmsPipeline ;
struct TYPE_3__ {int * (* Link ) (int ,scalar_t__,scalar_t__*,int *,int *,int *,scalar_t__) ;} ;
typedef TYPE_1__ cmsIntentsList ;
typedef int cmsHPROFILE ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,char*,scalar_t__) ;
 int * FUNC_3 (int ,scalar_t__,scalar_t__*,int *,int *,int *,scalar_t__) ;

cmsPipeline* FUNC_4(cmsContext VAR_7,
                              cmsUInt32Number VAR_8,
                              cmsUInt32Number VAR_9[],
                              cmsHPROFILE VAR_10[],
                              cmsBool VAR_11[],
                              cmsFloat64Number VAR_12[],
                              cmsUInt32Number VAR_13)
{
    cmsUInt32Number VAR_14;
    cmsIntentsList* VAR_15;


    if (VAR_8 <= 0 || VAR_8 > 255) {
         FUNC_2(VAR_7, VAR_5, "Couldn't link '%d' profiles", VAR_8);
        return ((void*)0);
    }

    for (VAR_14=0; VAR_14 < VAR_8; VAR_14++) {






        if (VAR_9[VAR_14] == VAR_1)
            VAR_11[VAR_14] = VAR_0;

        if (VAR_9[VAR_14] == VAR_2 || VAR_9[VAR_14] == VAR_3) {


            if (FUNC_1(VAR_7, VAR_10[VAR_14]) >= 0x4000000)
                VAR_11[VAR_14] = VAR_4;
        }
    }






    VAR_15 = FUNC_0(VAR_7, VAR_9[0]);
    if (VAR_15 == ((void*)0)) {
        FUNC_2(VAR_7, VAR_6, "Unsupported intent '%d'", VAR_9[0]);
        return ((void*)0);
    }


    return VAR_15 ->Link(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
}
