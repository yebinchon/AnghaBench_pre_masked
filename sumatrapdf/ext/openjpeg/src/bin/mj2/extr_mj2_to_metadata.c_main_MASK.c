
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int opj_mj2_t ;
struct TYPE_7__ {int info_handler; int warning_handler; int error_handler; } ;
typedef TYPE_1__ opj_event_mgr_t ;
struct TYPE_8__ {scalar_t__ mj2_handle; } ;
typedef TYPE_2__ opj_dinfo_t ;
typedef int opj_common_ptr ;
typedef int mj2_dparameters_t ;
typedef int FILE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (scalar_t__,int *) ;
 int FUNC_10 (int ,TYPE_1__*,int ) ;
 char* VAR_4 ;
 int FUNC_11 (char*,char*,unsigned int*) ;
 int VAR_5 ;
 int * FUNC_12 (char*,char) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,int) ;
 int VAR_6 ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (int *,int *,int *,unsigned int,char*,TYPE_1__*) ;

int FUNC_17(int VAR_7, char *VAR_8[])
{

    opj_dinfo_t* VAR_9;
    opj_event_mgr_t VAR_10;

    FILE *VAR_11, *VAR_12;

    opj_mj2_t *VAR_13;

    char* VAR_14 = 0;
    char* VAR_15 = 0;
    char* VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20;
    unsigned int VAR_21 = 1;
    char* VAR_22 = ((void*)0);
    BOOL VAR_23 = VAR_1;
    BOOL VAR_24 = VAR_0;
    BOOL VAR_25 = VAR_1;
    BOOL VAR_26 = VAR_1;
    mj2_dparameters_t VAR_27;

    while (VAR_1) {

        int VAR_28 = FUNC_3(VAR_7, VAR_8, "i:o:f:v:hntrd");

        if (VAR_28 == -1) {
            break;
        }
        switch (VAR_28) {
        case 'i':
            VAR_14 = VAR_4;
            VAR_16 = VAR_4;
            while (*VAR_16) {
                VAR_16++;
            }
            VAR_16--;
            VAR_19 = *VAR_16;
            VAR_16--;
            VAR_18 = *VAR_16;
            VAR_16--;
            VAR_17 = *VAR_16;

            if ((VAR_17 == 'm' && VAR_18 == 'j' && VAR_19 == '2')
                    || (VAR_17 == 'M' && VAR_18 == 'J' && VAR_19 == '2')) {
                break;
            }
            FUNC_2(VAR_5, "Input file name must have .mj2 extension, not .%c%c%c.\n", VAR_17,
                    VAR_18, VAR_19);
            return 1;


        case 'o':
            VAR_15 = VAR_4;
            while (*VAR_15) {
                VAR_15++;
            }
            VAR_15--;
            VAR_19 = *VAR_15;
            VAR_15--;
            VAR_18 = *VAR_15;
            VAR_15--;
            VAR_17 = *VAR_15;

            VAR_15 = VAR_4;

            if ((VAR_17 == 'x' && VAR_18 == 'm' && VAR_19 == 'l')
                    || (VAR_17 == 'X' && VAR_18 == 'M' && VAR_19 == 'L')) {
                break;
            }

            FUNC_2(VAR_5,
                    "Output file name must have .xml extension, not .%c%c%c\n", VAR_17, VAR_18, VAR_19);
            return 1;


        case 'f':
            FUNC_11(VAR_4, "%u", &VAR_21);
            break;


        case 'v':
            VAR_22 = VAR_4;


            if (FUNC_12(VAR_22, '"') != ((void*)0)) {
                FUNC_2(VAR_5,
                        "-D's string must not contain any embedded double-quote characters.\n");
                return 1;
            }

            if (FUNC_14(VAR_22, "PUBLIC ", 7) == 0 ||
                    FUNC_14(VAR_22, "SYSTEM ", 7) == 0) {
                break;
            }

            FUNC_2(VAR_5, "-D's string must start with \"PUBLIC \" or \"SYSTEM \"\n");
            return 1;


        case 'n':
            VAR_23 = VAR_0;
            break;


        case 't':
            VAR_24 = VAR_1;
            break;


        case 'h':
            FUNC_4();
            return 0;


        case 'r':
            VAR_25 = VAR_0;
            break;


        case 'd':
            VAR_26 = VAR_0;
            break;


        default:
            return 1;
        }
    }

    if (!VAR_25 && !VAR_26) {
        VAR_25 = VAR_1;
    }



    if (!VAR_14 || !VAR_15) {
        FUNC_2(VAR_5,
                "Correct usage: mj2_to_metadata -i mj2-file -o xml-file (plus options)\n");
        return 1;
    }
    VAR_20 = FUNC_13(VAR_14);
    if (VAR_14[0] == ' ') {
        VAR_14++;
    }

    VAR_11 = FUNC_1(VAR_14, "rb");

    if (!VAR_11) {
        FUNC_2(VAR_5, "Failed to open %s for reading.\n", VAR_14);
        return 1;
    }

    VAR_20 = FUNC_13(VAR_15);
    if (VAR_15[0] == ' ') {
        VAR_15++;
    }


    VAR_12 = FUNC_1(VAR_15, "w");
    if (!VAR_12) {
        FUNC_2(VAR_5, "Failed to open %s for writing.\n", VAR_15);
        return 1;
    }






    FUNC_5(&VAR_10, 0, sizeof(opj_event_mgr_t));
    VAR_10.error_handler = VAR_2;
    VAR_10.warning_handler = VAR_6;
    VAR_10.info_handler = VAR_3;


    VAR_9 = FUNC_6();


    FUNC_10((opj_common_ptr)VAR_9, &VAR_10, VAR_5);


    VAR_13 = (opj_mj2_t*) VAR_9->mj2_handle;
    FUNC_9(VAR_9->mj2_handle, &VAR_27);

    if (FUNC_8(VAR_11, VAR_13)) {
        FUNC_0(VAR_12);
        return 1;
    }

    FUNC_15(VAR_23, VAR_24, VAR_25, VAR_26);
    FUNC_16(VAR_11, VAR_12, VAR_13, VAR_21, VAR_22, &VAR_10);
    FUNC_0(VAR_12);

    FUNC_2(VAR_5, "Metadata correctly extracted to XML file \n");;


    if (VAR_9) {
        FUNC_7((opj_mj2_t*)VAR_9->mj2_handle);
    }

    return 0;
}
