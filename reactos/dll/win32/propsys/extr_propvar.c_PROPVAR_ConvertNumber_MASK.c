
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONGLONG ;
struct TYPE_7__ {int QuadPart; } ;
struct TYPE_6__ {int QuadPart; } ;
struct TYPE_8__ {int cVal; int bVal; int iVal; int uiVal; int lVal; int ulVal; char* pszVal; int * pwszVal; TYPE_2__ uhVal; TYPE_1__ hVal; } ;
struct TYPE_9__ {int vt; TYPE_3__ u; } ;
typedef TYPE_4__* REFPROPVARIANT ;
typedef int LONGLONG ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (int *,int **,int ) ;

__attribute__((used)) static HRESULT FUNC_4(REFPROPVARIANT VAR_6, int VAR_7,
                                     BOOL VAR_8, LONGLONG *VAR_9)
{
    BOOL VAR_10;

    switch (VAR_6->vt)
    {
    case 137:
        VAR_10 = VAR_5;
        *VAR_9 = VAR_6->u.cVal;
        break;
    case 131:
        VAR_10 = VAR_3;
        *VAR_9 = VAR_6->u.bVal;
        break;
    case 136:
        VAR_10 = VAR_5;
        *VAR_9 = VAR_6->u.iVal;
        break;
    case 130:
        VAR_10 = VAR_3;
        *VAR_9 = VAR_6->u.uiVal;
        break;
    case 135:
        VAR_10 = VAR_5;
        *VAR_9 = VAR_6->u.lVal;
        break;
    case 129:
        VAR_10 = VAR_3;
        *VAR_9 = VAR_6->u.ulVal;
        break;
    case 134:
        VAR_10 = VAR_5;
        *VAR_9 = VAR_6->u.hVal.QuadPart;
        break;
    case 128:
        VAR_10 = VAR_3;
        *VAR_9 = VAR_6->u.uhVal.QuadPart;
        break;
    case 138:
        VAR_10 = VAR_3;
        *VAR_9 = 0;
        break;
    case 133:
    {
        char *VAR_11;
        *VAR_9 = FUNC_2(VAR_6->u.pszVal, &VAR_11, 0);
        if (VAR_6->u.pszVal == VAR_11)
            return VAR_0;
        VAR_10 = *VAR_9 < 0;
        break;
    }
    case 132:
    case 139:
    {
        WCHAR *VAR_12;
        *VAR_9 = FUNC_3(VAR_6->u.pwszVal, &VAR_12, 0);
        if (VAR_6->u.pwszVal == VAR_12)
            return VAR_0;
        VAR_10 = *VAR_9 < 0;
        break;
    }
    default:
        FUNC_0("unhandled vt %d\n", VAR_6->vt);
        return VAR_2;
    }

    if (*VAR_9 < 0 && VAR_10 != VAR_8)
        return FUNC_1(VAR_1);

    if (VAR_7 < 64)
    {
        if (VAR_8)
        {
            if (*VAR_9 >= ((LONGLONG)1 << (VAR_7-1)) ||
                *VAR_9 < ((LONGLONG)-1 << (VAR_7-1)))
                return FUNC_1(VAR_1);
        }
        else
        {
            if ((ULONGLONG)(*VAR_9) >= ((ULONGLONG)1 << VAR_7))
                return FUNC_1(VAR_1);
        }
    }

    return VAR_4;
}
