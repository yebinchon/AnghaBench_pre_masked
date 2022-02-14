
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;


 int FUNC_0 (int ,int,int) ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static
cmsInt32Number FUNC_8(void)
{
    cmsHPROFILE VAR_3 = FUNC_1();
    cmsHPROFILE VAR_4 = FUNC_4(FUNC_2(), ((void*)0));
    cmsHTRANSFORM VAR_5;
    cmsInt32Number VAR_6;

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) return 0;

    VAR_5 = FUNC_5(FUNC_2(), VAR_4, VAR_2, VAR_3, VAR_1, VAR_0, 0);
    FUNC_3(FUNC_2(), VAR_3); FUNC_3(FUNC_2(), VAR_4);

    if (!FUNC_0(VAR_5, 0, 0)) return 0;
    if (!FUNC_0(VAR_5, 100, 255)) return 0;

    for (VAR_6=0; VAR_6 < 100; VAR_6++) {

        cmsUInt8Number VAR_7;

        VAR_7 = (cmsUInt8Number) FUNC_7(VAR_6 * 255.0 / 100.0 + 0.5);

        if (!FUNC_0(VAR_5, VAR_6, VAR_7)) return 0;
    }


    FUNC_6(FUNC_2(), VAR_5);
    return 1;
}
