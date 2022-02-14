
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int cmsUInt16Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int*,int*,int) ;
 int VAR_3 ;

__attribute__((used)) static
int FUNC_7(void)
{
    cmsHPROFILE VAR_4 = FUNC_0();
    cmsHPROFILE VAR_5 = FUNC_4(FUNC_1());

    cmsHTRANSFORM VAR_6 = FUNC_3(FUNC_1(), VAR_4, VAR_2, VAR_5, VAR_1, VAR_0, VAR_3);

    cmsUInt8Number VAR_7[4] = { 40, 41, 41, 0xfa };
    cmsUInt16Number VAR_8[4];

    FUNC_6(FUNC_1(), VAR_6, VAR_7, VAR_8, 1);
    FUNC_2(FUNC_1(), VAR_4);
    FUNC_2(FUNC_1(), VAR_5);
    FUNC_5(FUNC_1(), VAR_6);

    if (VAR_8[0] != 0xf622 || VAR_8[1] != 0x7f24 || VAR_8[2] != 0x7f24)
        return 0;

    return 1;
}
