
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsContext ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int ,int,char*) ;
 int FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (int ,int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,char*,int,...) ;

__attribute__((used)) static
void FUNC_7(cmsContext VAR_4)
{
    FUNC_1(VAR_4, VAR_2, "%.4g");
    FUNC_5(VAR_4, VAR_2, "ORIGINATOR", "icctrans");

    if (VAR_0 != ((void*)0))
        FUNC_5(VAR_4, VAR_2, ".INCLUDE", VAR_0);

    FUNC_2(VAR_4, VAR_2, "Data follows");
    FUNC_4(VAR_4, VAR_2, "NUMBER_OF_SETS", VAR_3);


    switch (VAR_1) {




    case 128:
        FUNC_4(VAR_4, VAR_2, "NUMBER_OF_FIELDS", 4);
        FUNC_3(VAR_4, VAR_2, 0, "SAMPLE_ID");
        FUNC_3(VAR_4, VAR_2, 1, "XYZ_X");
        FUNC_3(VAR_4, VAR_2, 2, "XYZ_Y");
        FUNC_3(VAR_4, VAR_2, 3, "XYZ_Z");
        break;

    case 130:
        FUNC_4(VAR_4, VAR_2, "NUMBER_OF_FIELDS", 4);
        FUNC_3(VAR_4, VAR_2, 0, "SAMPLE_ID");
        FUNC_3(VAR_4, VAR_2, 1, "LAB_L");
        FUNC_3(VAR_4, VAR_2, 2, "LAB_A");
        FUNC_3(VAR_4, VAR_2, 3, "LAB_B");
        break;


    case 129:
        FUNC_4(VAR_4, VAR_2, "NUMBER_OF_FIELDS", 4);
        FUNC_3(VAR_4, VAR_2, 0, "SAMPLE_ID");
        FUNC_3(VAR_4, VAR_2, 1, "RGB_R");
        FUNC_3(VAR_4, VAR_2, 2, "RGB_G");
        FUNC_3(VAR_4, VAR_2, 3, "RGB_B");
        break;

    case 131:
        FUNC_4(VAR_4, VAR_2, "NUMBER_OF_FIELDS", 2);
        FUNC_3(VAR_4, VAR_2, 0, "SAMPLE_ID");
        FUNC_3(VAR_4, VAR_2, 1, "GRAY");
        break;

    case 132:
        FUNC_4(VAR_4, VAR_2, "NUMBER_OF_FIELDS", 5);
        FUNC_3(VAR_4, VAR_2, 0, "SAMPLE_ID");
        FUNC_3(VAR_4, VAR_2, 1, "CMYK_C");
        FUNC_3(VAR_4, VAR_2, 2, "CMYK_M");
        FUNC_3(VAR_4, VAR_2, 3, "CMYK_Y");
        FUNC_3(VAR_4, VAR_2, 4, "CMYK_K");
        break;

    case 133:
        FUNC_4(VAR_4, VAR_2, "NUMBER_OF_FIELDS", 4);
        FUNC_3(VAR_4, VAR_2, 0, "SAMPLE_ID");
        FUNC_3(VAR_4, VAR_2, 1, "CMY_C");
        FUNC_3(VAR_4, VAR_2, 2, "CMY_M");
        FUNC_3(VAR_4, VAR_2, 3, "CMY_Y");
        break;

    case 142:
    case 141:
    case 140:
    case 139:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
    case 148:
    case 147:
    case 146:
    case 145:
    case 144:
    case 143:
        {
            int VAR_5, VAR_6;
            char VAR_7[255];

            VAR_6 = FUNC_0(VAR_4, VAR_1);
            FUNC_4(VAR_4, VAR_2, "NUMBER_OF_FIELDS", VAR_6+1);
            FUNC_3(VAR_4, VAR_2, 0, "SAMPLE_ID");

            for (VAR_5=1; VAR_5 <= VAR_6; VAR_5++) {
                FUNC_6(VAR_7, "%dCLR_%d", VAR_6, VAR_5);
                FUNC_3(VAR_4, VAR_2, VAR_5, VAR_7);
            }
        }
        break;

    default: {

        int VAR_8, VAR_9;
        char VAR_10[255];

        VAR_9 = FUNC_0(VAR_4, VAR_1);
        FUNC_4(VAR_4, VAR_2, "NUMBER_OF_FIELDS", VAR_9+1);
        FUNC_3(VAR_4, VAR_2, 0, "SAMPLE_ID");

        for (VAR_8=1; VAR_8 <= VAR_9; VAR_8++) {
            FUNC_6(VAR_10, "CHAN_%d", VAR_8);
            FUNC_3(VAR_4, VAR_2, VAR_8, VAR_10);
        }
    }
    }
}
