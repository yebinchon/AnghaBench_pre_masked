
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int * cmsHANDLE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,char*,char*) ;
 int FUNC_5 (int ,int *,char*) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int *,char*) ;
 int FUNC_8 (int ,int *,int,char*) ;
 int FUNC_9 (int ,int *,int,int ,char*) ;
 int FUNC_10 (int ,int *,int,int,int) ;
 int FUNC_11 (int ,int *,char*,int) ;
 int FUNC_12 (int ,int *,char*,int) ;
 int FUNC_13 (int ,int *,char*,char*) ;
 int FUNC_14 (int ,int *,char*,char*) ;
 int FUNC_15 (int ,int *,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_18(void)
{
    cmsHANDLE VAR_1;
    cmsInt32Number VAR_2;

    FUNC_1("IT8 creation");
    VAR_1 = FUNC_2(FUNC_0());
    if (VAR_1 == ((void*)0)) return 0;

    FUNC_15(FUNC_0(), VAR_1, "LCMS/TESTING");
    FUNC_13(FUNC_0(), VAR_1, "ORIGINATOR", "1 2 3 4");
    FUNC_14(FUNC_0(), VAR_1, "DESCRIPTOR", "1234");
    FUNC_13(FUNC_0(), VAR_1, "MANUFACTURER", "3");
    FUNC_11(FUNC_0(), VAR_1, "CREATED", 4);
    FUNC_11(FUNC_0(), VAR_1, "SERIAL", 5);
    FUNC_12(FUNC_0(), VAR_1, "MATERIAL", 0x123);

    FUNC_11(FUNC_0(), VAR_1, "NUMBER_OF_SETS", VAR_0);
    FUNC_11(FUNC_0(), VAR_1, "NUMBER_OF_FIELDS", 4);

    FUNC_8(FUNC_0(), VAR_1, 0, "SAMPLE_ID");
    FUNC_8(FUNC_0(), VAR_1, 1, "RGB_R");
    FUNC_8(FUNC_0(), VAR_1, 2, "RGB_G");
    FUNC_8(FUNC_0(), VAR_1, 3, "RGB_B");

    FUNC_1("Table creation");
    for (VAR_2=0; VAR_2 < VAR_0; VAR_2++) {

          char VAR_3[20];

          FUNC_17(VAR_3, "P%d", VAR_2);

          FUNC_9(FUNC_0(), VAR_1, VAR_2, 0, VAR_3);
          FUNC_10(FUNC_0(), VAR_1, VAR_2, 1, VAR_2);
          FUNC_10(FUNC_0(), VAR_1, VAR_2, 2, VAR_2);
          FUNC_10(FUNC_0(), VAR_1, VAR_2, 3, VAR_2);
    }

    FUNC_1("Save to file");
    FUNC_7(FUNC_0(), VAR_1, "TEST.IT8");
    FUNC_3(FUNC_0(), VAR_1);

    FUNC_1("Load from file");
    VAR_1 = FUNC_6(FUNC_0(), "TEST.IT8");
    if (VAR_1 == ((void*)0)) return 0;

    FUNC_1("Save again file");
    FUNC_7(FUNC_0(), VAR_1, "TEST.IT8");
    FUNC_3(FUNC_0(), VAR_1);


    FUNC_1("Load from file (II)");
    VAR_1 = FUNC_6(FUNC_0(), "TEST.IT8");
    if (VAR_1 == ((void*)0)) return 0;


     FUNC_1("Change prop value");
    if (FUNC_5(FUNC_0(), VAR_1, "DESCRIPTOR") != 1234) {

        return 0;
    }


    FUNC_11(FUNC_0(), VAR_1, "DESCRIPTOR", 5678);
    if (FUNC_5(FUNC_0(), VAR_1, "DESCRIPTOR") != 5678) {

        return 0;
    }

     FUNC_1("Positive numbers");
    if (FUNC_4(FUNC_0(), VAR_1, "P3", "RGB_G") != 3) {

        return 0;
    }


     FUNC_1("Positive exponent numbers");
     FUNC_11(FUNC_0(), VAR_1, "DBL_PROP", 123E+12);
     if ((FUNC_5(FUNC_0(), VAR_1, "DBL_PROP") - 123E+12) > 1 ) {

        return 0;
    }

    FUNC_1("Negative exponent numbers");
    FUNC_11(FUNC_0(), VAR_1, "DBL_PROP_NEG", 123E-45);
     if ((FUNC_5(FUNC_0(), VAR_1, "DBL_PROP_NEG") - 123E-45) > 1E-45 ) {

        return 0;
    }


    FUNC_1("Negative numbers");
    FUNC_11(FUNC_0(), VAR_1, "DBL_NEG_VAL", -123);
    if ((FUNC_5(FUNC_0(), VAR_1, "DBL_NEG_VAL")) != -123 ) {

        return 0;
    }

    FUNC_3(FUNC_0(), VAR_1);

    FUNC_16("TEST.IT8");
    return 1;

}
