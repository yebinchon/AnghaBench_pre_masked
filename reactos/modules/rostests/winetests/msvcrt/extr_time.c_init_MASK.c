
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_16 = FUNC_1("msvcrt.dll");

    VAR_7 = (void*)FUNC_0(VAR_16, "_gmtime32");
    VAR_6 = (void*)FUNC_0(VAR_16, "gmtime");
    VAR_8 = (void*)FUNC_0(VAR_16, "_gmtime32_s");
    VAR_11 = (void*)FUNC_0(VAR_16, "_mkgmtime32");
    VAR_14 = (void*)FUNC_0(VAR_16, "_strtime_s");
    VAR_12 = (void*)FUNC_0(VAR_16, "_strdate_s");
    VAR_9 = (void*)FUNC_0(VAR_16, "_localtime32_s");
    VAR_10 = (void*)FUNC_0(VAR_16, "_localtime64_s");
    VAR_3 = (void*)FUNC_0(VAR_16, "__daylight");
    VAR_0 = (void*)FUNC_0(VAR_16, "__p__daylight");
    VAR_1 = (void*)FUNC_0(VAR_16, "__p__dstbias");
    VAR_4 = (void*)FUNC_0(VAR_16, "__dstbias");
    VAR_2 = (void*)FUNC_0(VAR_16, "__p__timezone");
    VAR_13 = (void*)FUNC_0(VAR_16, "strftime");
    VAR_15 = (void*)FUNC_0(VAR_16, "wcsftime");
    VAR_5 = (void*)FUNC_0(VAR_16, "asctime");
}
