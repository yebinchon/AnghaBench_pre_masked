
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsMLU ;
typedef scalar_t__ cmsInt32Number ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,char*,char*,char*,int) ;
 int FUNC_7 (int ,int *,char*,char*,char*) ;
 int FUNC_8 (int ,int *,char*,char*,char*) ;
 int * FUNC_9 (int ,char*,char*) ;
 scalar_t__ FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (int ,int *,double) ;
 int VAR_0 ;
 int FUNC_12 (int ,int *,int ,int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_15 (char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_16(void)
{
    cmsMLU* VAR_1, *VAR_2, *VAR_3;
    char VAR_4[256], VAR_5[256];
    cmsInt32Number VAR_6 = 1;
    cmsInt32Number VAR_7;
    cmsHPROFILE VAR_8= ((void*)0);


    VAR_1 = FUNC_3(FUNC_0(), 0);


    FUNC_8(FUNC_0(), VAR_1, "en", "US", L"Hello, world");
    FUNC_8(FUNC_0(), VAR_1, "es", "ES", L"Hola, mundo");
    FUNC_8(FUNC_0(), VAR_1, "fr", "FR", L"Bonjour, le monde");
    FUNC_8(FUNC_0(), VAR_1, "ca", "CA", L"Hola, mon");




    FUNC_6(FUNC_0(), VAR_1, "en", "US", VAR_4, 256);
    if (FUNC_15(VAR_4, "Hello, world") != 0) VAR_6 = 0;


    FUNC_6(FUNC_0(), VAR_1, "es", "ES", VAR_4, 256);
    if (FUNC_15(VAR_4, "Hola, mundo") != 0) VAR_6 = 0;


    FUNC_6(FUNC_0(), VAR_1, "fr", "FR", VAR_4, 256);
    if (FUNC_15(VAR_4, "Bonjour, le monde") != 0) VAR_6 = 0;


    FUNC_6(FUNC_0(), VAR_1, "ca", "CA", VAR_4, 256);
    if (FUNC_15(VAR_4, "Hola, mon") != 0) VAR_6 = 0;

    if (VAR_6 == 0)
        FUNC_1("Unexpected string '%s'", VAR_4);


    FUNC_5(FUNC_0(), VAR_1);


    VAR_1 = FUNC_3(FUNC_0(), 0);


    for (VAR_7=0; VAR_7 < 4096; VAR_7++) {

        char VAR_9[3];

        VAR_9[0] = (char) (VAR_7 % 255);
        VAR_9[1] = (char) (VAR_7 / 255);
        VAR_9[2] = 0;

        FUNC_14(VAR_4, "String #%i", VAR_7);
        FUNC_7(FUNC_0(), VAR_1, VAR_9, VAR_9, VAR_4);
    }


    VAR_2 = FUNC_4(FUNC_0(), VAR_1);


    FUNC_5(FUNC_0(), VAR_1);


    for (VAR_7=0; VAR_7 < 4096; VAR_7++) {

        char VAR_10[3];

        VAR_10[0] = (char)(VAR_7 % 255);
        VAR_10[1] = (char)(VAR_7 / 255);
        VAR_10[2] = 0;

        FUNC_6(FUNC_0(), VAR_2, VAR_10, VAR_10, VAR_5, 256);
        FUNC_14(VAR_4, "String #%i", VAR_7);

        if (FUNC_15(VAR_4, VAR_5) != 0) { VAR_6 = 0; break; }
    }

    if (VAR_6 == 0)
        FUNC_1("Unexpected string '%s'", VAR_5);



    VAR_8 = FUNC_9(FUNC_0(), "mlucheck.icc", "w");

    FUNC_11(FUNC_0(), VAR_8, 4.3);

    FUNC_12(FUNC_0(), VAR_8, VAR_0, VAR_2);
    FUNC_2(FUNC_0(), VAR_8);
    FUNC_5(FUNC_0(), VAR_2);


    VAR_8 = FUNC_9(FUNC_0(), "mlucheck.icc", "r");

    VAR_3 = (cmsMLU *) FUNC_10(FUNC_0(), VAR_8, VAR_0);
    if (VAR_3 == ((void*)0)) { FUNC_1("Profile didn't get the MLU\n"); VAR_6 = 0; goto Error; }


    for (VAR_7=0; VAR_7 < 4096; VAR_7++) {

        char VAR_11[3];

        VAR_11[0] = (char) (VAR_7 % 255);
        VAR_11[1] = (char) (VAR_7 / 255);
        VAR_11[2] = 0;

        FUNC_6(FUNC_0(), VAR_3, VAR_11, VAR_11, VAR_5, 256);
        FUNC_14(VAR_4, "String #%i", VAR_7);

        if (FUNC_15(VAR_4, VAR_5) != 0) { VAR_6 = 0; break; }
    }

    if (VAR_6 == 0) FUNC_1("Unexpected string '%s'", VAR_5);

Error:

    if (VAR_8 != ((void*)0)) FUNC_2(FUNC_0(), VAR_8);
    FUNC_13("mlucheck.icc");

    return VAR_6;
}
