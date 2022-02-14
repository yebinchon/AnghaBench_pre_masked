
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int cmsHANDLE ;


 int FUNC_0 (int ,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ,int,char*) ;
 int FUNC_7 (int *,int ,char*,int) ;
 int FUNC_8 (int *,int ,char*,char*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*,char const*,char const*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static
void FUNC_15(const char* VAR_5, const char* VAR_6)
{
    cmsHANDLE VAR_7 = FUNC_2(0);
    time_t VAR_8;
    char VAR_9[256];

    FUNC_9(((void*)0), VAR_7, "TIFFDIFF");


    FUNC_11(VAR_9, "Differences between %s and %s", VAR_5, VAR_6);

    FUNC_5(((void*)0), VAR_7, VAR_9);

    FUNC_8(((void*)0), VAR_7, "ORIGINATOR", "TIFFDIFF");
    FUNC_14( &VAR_8 );
    FUNC_12(VAR_9, FUNC_10(&VAR_8));
    VAR_9[FUNC_13(VAR_9)-1] = 0;

    FUNC_8(((void*)0), VAR_7, "CREATED", VAR_9);

    FUNC_5(((void*)0), VAR_7, " ");

    FUNC_7(((void*)0), VAR_7, "NUMBER_OF_FIELDS", 6);


    FUNC_6(((void*)0), VAR_7, 0, "SAMPLE_ID");
    FUNC_6(((void*)0), VAR_7, 1, "PER100_EQUAL");
    FUNC_6(((void*)0), VAR_7, 2, "MEAN_DE");
    FUNC_6(((void*)0), VAR_7, 3, "STDEV_DE");
    FUNC_6(((void*)0), VAR_7, 4, "MIN_DE");
    FUNC_6(((void*)0), VAR_7, 5, "MAX_DE");


    switch (VAR_1) {

    case 1:
            FUNC_7(((void*)0), VAR_7, "NUMBER_OF_SETS", 3);
            FUNC_0(VAR_7, "GRAY_PLANE", &VAR_2[0]);
            break;

    case 3:
            FUNC_7(((void*)0), VAR_7, "NUMBER_OF_SETS", 5);
            FUNC_0(VAR_7, "R_PLANE", &VAR_2[0]);
            FUNC_0(VAR_7, "G_PLANE", &VAR_2[1]);
            FUNC_0(VAR_7, "B_PLANE", &VAR_2[2]);
            break;


    case 4:
            FUNC_7(((void*)0), VAR_7, "NUMBER_OF_SETS", 6);
            FUNC_0(VAR_7, "C_PLANE", &VAR_2[0]);
            FUNC_0(VAR_7, "M_PLANE", &VAR_2[1]);
            FUNC_0(VAR_7, "Y_PLANE", &VAR_2[2]);
            FUNC_0(VAR_7, "K_PLANE", &VAR_2[3]);
            break;

    default: FUNC_1("Internal error: Bad ColorSpace");

    }

    FUNC_0(VAR_7, "EUCLIDEAN", &VAR_4);
    FUNC_0(VAR_7, "COLORIMETRIC", &VAR_3);

    FUNC_4(((void*)0), VAR_7, VAR_0);
    FUNC_3(((void*)0), VAR_7);
}
