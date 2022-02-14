
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int pv ;
typedef char WCHAR ;
typedef int USHORT ;
typedef scalar_t__ ULONG ;
struct TYPE_34__ {scalar_t__ cValues; } ;
struct TYPE_33__ {scalar_t__ cValues; } ;
struct TYPE_32__ {scalar_t__ cValues; } ;
struct TYPE_31__ {scalar_t__ cValues; } ;
struct TYPE_30__ {scalar_t__ cValues; } ;
struct TYPE_29__ {scalar_t__ cValues; } ;
struct TYPE_28__ {scalar_t__ cValues; } ;
struct TYPE_27__ {scalar_t__ cValues; } ;
struct TYPE_26__ {scalar_t__ cValues; } ;
struct TYPE_25__ {int cb; } ;
struct TYPE_22__ {int cValues; TYPE_16__* lpbin; } ;
struct TYPE_21__ {int cValues; char** lppszW; } ;
struct TYPE_20__ {int cValues; char** lppszA; } ;
struct TYPE_19__ {scalar_t__ cb; } ;
struct TYPE_23__ {char* lpszA; char* lpszW; TYPE_13__ MVbin; TYPE_12__ MVszW; TYPE_11__ MVszA; TYPE_10__ bin; TYPE_9__ MVguid; TYPE_8__ MVli; TYPE_7__ MVft; TYPE_6__ MVat; TYPE_5__ MVcur; TYPE_4__ MVdbl; TYPE_3__ MVflt; TYPE_2__ MVl; TYPE_1__ MVi; } ;
struct TYPE_24__ {TYPE_14__ Value; scalar_t__ ulPropTag; } ;
typedef TYPE_15__ SPropValue ;
typedef int SCODE ;
typedef TYPE_16__ SBinary ;
typedef char* LPWSTR ;
typedef char* LPSTR ;
typedef int LONG64 ;
typedef int LONG ;
typedef int GUID ;
typedef int FILETIME ;
typedef int CY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_15__*,int ,int) ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_15__*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    static char VAR_1[] = "Hi!";
    static WCHAR VAR_2[] = { 'H', 'i', '!', '\0' };
    LPSTR VAR_3[2];
    LPWSTR VAR_4[2];
    SBinary VAR_5[2];
    ULONG VAR_6, VAR_7, VAR_8;

    if (!&FUNC_3)
    {
        FUNC_4("UlPropSize is not available\n");
        return;
    }

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {
        SPropValue VAR_9;

        FUNC_1(&VAR_9, 0 ,sizeof(VAR_9));
        VAR_9.ulPropTag = VAR_6;

        VAR_7 = 1u;

        switch (FUNC_0(VAR_6))
        {
        case 140: VAR_9.Value.MVi.cValues = VAR_7 = 2;
        case 148: VAR_7 *= sizeof(USHORT); break;
        case 139: VAR_9.Value.MVl.cValues = VAR_7 = 2;
        case 147: VAR_7 *= sizeof(LONG); break;
        case 137: VAR_9.Value.MVflt.cValues = VAR_7 = 2;
        case 132: VAR_7 *= sizeof(float); break;
        case 141: VAR_9.Value.MVdbl.cValues = VAR_7 = 2;
        case 131: VAR_7 *= sizeof(double); break;
        case 142: VAR_9.Value.MVcur.cValues = VAR_7 = 2;
        case 150: VAR_7 *= sizeof(CY); break;
        case 145: VAR_9.Value.MVat.cValues = VAR_7 = 2;
        case 154: VAR_7 *= sizeof(double); break;
        case 135: VAR_9.Value.MVft.cValues = VAR_7 = 2;
        case 129: VAR_7 *= sizeof(FILETIME); break;
        case 149: VAR_7 = sizeof(SCODE); break;
        case 152: VAR_7 = sizeof(USHORT); break;
        case 133: VAR_7 = 0; break;
        case 138: VAR_9.Value.MVli.cValues = VAR_7 = 2;
        case 146: VAR_7 *= sizeof(LONG64); break;







        case 151: VAR_7 *= sizeof(GUID); break;
        case 130:
            VAR_9.Value.lpszA = VAR_1;
            VAR_7 = 4;
            break;
        case 128:
            VAR_9.Value.lpszW = VAR_2;
            VAR_7 = 4 * sizeof(WCHAR);
            break;
        case 153:
            VAR_9.Value.bin.cb = VAR_7 = 19;
            break;
        case 136:
            VAR_9.Value.MVszA.cValues = 2;
            VAR_9.Value.MVszA.lppszA = VAR_3;
            VAR_3[0] = VAR_1;
            VAR_3[1] = VAR_1;
            VAR_7 = 8;
            break;
        case 134:
            VAR_9.Value.MVszW.cValues = 2;
            VAR_9.Value.MVszW.lppszW = VAR_4;
            VAR_4[0] = VAR_2;
            VAR_4[1] = VAR_2;
            VAR_7 = 8 * sizeof(WCHAR);
            break;
        case 144:
            VAR_9.Value.MVbin.cValues = 2;
            VAR_9.Value.MVbin.lpbin = VAR_5;
            VAR_5[0].cb = 19;
            VAR_5[1].cb = 1;
            VAR_7 = 20;
            break;
        default:
            VAR_7 = 0;
        }

        VAR_8 = FUNC_3(&VAR_9);
        FUNC_2(VAR_8 == VAR_7,
           "pt= %d: Expected %d, got %d\n", VAR_6, VAR_7, VAR_8);
    }
}
