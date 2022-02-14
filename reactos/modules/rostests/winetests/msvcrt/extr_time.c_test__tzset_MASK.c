
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int,char*,int) ;
 int* FUNC_5 () ;
 int* FUNC_6 () ;
 int* FUNC_7 () ;
 int* FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    char VAR_0[256];
    int VAR_1;

    if(!&FUNC_5 || !&FUNC_7 || !&FUNC_6) {
        FUNC_9("__p__daylight, __p__timezone or __p__dstbias is not available\n");
        return;
    }

    if (&FUNC_8) {
        VAR_1 = *FUNC_8();
        FUNC_4(VAR_1 == -3600, "*__dstbias() = %d\n", VAR_1);
        VAR_1 = *FUNC_6();
        FUNC_4(VAR_1 == -3600, "*__p__dstbias() = %d\n", VAR_1);
    }
    else
        FUNC_10("__dstbias() is not available.\n");

    FUNC_1(VAR_0,255,"TZ=%s",(FUNC_3("TZ")?FUNC_3("TZ"):""));

    VAR_1 = *FUNC_5();
    FUNC_4(VAR_1 == 1, "*__p__daylight() = %d\n", VAR_1);
    VAR_1 = *FUNC_7();
    FUNC_4(VAR_1 == 28800, "*__p__timezone() = %d\n", VAR_1);
    VAR_1 = *FUNC_6();
    FUNC_4(VAR_1 == -3600, "*__p__dstbias() = %d\n", VAR_1);

    FUNC_0("TZ=xxx+1yyy");
    FUNC_2();
    VAR_1 = *FUNC_5();
    FUNC_4(VAR_1 == 121, "*__p__daylight() = %d\n", VAR_1);
    VAR_1 = *FUNC_7();
    FUNC_4(VAR_1 == 3600, "*__p__timezone() = %d\n", VAR_1);
    VAR_1 = *FUNC_6();
    FUNC_4(VAR_1 == -3600, "*__p__dstbias() = %d\n", VAR_1);

    *FUNC_6() = 0;
    FUNC_0("TZ=xxx+1:3:5zzz");
    FUNC_2();
    VAR_1 = *FUNC_5();
    FUNC_4(VAR_1 == 122, "*__p__daylight() = %d\n", VAR_1);
    VAR_1 = *FUNC_7();
    FUNC_4(VAR_1 == 3785, "*__p__timezone() = %d\n", VAR_1);
    VAR_1 = *FUNC_6();
    FUNC_4(VAR_1 == 0, "*__p__dstbias() = %d\n", VAR_1);

    FUNC_0(VAR_0);
}
