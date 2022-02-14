
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,double) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,int,...) ;

__attribute__((used)) static
void FUNC_4(cmsContext VAR_4, cmsFloat64Number VAR_5[])
{
    FUNC_2(VAR_4, VAR_3, VAR_0, "SAMPLE_ID", VAR_0);
    switch (VAR_2) {




    case 128:

        FUNC_0(VAR_4, "XYZ_X", VAR_5[0] * 100.0);
        FUNC_0(VAR_4, "XYZ_Y", VAR_5[1] * 100.0);
        FUNC_0(VAR_4, "XYZ_Z", VAR_5[2] * 100.0);
        break;

    case 130:

        FUNC_0(VAR_4, "LAB_L", VAR_5[0]);
        FUNC_0(VAR_4, "LAB_A", VAR_5[1]);
        FUNC_0(VAR_4, "LAB_B", VAR_5[2]);
        break;


    case 129:
        FUNC_0(VAR_4, "RGB_R", VAR_5[0] * 255.0);
        FUNC_0(VAR_4, "RGB_G", VAR_5[1] * 255.0);
        FUNC_0(VAR_4, "RGB_B", VAR_5[2] * 255.0);
        break;

    case 131:
        FUNC_0(VAR_4, "GRAY", VAR_5[0] * 255.0);
        break;

    case 132:
        FUNC_0(VAR_4, "CMYK_C", VAR_5[0]);
        FUNC_0(VAR_4, "CMYK_M", VAR_5[1]);
        FUNC_0(VAR_4, "CMYK_Y", VAR_5[2]);
        FUNC_0(VAR_4, "CMYK_K", VAR_5[3]);
        break;

    case 133:
        FUNC_0(VAR_4, "CMY_C", VAR_5[0]);
        FUNC_0(VAR_4, "CMY_M", VAR_5[1]);
        FUNC_0(VAR_4, "CMY_Y", VAR_5[2]);
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

            cmsUInt32Number VAR_6, VAR_7;

            VAR_7 = FUNC_1(VAR_4, VAR_1);
            for (VAR_6=0; VAR_6 < VAR_7; VAR_6++) {

                char VAR_8[255];

                FUNC_3(VAR_8, "%uCLR_%u", VAR_7, VAR_6+1);

                FUNC_0(VAR_4, VAR_8, VAR_5[VAR_6] * 100.0);
            }
        }
        break;

    default:
        {

            cmsUInt32Number VAR_9, VAR_10;

            VAR_10 = FUNC_1(VAR_4, VAR_1);
            for (VAR_9=0; VAR_9 < VAR_10; VAR_9++) {

                char VAR_11[255];

                FUNC_3(VAR_11, "CHAN_%u", VAR_9+1);

                FUNC_0(VAR_4, VAR_11, VAR_5[VAR_9]);
            }
        }
    }
}
