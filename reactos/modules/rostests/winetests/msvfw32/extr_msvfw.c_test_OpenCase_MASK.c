
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
struct TYPE_3__ {int dwSize; scalar_t__* szName; } ;
typedef TYPE_1__ ICINFO ;
typedef scalar_t__ HIC ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char,char,char,char) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (scalar_t__*) ;

__attribute__((used)) static void FUNC_8(void)
{
    HIC VAR_3;
    ICINFO VAR_4;

    VAR_3 = FUNC_2(FUNC_4('v','i','d','c'),0,VAR_2);
    FUNC_5(0!=VAR_3,"ICOpen(vidc.0) failed\n");
    if (VAR_3) {
        VAR_4.dwSize = sizeof(VAR_4);
        VAR_4.szName[0] = 0;
        FUNC_1(VAR_3, &VAR_4, sizeof(VAR_4));
        FUNC_6("The default decompressor is %s\n", FUNC_7(VAR_4.szName));
        FUNC_5(FUNC_0(VAR_3)==VAR_0,"ICClose failed\n");
    }
    VAR_3 = FUNC_2(FUNC_4('v','i','d','c'),0,VAR_1);
    FUNC_5(0!=VAR_3 || FUNC_3(VAR_3 == 0),"ICOpen(vidc.0) failed\n");
    if (VAR_3) {
        VAR_4.dwSize = sizeof(VAR_4);
        VAR_4.szName[0] = 0;
        FUNC_1(VAR_3, &VAR_4, sizeof(VAR_4));
        FUNC_6("The default compressor is %s\n", FUNC_7(VAR_4.szName));
        FUNC_5(FUNC_0(VAR_3)==VAR_0,"ICClose failed\n");
    }




    VAR_3 = FUNC_2(FUNC_4('v','i','d','c'),FUNC_4('m','s','v','c'),VAR_2);
    FUNC_5(0!=VAR_3,"ICOpen(vidc.msvc) failed\n");
    if (VAR_3) {
        FUNC_5(FUNC_0(VAR_3)==VAR_0,"ICClose failed\n");
    }
    VAR_3 = FUNC_2(FUNC_4('v','i','d','c'),FUNC_4('M','S','V','C'),VAR_2);
    FUNC_5(0!=VAR_3,"ICOpen(vidc.MSVC) failed\n");
    if (VAR_3) {
        FUNC_5(FUNC_0(VAR_3)==VAR_0,"ICClose failed\n");
    }
    VAR_3 = FUNC_2(FUNC_4('V','I','D','C'),FUNC_4('m','s','v','c'),VAR_2);
    FUNC_5(0!=VAR_3,"ICOpen(VIDC.msvc) failed\n");
    if (VAR_3) {
        FUNC_5(FUNC_0(VAR_3)==VAR_0,"ICClose failed\n");
    }
    VAR_3 = FUNC_2(FUNC_4('V','I','D','C'),FUNC_4('M','S','V','C'),VAR_2);
    FUNC_5(0!=VAR_3,"ICOpen(VIDC.MSVC) failed\n");
    if (VAR_3) {
        FUNC_5(FUNC_0(VAR_3)==VAR_0,"ICClose failed\n");
    }
    VAR_3 = FUNC_2(FUNC_4('v','i','d','c'),FUNC_4('m','S','v','C'),VAR_2);
    FUNC_5(0!=VAR_3,"ICOpen(vidc.mSvC) failed\n");
    if (VAR_3) {
        FUNC_5(FUNC_0(VAR_3)==VAR_0,"ICClose failed\n");
    }
    VAR_3 = FUNC_2(FUNC_4('v','I','d','C'),FUNC_4('m','s','v','c'),VAR_2);
    FUNC_5(0!=VAR_3,"ICOpen(vIdC.msvc) failed\n");
    if (VAR_3) {
        FUNC_5(FUNC_0(VAR_3)==VAR_0,"ICClose failed\n");
    }
}
