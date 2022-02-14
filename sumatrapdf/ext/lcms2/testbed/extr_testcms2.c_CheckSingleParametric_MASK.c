
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* dblfnptr ) (int,int const*) ;
typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef int cmsFloat64Number ;
typedef int cmsFloat32Number ;
typedef int cmsBool ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int,int,int ) ;
 int VAR_2 ;
 int * FUNC_2 (int ,int,int const*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,char*,char const*) ;

__attribute__((used)) static
cmsBool FUNC_6(const char* VAR_3, dblfnptr VAR_4, cmsInt32Number VAR_5, const cmsFloat64Number VAR_6[])
{
    cmsInt32Number VAR_7;
    cmsToneCurve* VAR_8;
    cmsToneCurve* VAR_9;
    char VAR_10[256];

    VAR_8 = FUNC_2(FUNC_0(), VAR_5, VAR_6);
    VAR_9 = FUNC_2(FUNC_0(), -VAR_5, VAR_6);

    for (VAR_7=0; VAR_7 <= 1000; VAR_7++) {

        cmsFloat32Number VAR_11 = (cmsFloat32Number) VAR_7 / 1000;
        cmsFloat32Number VAR_12, VAR_13, VAR_14, VAR_15;

        VAR_12 = VAR_4(VAR_11, VAR_6);
        VAR_13 = FUNC_3(FUNC_0(), VAR_8, VAR_11);
        VAR_14 = FUNC_3(FUNC_0(), VAR_9, VAR_13);

        VAR_15 = VAR_4(VAR_14, VAR_6);

        if (!FUNC_1(VAR_3, VAR_12, VAR_13, VAR_1))
            goto Error;

        FUNC_5(VAR_10, "Inverse %s", VAR_3);
        if (!FUNC_1(VAR_10, VAR_12, VAR_15, VAR_1))
            goto Error;
    }

    FUNC_4(FUNC_0(), VAR_8);
    FUNC_4(FUNC_0(), VAR_9);
    return VAR_2;

Error:
    FUNC_4(FUNC_0(), VAR_8);
    FUNC_4(FUNC_0(), VAR_9);
    return VAR_0;
}
