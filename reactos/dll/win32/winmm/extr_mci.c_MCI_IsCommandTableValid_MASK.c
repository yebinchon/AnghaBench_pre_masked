
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_2__ {int * lpTable; int uDevType; } ;
typedef int * LPCWSTR ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,size_t,int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static BOOL FUNC_2(UINT VAR_4)
{
    const BYTE* VAR_5;
    LPCWSTR VAR_6;
    DWORD VAR_7;
    WORD VAR_8;
    int VAR_9 = 0;
    BOOL VAR_10 = VAR_0;

    FUNC_0("Dumping cmdTbl=%d [lpTable=%p devType=%d]\n",
   VAR_4, VAR_2[VAR_4].lpTable, VAR_2[VAR_4].uDevType);

    if (VAR_4 >= VAR_1 || !VAR_2[VAR_4].lpTable)
 return VAR_0;

    VAR_5 = VAR_2[VAR_4].lpTable;
    do {
        VAR_6 = (LPCWSTR)VAR_5;
        VAR_5 += (FUNC_1(VAR_6) + 1) * sizeof(WCHAR);
        VAR_7 = *(const DWORD*)VAR_5;
        VAR_8 = *(const WORD*)(VAR_5 + sizeof(DWORD));
        VAR_5 += sizeof(DWORD) + sizeof(WORD);
        VAR_9 ++;

        switch (VAR_8) {
        case 137: if (!*VAR_6 || !VAR_7) return VAR_0; VAR_9 = 0; break;
        case 128: if (VAR_10) return VAR_0; break;
        case 131: if (!*VAR_6) return VAR_0; break;
        case 135: if (*VAR_6 || VAR_7 || VAR_9 == 0) return VAR_0; VAR_9 = 0; break;
        case 129: if (*VAR_6 || VAR_9 != 1) return VAR_0; break;
        case 132: if (!*VAR_6) return VAR_0; break;
        case 134: if (*VAR_6 || VAR_7) return VAR_0; VAR_9 = 0; break;
        case 130: if (!*VAR_6 || VAR_10) return VAR_0; break;
        case 136: if (VAR_10) return VAR_0; VAR_10 = VAR_3; break;
        case 133: if (*VAR_6 || VAR_7 || !VAR_10) return VAR_0; VAR_10 = VAR_0; break;
        default: return VAR_0;
        }
    } while (VAR_8 != 134);
    return VAR_3;
}
