
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int cmsInt32Number ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_5(void)
{
    cmsToneCurve* VAR_0, *VAR_1;
    cmsUInt16Number VAR_2[16];

    VAR_2[0] = 0;
    VAR_2[1] = 0;
    VAR_2[2] = 0;
    VAR_2[3] = 0;
    VAR_2[4] = 0;
    VAR_2[5] = 0x5555;
    VAR_2[6] = 0x6666;
    VAR_2[7] = 0x7777;
    VAR_2[8] = 0x8888;
    VAR_2[9] = 0x9999;
    VAR_2[10]= 0xffff;
    VAR_2[11]= 0xffff;
    VAR_2[12]= 0xffff;
    VAR_2[13]= 0xffff;
    VAR_2[14]= 0xffff;
    VAR_2[15]= 0xffff;

    VAR_0 = FUNC_2(FUNC_1(), 16, VAR_2);
    VAR_1 = FUNC_4(FUNC_1(), VAR_0);


    if (!FUNC_0(VAR_1, 0x5555, 0x5555)) return 0;
    if (!FUNC_0(VAR_1, 0x7777, 0x7777)) return 0;


    if (!FUNC_0(VAR_1, 0x0000, 0x4444)) return 0;


    if (!FUNC_0(VAR_1, 0xFFFF, 0xFFFF)) return 0;

    FUNC_3(FUNC_1(), VAR_0);
    FUNC_3(FUNC_1(), VAR_1);

    return 1;
}
