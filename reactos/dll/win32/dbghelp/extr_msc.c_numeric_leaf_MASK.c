
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned short) ;






 unsigned short VAR_0 ;
__attribute__((used)) static int FUNC_1(int* VAR_1, const unsigned short int* VAR_2)
{
    unsigned short int VAR_3 = *VAR_2++;
    int VAR_4 = 2;

    if (VAR_3 < VAR_0)
    {
        *VAR_1 = VAR_3;
    }
    else
    {
        switch (VAR_3)
        {
        case 144:
            VAR_4 += 1;
            *VAR_1 = *(const char*)VAR_2;
            break;

        case 132:
            VAR_4 += 2;
            *VAR_1 = *(const short*)VAR_2;
            break;

        case 129:
            VAR_4 += 2;
            *VAR_1 = *VAR_2;
            break;

        case 139:
            VAR_4 += 4;
            *VAR_1 = *(const int*)VAR_2;
            break;

        case 131:
            VAR_4 += 4;
            *VAR_1 = *(const unsigned int*)VAR_2;
            break;

        case 138:
        case 130:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 8;
            *VAR_1 = 0;
            break;

        case 136:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 4;
            *VAR_1 = 0;
            break;

        case 135:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 6;
            *VAR_1 = 0;
            break;

        case 134:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 8;
            *VAR_1 = 0;
            break;

        case 133:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 10;
            *VAR_1 = 0;
            break;

        case 137:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 16;
            *VAR_1 = 0;
            break;

        case 142:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 4;
            *VAR_1 = 0;
            break;

        case 141:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 8;
            *VAR_1 = 0;
            break;

        case 140:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 10;
            *VAR_1 = 0;
            break;

        case 143:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 16;
            *VAR_1 = 0;
            break;

        case 128:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_3);
            VAR_4 += 2 + *VAR_2;
            *VAR_1 = 0;
            break;

        default:
     FUNC_0("Unknown numeric leaf type %04x\n", VAR_3);
            *VAR_1 = 0;
            break;
        }
    }

    return VAR_4;
}
