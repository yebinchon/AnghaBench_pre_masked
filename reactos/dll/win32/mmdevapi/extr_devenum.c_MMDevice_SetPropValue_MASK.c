
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_14__ {int * Data4; int Data3; int Data2; int Data1; } ;
struct TYPE_13__ {int pid; TYPE_5__ fmtid; } ;
struct TYPE_10__ {int cbSize; int const* pBlobData; } ;
struct TYPE_11__ {scalar_t__ pwszVal; TYPE_1__ blob; int ulVal; } ;
struct TYPE_12__ {int vt; TYPE_2__ u; } ;
typedef TYPE_3__* REFPROPVARIANT ;
typedef TYPE_4__* REFPROPERTYKEY ;
typedef int LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef TYPE_5__ GUID ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_5__ const*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ,int ,int const*,int) ;
 int FUNC_5 (char*,int const*,int) ;



 int const* FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_8 (int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_9(const GUID *VAR_5, DWORD VAR_6, REFPROPERTYKEY VAR_7, REFPROPVARIANT VAR_8)
{
    WCHAR VAR_9[80];
    const GUID *VAR_10 = &VAR_7->fmtid;
    HRESULT VAR_11;
    HKEY VAR_12;
    LONG VAR_13;

    VAR_11 = FUNC_2(VAR_5, VAR_6, &VAR_12);
    if (FUNC_0(VAR_11))
        return VAR_11;
    FUNC_8( VAR_9, VAR_4, VAR_10->Data1, VAR_10->Data2, VAR_10->Data3,
               VAR_10->Data4[0], VAR_10->Data4[1], VAR_10->Data4[2], VAR_10->Data4[3],
               VAR_10->Data4[4], VAR_10->Data4[5], VAR_10->Data4[6], VAR_10->Data4[7], VAR_7->pid );
    switch (VAR_8->vt)
    {
        case 128:
        {
            VAR_13 = FUNC_4(VAR_12, VAR_9, 0, VAR_2, (const BYTE*)&VAR_8->u.ulVal, sizeof(DWORD));
            break;
        }
        case 130:
        {
            VAR_13 = FUNC_4(VAR_12, VAR_9, 0, VAR_1, VAR_8->u.blob.pBlobData, VAR_8->u.blob.cbSize);
            FUNC_5("Blob %p %u\n", VAR_8->u.blob.pBlobData, VAR_8->u.blob.cbSize);

            break;
        }
        case 129:
        {
            VAR_13 = FUNC_4(VAR_12, VAR_9, 0, VAR_3, (const BYTE*)VAR_8->u.pwszVal, sizeof(WCHAR)*(1+FUNC_7(VAR_8->u.pwszVal)));
            break;
        }
        default:
            VAR_13 = 0;
            FUNC_1("Unhandled type %u\n", VAR_8->vt);
            VAR_11 = VAR_0;
            break;
    }
    FUNC_3(VAR_12);
    FUNC_5("Writing %s returned %u\n", FUNC_6(VAR_9), VAR_13);
    return VAR_11;
}
