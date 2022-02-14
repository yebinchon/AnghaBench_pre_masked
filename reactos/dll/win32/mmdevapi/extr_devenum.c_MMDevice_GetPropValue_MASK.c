
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_15__ {int * Data4; int Data3; int Data2; int Data1; } ;
struct TYPE_11__ {int cbSize; void* pBlobData; } ;
struct TYPE_12__ {TYPE_1__ blob; int ulVal; void* pwszVal; } ;
struct TYPE_14__ {TYPE_2__ u; int vt; } ;
struct TYPE_13__ {int pid; TYPE_5__ fmtid; } ;
typedef TYPE_3__* REFPROPERTYKEY ;
typedef TYPE_4__ PROPVARIANT ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef TYPE_5__ GUID ;
typedef int DWORD ;
typedef int BYTE ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__ const*,int,int *) ;
 int FUNC_4 (TYPE_4__*) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *,int *,int ,int*,int *,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*,int ,scalar_t__) ;
 int FUNC_8 (int *) ;
 int VAR_10 ;
 int FUNC_9 (int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_10(const GUID *VAR_11, DWORD VAR_12, REFPROPERTYKEY VAR_13, PROPVARIANT *VAR_14)
{
    WCHAR VAR_15[80];
    const GUID *VAR_16 = &VAR_13->fmtid;
    DWORD VAR_17, VAR_18;
    HRESULT VAR_19 = VAR_6;
    HKEY VAR_20;
    LONG VAR_21;

    VAR_19 = FUNC_3(VAR_11, VAR_12, &VAR_20);
    if (FUNC_2(VAR_19))
        return VAR_19;
    FUNC_9( VAR_15, VAR_10, VAR_16->Data1, VAR_16->Data2, VAR_16->Data3,
               VAR_16->Data4[0], VAR_16->Data4[1], VAR_16->Data4[2], VAR_16->Data4[3],
               VAR_16->Data4[4], VAR_16->Data4[5], VAR_16->Data4[6], VAR_16->Data4[7], VAR_13->pid );
    VAR_21 = FUNC_6(VAR_20, ((void*)0), VAR_15, VAR_2, &VAR_17, ((void*)0), &VAR_18);
    if (VAR_21 != VAR_0)
    {
        FUNC_7("Reading %s returned %d\n", FUNC_8(VAR_15), VAR_21);
        FUNC_5(VAR_20);
        FUNC_4(VAR_14);
        return VAR_6;
    }

    switch (VAR_17)
    {
        case 128:
        {
            VAR_14->vt = VAR_8;
            VAR_14->u.pwszVal = FUNC_0(VAR_18);
            if (!VAR_14->u.pwszVal)
                VAR_19 = VAR_1;
            else
                FUNC_6(VAR_20, ((void*)0), VAR_15, VAR_5, ((void*)0), (BYTE*)VAR_14->u.pwszVal, &VAR_18);
            break;
        }
        case 129:
        {
            VAR_14->vt = VAR_9;
            FUNC_6(VAR_20, ((void*)0), VAR_15, VAR_4, ((void*)0), (BYTE*)&VAR_14->u.ulVal, &VAR_18);
            break;
        }
        case 130:
        {
            VAR_14->vt = VAR_7;
            VAR_14->u.blob.cbSize = VAR_18;
            VAR_14->u.blob.pBlobData = FUNC_0(VAR_18);
            if (!VAR_14->u.blob.pBlobData)
                VAR_19 = VAR_1;
            else
                FUNC_6(VAR_20, ((void*)0), VAR_15, VAR_3, ((void*)0), (BYTE*)VAR_14->u.blob.pBlobData, &VAR_18);
            break;
        }
        default:
            FUNC_1("Unknown/unhandled type: %u\n", VAR_17);
            FUNC_4(VAR_14);
            break;
    }
    FUNC_5(VAR_20);
    return VAR_19;
}
