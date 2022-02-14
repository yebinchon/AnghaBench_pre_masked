
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsToneCurve ;
typedef int cmsHPROFILE ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;


 int * FUNC_0 (int ,int,int,int const*,int const*,int const*,int const*,int) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int const) ;
 scalar_t__ FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,int *,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

cmsToneCurve* FUNC_6(cmsContext VAR_2,
                                   cmsUInt32Number VAR_3,
                                   cmsUInt32Number VAR_4,
                                   const cmsUInt32Number VAR_5[],
                                   const cmsHPROFILE VAR_6[],
                                   const cmsBool VAR_7[],
                                   const cmsFloat64Number VAR_8[],
                                   cmsUInt32Number VAR_9)
{
    cmsToneCurve *VAR_10, *VAR_11, *VAR_12;


    if (FUNC_2(VAR_2, VAR_6[0]) != VAR_0 ||
        FUNC_2(VAR_2, VAR_6[VAR_4-1])!= VAR_0) return ((void*)0);



    if (FUNC_3(VAR_2, VAR_6[VAR_4 - 1]) != VAR_1) return ((void*)0);



    VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_4 - 1, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    if (VAR_10 == ((void*)0)) return ((void*)0);

    VAR_11 = FUNC_0(VAR_2, VAR_3, 1,
                            VAR_5 + (VAR_4 - 1),
                            &VAR_6 [VAR_4 - 1],
                            VAR_7 + (VAR_4 - 1),
                            VAR_8 + (VAR_4 - 1),
                            VAR_9);
    if (VAR_11 == ((void*)0)) {
        FUNC_1(VAR_2, VAR_10);
        return ((void*)0);
    }



    VAR_12 = FUNC_5(VAR_2, VAR_10, VAR_11, VAR_3);


    FUNC_1(VAR_2, VAR_10); FUNC_1(VAR_2, VAR_11);


    if (VAR_12 == ((void*)0)) return ((void*)0);


    if (!FUNC_4(VAR_2, VAR_12)) {
        FUNC_1(VAR_2, VAR_12);
        return ((void*)0);
    }

    return VAR_12;
}
