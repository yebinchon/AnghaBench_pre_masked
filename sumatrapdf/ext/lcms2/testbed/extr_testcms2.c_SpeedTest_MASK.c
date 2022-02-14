
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (char*,int ,int ,int ) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*,int ,int ,int ) ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int VAR_3 ;

__attribute__((used)) static
void FUNC_14(void)
{
    FUNC_13("\n\nP E R F O R M A N C E   T E S T S\n");
    FUNC_13( "=================================\n\n");
    FUNC_12(VAR_3);

    FUNC_8("8 bits on CLUT profiles",
        FUNC_11(FUNC_1(), "test5.icc", "r"),
        FUNC_11(FUNC_1(), "test3.icc", "r"),
        VAR_1);

    FUNC_2("16 bits on CLUT profiles",
        FUNC_11(FUNC_1(), "test5.icc", "r"),
        FUNC_11(FUNC_1(), "test3.icc", "r"), VAR_1);

    FUNC_5("32 bits on CLUT profiles",
        FUNC_11(FUNC_1(), "test5.icc", "r"),
        FUNC_11(FUNC_1(), "test3.icc", "r"), VAR_1);

    FUNC_13("\n");



    FUNC_8("8 bits on Matrix-Shaper profiles",
        FUNC_11(FUNC_1(), "test5.icc", "r"),
        FUNC_11(FUNC_1(), "aRGBlcms2.icc", "r"),
        VAR_1);

    FUNC_2("16 bits on Matrix-Shaper profiles",
       FUNC_11(FUNC_1(), "test5.icc", "r"),
        FUNC_11(FUNC_1(), "aRGBlcms2.icc", "r"),
        VAR_1);

    FUNC_5("32 bits on Matrix-Shaper profiles",
       FUNC_11(FUNC_1(), "test5.icc", "r"),
        FUNC_11(FUNC_1(), "aRGBlcms2.icc", "r"),
        VAR_1);

    FUNC_13("\n");



    FUNC_8("8 bits on SAME Matrix-Shaper profiles",
        FUNC_11(FUNC_1(), "test5.icc", "r"),
        FUNC_11(FUNC_1(), "test5.icc", "r"),
        VAR_1);

    FUNC_2("16 bits on SAME Matrix-Shaper profiles",
        FUNC_11(FUNC_1(), "aRGBlcms2.icc", "r"),
        FUNC_11(FUNC_1(), "aRGBlcms2.icc", "r"),
        VAR_1);

    FUNC_5("32 bits on SAME Matrix-Shaper profiles",
        FUNC_11(FUNC_1(), "aRGBlcms2.icc", "r"),
        FUNC_11(FUNC_1(), "aRGBlcms2.icc", "r"),
        VAR_1);

    FUNC_13("\n");



    FUNC_8("8 bits on Matrix-Shaper profiles (AbsCol)",
       FUNC_11(FUNC_1(), "test5.icc", "r"),
       FUNC_11(FUNC_1(), "aRGBlcms2.icc", "r"),
        VAR_0);

    FUNC_2("16 bits on Matrix-Shaper profiles (AbsCol)",
       FUNC_11(FUNC_1(), "test5.icc", "r"),
       FUNC_11(FUNC_1(), "aRGBlcms2.icc", "r"),
        VAR_0);

    FUNC_5("32 bits on Matrix-Shaper profiles (AbsCol)",
       FUNC_11(FUNC_1(), "test5.icc", "r"),
       FUNC_11(FUNC_1(), "aRGBlcms2.icc", "r"),
        VAR_0);

    FUNC_13("\n");



    FUNC_8("8 bits on curves",
        FUNC_0(),
        FUNC_0(),
        VAR_1);

    FUNC_2("16 bits on curves",
        FUNC_0(),
        FUNC_0(),
        VAR_1);

    FUNC_5("32 bits on curves",
        FUNC_0(),
        FUNC_0(),
        VAR_1);

    FUNC_13("\n");



    FUNC_9("8 bits on CMYK profiles",
        FUNC_11(FUNC_1(), "test1.icc", "r"),
        FUNC_11(FUNC_1(), "test2.icc", "r"));

    FUNC_3("16 bits on CMYK profiles",
        FUNC_11(FUNC_1(), "test1.icc", "r"),
        FUNC_11(FUNC_1(), "test2.icc", "r"));

    FUNC_6("32 bits on CMYK profiles",
        FUNC_11(FUNC_1(), "test1.icc", "r"),
        FUNC_11(FUNC_1(), "test2.icc", "r"));

    FUNC_13("\n");



    FUNC_10("8 bits on gray-to gray",
        FUNC_11(FUNC_1(), "gray3lcms2.icc", "r"),
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"), VAR_2);

    FUNC_4("16 bits on gray-to gray",
        FUNC_11(FUNC_1(), "gray3lcms2.icc", "r"),
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"), VAR_2);

    FUNC_7("32 bits on gray-to gray",
        FUNC_11(FUNC_1(), "gray3lcms2.icc", "r"),
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"), VAR_2);

    FUNC_13("\n");



    FUNC_10("8 bits on gray-to-lab gray",
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"),
        FUNC_11(FUNC_1(), "glablcms2.icc", "r"), VAR_2);

    FUNC_4("16 bits on gray-to-lab gray",
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"),
        FUNC_11(FUNC_1(), "glablcms2.icc", "r"), VAR_2);

    FUNC_7("32 bits on gray-to-lab gray",
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"),
        FUNC_11(FUNC_1(), "glablcms2.icc", "r"), VAR_2);

    FUNC_13("\n");



    FUNC_10("8 bits on SAME gray-to-gray",
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"),
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"), VAR_1);

    FUNC_4("16 bits on SAME gray-to-gray",
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"),
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"), VAR_1);

    FUNC_7("32 bits on SAME gray-to-gray",
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"),
        FUNC_11(FUNC_1(), "graylcms2.icc", "r"), VAR_1);

    FUNC_13("\n");
}
