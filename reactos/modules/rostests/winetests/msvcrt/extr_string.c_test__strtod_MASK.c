
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (double,long double) ;
 int VAR_4 ;
 int FUNC_1 (int,char*,...) ;
 double FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int ,char*) ;
 double FUNC_4 (char const*,char**) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    const char VAR_5[] = "12.1";
    const char VAR_6[] = "-13.721";
    const char VAR_7[] = "INF";
    const char VAR_8[] = ".21e12";
    const char VAR_9[] = "214353e-3";
    const char VAR_10[] = "NAN";
    const char VAR_11[] = "1d9999999999999999999";
    const char VAR_12[] = "  d10";

    char *VAR_13;
    double VAR_14;

    VAR_14 = FUNC_4(VAR_5, &VAR_13);
    FUNC_1(FUNC_0(VAR_14, 12.1), "d = %lf\n", VAR_14);
    FUNC_1(VAR_13 == VAR_5+4, "incorrect end (%d)\n", (int)(VAR_13-VAR_5));

    VAR_14 = FUNC_4(VAR_6, &VAR_13);
    FUNC_1(FUNC_0(VAR_14, -13.721), "d = %lf\n", VAR_14);
    FUNC_1(VAR_13 == VAR_6+7, "incorrect end (%d)\n", (int)(VAR_13-VAR_6));

    VAR_14 = FUNC_4(VAR_7, &VAR_13);
    FUNC_1(FUNC_0(VAR_14, 0), "d = %lf\n", VAR_14);
    FUNC_1(VAR_13 == VAR_7, "incorrect end (%d)\n", (int)(VAR_13-VAR_7));

    VAR_14 = FUNC_4(VAR_8, &VAR_13);
    FUNC_1(FUNC_0(VAR_14, 210000000000.0), "d = %lf\n", VAR_14);
    FUNC_1(VAR_13 == VAR_8+6, "incorrect end (%d)\n", (int)(VAR_13-VAR_8));

    VAR_14 = FUNC_4(VAR_9, &VAR_13);
    FUNC_1(FUNC_0(VAR_14, 214.353), "d = %lf\n", VAR_14);
    FUNC_1(VAR_13 == VAR_9+9, "incorrect end (%d)\n", (int)(VAR_13-VAR_9));

    VAR_14 = FUNC_4(VAR_10, &VAR_13);
    FUNC_1(FUNC_0(VAR_14, 0), "d = %lf\n", VAR_14);
    FUNC_1(VAR_13 == VAR_10, "incorrect end (%d)\n", (int)(VAR_13-VAR_10));

    VAR_14 = FUNC_4("12.1d2", ((void*)0));
    FUNC_1(FUNC_0(VAR_14, 12.1e2), "d = %lf\n", VAR_14);

    VAR_14 = FUNC_4(VAR_12, &VAR_13);
    FUNC_1(FUNC_0(VAR_14, 0), "d = %lf\n", VAR_14);
    FUNC_1(VAR_13 == VAR_12, "incorrect end (%d)\n", (int)(VAR_13-VAR_12));

    if (!&FUNC_2)
        FUNC_5("_strtod_l not found\n");
    else
    {
        VAR_4 = VAR_0;
        VAR_14 = FUNC_4(((void*)0), ((void*)0));
        FUNC_1(FUNC_0(VAR_14, 0.0), "d = %lf\n", VAR_14);
        FUNC_1(VAR_4 == VAR_1, "errno = %x\n", VAR_4);

        VAR_4 = VAR_0;
        VAR_13 = (char *)0xdeadbeef;
        VAR_14 = FUNC_4(((void*)0), &VAR_13);
        FUNC_1(FUNC_0(VAR_14, 0.0), "d = %lf\n", VAR_14);
        FUNC_1(VAR_4 == VAR_1, "errno = %x\n", VAR_4);
        FUNC_1(!VAR_13, "incorrect end ptr %p\n", VAR_13);

        VAR_4 = VAR_0;
        VAR_14 = FUNC_2(((void*)0), ((void*)0), ((void*)0));
        FUNC_1(FUNC_0(VAR_14, 0.0), "d = %lf\n", VAR_14);
        FUNC_1(VAR_4 == VAR_1, "errno = %x\n", VAR_4);
    }


    if(!FUNC_3(VAR_3, "Polish")) {
        FUNC_5("system with limited locales\n");
        return;
    }

    VAR_14 = FUNC_4("12.1", ((void*)0));
    FUNC_1(FUNC_0(VAR_14, 12.0), "d = %lf\n", VAR_14);

    VAR_14 = FUNC_4("12,1", ((void*)0));
    FUNC_1(FUNC_0(VAR_14, 12.1), "d = %lf\n", VAR_14);

    FUNC_3(VAR_3, "C");


    VAR_14 = FUNC_4("0.1", ((void*)0));
    FUNC_1(FUNC_0(VAR_14, 0.1), "d = %lf\n", VAR_14);
    VAR_14 = FUNC_4("-0.1", ((void*)0));
    FUNC_1(FUNC_0(VAR_14, -0.1), "d = %lf\n", VAR_14);
    VAR_14 = FUNC_4("0.1281832188491894198128921", ((void*)0));
    FUNC_1(FUNC_0(VAR_14, 0.1281832188491894198128921), "d = %lf\n", VAR_14);
    VAR_14 = FUNC_4("0.82181281288121", ((void*)0));
    FUNC_1(FUNC_0(VAR_14, 0.82181281288121), "d = %lf\n", VAR_14);
    VAR_14 = FUNC_4("21921922352523587651128218821", ((void*)0));
    FUNC_1(FUNC_0(VAR_14, 21921922352523587651128218821.0), "d = %lf\n", VAR_14);
    VAR_14 = FUNC_4("0.1d238", ((void*)0));
    FUNC_1(FUNC_0(VAR_14, 0.1e238L), "d = %lf\n", VAR_14);
    VAR_14 = FUNC_4("0.1D-4736", ((void*)0));
    FUNC_1(FUNC_0(VAR_14, 0.1e-4736L), "d = %lf\n", VAR_14);

    VAR_4 = 0xdeadbeef;
    FUNC_4(VAR_11, &VAR_13);
    FUNC_1(VAR_4 == VAR_2, "errno = %x\n", VAR_4);
    FUNC_1(VAR_13 == VAR_11+21, "incorrect end (%d)\n", (int)(VAR_13-VAR_11));

    VAR_4 = 0xdeadbeef;
    FUNC_4("-1d309", ((void*)0));
    FUNC_1(VAR_4 == VAR_2, "errno = %x\n", VAR_4);
}
