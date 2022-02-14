
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned short uintVal; char cVal; short iVal; unsigned short uiVal; int lVal; long long llVal; unsigned long long ullVal; float fltVal; } ;
struct TYPE_7__ {void* vt; TYPE_1__ n3; } ;
struct TYPE_8__ {TYPE_2__ n2; } ;
struct TYPE_9__ {TYPE_3__ n1; } ;
typedef TYPE_4__ VARIANT ;


 int FUNC_0 (char*,unsigned short) ;






 unsigned short VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;

__attribute__((used)) static int FUNC_1(VARIANT* VAR_12, const unsigned short int* VAR_13)
{
    unsigned short int VAR_14 = *VAR_13++;
    int VAR_15 = 2;

    if (VAR_14 < VAR_0)
    {
        VAR_12->n1.n2.vt = VAR_11;
        VAR_12->n1.n2.n3.uintVal = VAR_14;
    }
    else
    {
        switch (VAR_14)
        {
        case 144:
            VAR_15 += 1;
            VAR_12->n1.n2.vt = VAR_2;
            VAR_12->n1.n2.n3.cVal = *(const char*)VAR_13;
            break;

        case 132:
            VAR_15 += 2;
            VAR_12->n1.n2.vt = VAR_3;
            VAR_12->n1.n2.n3.iVal = *(const short*)VAR_13;
            break;

        case 129:
            VAR_15 += 2;
            VAR_12->n1.n2.vt = VAR_8;
            VAR_12->n1.n2.n3.uiVal = *VAR_13;
            break;

        case 139:
            VAR_15 += 4;
            VAR_12->n1.n2.vt = VAR_4;
            VAR_12->n1.n2.n3.lVal = *(const int*)VAR_13;
            break;

        case 131:
            VAR_15 += 4;
            VAR_12->n1.n2.vt = VAR_9;
            VAR_12->n1.n2.n3.uiVal = *(const unsigned int*)VAR_13;
            break;

        case 138:
            VAR_15 += 8;
            VAR_12->n1.n2.vt = VAR_5;
            VAR_12->n1.n2.n3.llVal = *(const long long int*)VAR_13;
            break;

        case 130:
            VAR_15 += 8;
            VAR_12->n1.n2.vt = VAR_10;
            VAR_12->n1.n2.n3.ullVal = *(const long long unsigned int*)VAR_13;
            break;

        case 136:
            VAR_15 += 4;
            VAR_12->n1.n2.vt = VAR_6;
            VAR_12->n1.n2.n3.fltVal = *(const float*)VAR_13;
            break;

        case 135:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_14);
            VAR_15 += 6;
            VAR_12->n1.n2.vt = VAR_1;
            break;

        case 134:
            VAR_15 += 8;
            VAR_12->n1.n2.vt = VAR_7;
            VAR_12->n1.n2.n3.fltVal = *(const double*)VAR_13;
            break;

        case 133:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_14);
            VAR_15 += 10;
            VAR_12->n1.n2.vt = VAR_1;
            break;

        case 137:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_14);
            VAR_15 += 16;
            VAR_12->n1.n2.vt = VAR_1;
            break;

        case 142:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_14);
            VAR_15 += 4;
            VAR_12->n1.n2.vt = VAR_1;
            break;

        case 141:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_14);
            VAR_15 += 8;
            VAR_12->n1.n2.vt = VAR_1;
            break;

        case 140:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_14);
            VAR_15 += 10;
            VAR_12->n1.n2.vt = VAR_1;
            break;

        case 143:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_14);
            VAR_15 += 16;
            VAR_12->n1.n2.vt = VAR_1;
            break;

        case 128:
     FUNC_0("Unsupported numeric leaf type %04x\n", VAR_14);
            VAR_15 += 2 + *VAR_13;
            VAR_12->n1.n2.vt = VAR_1;
            break;

        default:
     FUNC_0("Unknown numeric leaf type %04x\n", VAR_14);
            VAR_12->n1.n2.vt = VAR_1;
            break;
        }
    }

    return VAR_15;
}
