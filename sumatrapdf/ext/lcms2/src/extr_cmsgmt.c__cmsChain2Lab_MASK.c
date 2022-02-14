
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int * cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;
typedef scalar_t__ cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int,int **,scalar_t__*,int*,double*,int *,int ,int,int,int) ;
 int * FUNC_2 (int ,int *) ;

cmsHTRANSFORM FUNC_3(cmsContext VAR_1,
                            cmsUInt32Number VAR_2,
                            cmsUInt32Number VAR_3,
                            cmsUInt32Number VAR_4,
                            const cmsUInt32Number VAR_5[],
                            const cmsHPROFILE VAR_6[],
                            const cmsBool VAR_7[],
                            const cmsFloat64Number VAR_8[],
                            cmsUInt32Number VAR_9)
{
    cmsHTRANSFORM VAR_10;
    cmsHPROFILE VAR_11;
    cmsHPROFILE VAR_12[256];
    cmsBool VAR_13[256];
    cmsFloat64Number VAR_14[256];
    cmsUInt32Number VAR_15[256];
    cmsUInt32Number VAR_16;



    if (VAR_2 > 254) return ((void*)0);


    VAR_11 = FUNC_2(VAR_1, ((void*)0));
    if (VAR_11 == ((void*)0)) return ((void*)0);


    for (VAR_16=0; VAR_16 < VAR_2; VAR_16++) {

        VAR_12[VAR_16] = VAR_6[VAR_16];
        VAR_13[VAR_16] = VAR_7[VAR_16];
        VAR_14[VAR_16] = VAR_8[VAR_16];
        VAR_15[VAR_16] = VAR_5[VAR_16];
    }


    VAR_12[VAR_2] = VAR_11;
    VAR_13[VAR_2] = 0;
    VAR_14[VAR_2] = 1.0;
    VAR_15[VAR_2] = VAR_0;


    VAR_10 = FUNC_1(VAR_1, VAR_2 + 1, VAR_12,
                                       VAR_13,
                                       VAR_15,
                                       VAR_14,
                                       ((void*)0), 0,
                                       VAR_3,
                                       VAR_4,
                                       VAR_9);

    FUNC_0(VAR_1, VAR_11);

    return VAR_10;
}
