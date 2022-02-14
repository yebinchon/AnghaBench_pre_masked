
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_6__ {int MaxCount; } ;
typedef int SHORT ;
typedef int* PFORMAT_STRING ;
typedef TYPE_1__ MIDL_STUB_MESSAGE ;
typedef int DWORD ;
typedef int CHAR ;


 int FUNC_0 (TYPE_1__*,int*) ;
 int* FUNC_1 (TYPE_1__*,int *,int*,int const) ;
 int* FUNC_2 (TYPE_1__*,int *,int*,int) ;
 int VAR_0 ;


 int VAR_1 ;




 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static DWORD FUNC_5(MIDL_STUB_MESSAGE *VAR_2, PFORMAT_STRING VAR_3)
{
    DWORD VAR_4;
    switch(*VAR_3)
    {
    case 134:
        if (VAR_3[1] & VAR_0)
        {
            VAR_4 = 0;
            break;
        }
        VAR_4 = FUNC_5(VAR_2, &VAR_3[2] + *(const SHORT*)&VAR_3[2]);
        break;
    case 131:
    case 135:
        VAR_4 = *(const WORD*)(VAR_3 + 2);
        break;
    case 146:
        VAR_4 = *(const WORD*)(VAR_3 + 2);
        if(*(const WORD*)(VAR_3 + 4))
            FUNC_3("Unhandled conformant description\n");
        break;
    case 145:
    case 143:
        VAR_4 = *(const WORD*)(VAR_3 + 2);
        FUNC_1(VAR_2, ((void*)0), VAR_3 + 4, 0);
        VAR_4 *= VAR_2->MaxCount;
        break;
    case 133:
    case 132:
        VAR_4 = *(const WORD*)(VAR_3 + 2);
        break;
    case 138:
    case 137:
        VAR_4 = *(const DWORD*)(VAR_3 + 2);
        break;
    case 147:
        VAR_3 = FUNC_1(VAR_2, ((void*)0), VAR_3 + 4, *(const WORD*)&VAR_3[2]);
        FUNC_4("conformance = %ld\n", VAR_2->MaxCount);
        VAR_3 = FUNC_2(VAR_2, ((void*)0), VAR_3, VAR_2->MaxCount);
        VAR_4 = FUNC_0(VAR_2, VAR_3);
        VAR_4 *= VAR_2->MaxCount;
        break;
    case 129:
        VAR_4 = *(const WORD*)(VAR_3 + 4);
        break;
    case 144:
        VAR_4 = *(const WORD*)(VAR_3 + 2);
        break;
    case 128:
        VAR_4 = *(const WORD*)(VAR_3 + 2) * sizeof(WCHAR);
        break;
    case 142:
    case 141:
        if (*VAR_3 == 142)
            VAR_4 = sizeof(CHAR);
        else
            VAR_4 = sizeof(WCHAR);
        if (VAR_3[1] == VAR_1)
            FUNC_1(VAR_2, ((void*)0), VAR_3 + 2, 0);
        else
            VAR_2->MaxCount = 0;
        VAR_4 *= VAR_2->MaxCount;
        break;
    default:
        FUNC_3("Unhandled type %02x\n", *VAR_3);

    case 130:
    case 136:
    case 140:
    case 139:
        VAR_4 = sizeof(void *);
        break;
    }
    return VAR_4;
}
