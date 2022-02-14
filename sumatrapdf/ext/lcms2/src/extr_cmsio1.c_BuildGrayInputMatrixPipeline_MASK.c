
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int cmsPipeline ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,int,int,int ,int *) ;
 int FUNC_8 (int ,int,int **) ;

__attribute__((used)) static
cmsPipeline* FUNC_9(cmsContext VAR_5, cmsHPROFILE VAR_6)
{
    cmsToneCurve *VAR_7;
    cmsPipeline* VAR_8;

    VAR_7 = (cmsToneCurve *) FUNC_6(VAR_5, VAR_6, VAR_3);
    if (VAR_7 == ((void*)0)) return ((void*)0);

    VAR_8 = FUNC_3(VAR_5, 1, 3);
    if (VAR_8 == ((void*)0))
        goto Error;

    if (FUNC_2(VAR_5, VAR_6) == VAR_4) {


        cmsUInt16Number VAR_9[2] = { 0x8080, 0x8080 };
        cmsToneCurve* VAR_10;
        cmsToneCurve* VAR_11[3];

        VAR_10 = FUNC_0(VAR_5, 2, VAR_9);

        if (VAR_10 == ((void*)0))
            goto Error;

        VAR_11[0] = VAR_7;
        VAR_11[1] = VAR_10;
        VAR_11[2] = VAR_10;

        if (!FUNC_5(VAR_5, VAR_8, VAR_2, FUNC_7(VAR_5, 3, 1, VAR_1, ((void*)0))) ||
            !FUNC_5(VAR_5, VAR_8, VAR_2, FUNC_8(VAR_5, 3, VAR_11))) {
                FUNC_1(VAR_5, VAR_10);
                goto Error;
        }

        FUNC_1(VAR_5, VAR_10);

    }
    else {

        if (!FUNC_5(VAR_5, VAR_8, VAR_2, FUNC_8(VAR_5, 1, &VAR_7)) ||
            !FUNC_5(VAR_5, VAR_8, VAR_2, FUNC_7(VAR_5, 3, 1, VAR_0, ((void*)0))))
            goto Error;
    }

    return VAR_8;

Error:
    FUNC_4(VAR_5, VAR_8);
    return ((void*)0);
}
