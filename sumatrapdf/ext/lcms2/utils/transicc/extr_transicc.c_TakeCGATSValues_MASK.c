
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsNAMEDCOLORLIST ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 double FUNC_1 (int ,char*,double) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (int ) ;
 double FUNC_4 (int ,int ,int ,char*) ;
 int * FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int const*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,char*,int,...) ;

__attribute__((used)) static
    void FUNC_8(cmsContext VAR_5, int VAR_6, cmsFloat64Number VAR_7[])
{


    if (FUNC_5(VAR_5, VAR_3, VAR_6, VAR_0) == ((void*)0)) {
        FUNC_0("Sorry, I need 'SAMPLE_ID' on input CGATS to operate.");
    }





    if (VAR_2) {

        const cmsNAMEDCOLORLIST* VAR_8;
        int VAR_9;

        VAR_8 = FUNC_3(VAR_4);
        if (VAR_8 == ((void*)0))
            FUNC_0("Malformed named color profile");

        VAR_9 = FUNC_6(VAR_5, VAR_8, VAR_0);
        if (VAR_9 < 0)
            FUNC_0("Named color '%s' not found in the profile", VAR_0);

        VAR_7[0] = VAR_9;
        return;
    }



    switch (VAR_1) {



    case 128:
        VAR_7[0] = FUNC_4(VAR_5, VAR_3, VAR_0, "XYZ_X") / 100.0;
        VAR_7[1] = FUNC_4(VAR_5, VAR_3, VAR_0, "XYZ_Y") / 100.0;
        VAR_7[2] = FUNC_4(VAR_5, VAR_3, VAR_0, "XYZ_Z") / 100.0;
        break;

    case 130:
        VAR_7[0] = FUNC_4(VAR_5, VAR_3, VAR_0, "LAB_L");
        VAR_7[1] = FUNC_4(VAR_5, VAR_3, VAR_0, "LAB_A");
        VAR_7[2] = FUNC_4(VAR_5, VAR_3, VAR_0, "LAB_B");
        break;


    case 129:
        VAR_7[0] = FUNC_1(VAR_5, "RGB_R", 255.0);
        VAR_7[1] = FUNC_1(VAR_5, "RGB_G", 255.0);
        VAR_7[2] = FUNC_1(VAR_5, "RGB_B", 255.0);
        break;

    case 131:
        VAR_7[0] = FUNC_1(VAR_5, "GRAY", 255.0);
        break;

    case 132:
        VAR_7[0] = FUNC_1(VAR_5, "CMYK_C", 1.0);
        VAR_7[1] = FUNC_1(VAR_5, "CMYK_M", 1.0);
        VAR_7[2] = FUNC_1(VAR_5, "CMYK_Y", 1.0);
        VAR_7[3] = FUNC_1(VAR_5, "CMYK_K", 1.0);
        break;

    case 133:
        VAR_7[0] = FUNC_1(VAR_5, "CMY_C", 1.0);
        VAR_7[1] = FUNC_1(VAR_5, "CMY_M", 1.0);
        VAR_7[2] = FUNC_1(VAR_5, "CMY_Y", 1.0);
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
            cmsUInt32Number VAR_10, VAR_11;

            VAR_11 = FUNC_2(VAR_5, VAR_1);
            for (VAR_10=0; VAR_10 < VAR_11; VAR_10++) {

                char VAR_12[255];

                FUNC_7(VAR_12, "%uCLR_%u", VAR_11, VAR_10+1);
                VAR_7[VAR_10] = FUNC_1(VAR_5, VAR_12, 100.0);
            }

        }
        break;

    default:
        {
            cmsUInt32Number VAR_13, VAR_14;

            VAR_14 = FUNC_2(VAR_5, VAR_1);
            for (VAR_13=0; VAR_13 < VAR_14; VAR_13++) {

                char VAR_15[255];

                FUNC_7(VAR_15, "CHAN_%u", VAR_13+1);
                VAR_7[VAR_13] = FUNC_1(VAR_5, VAR_15, 1.0);
            }

        }
    }

}
