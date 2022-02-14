
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
struct TYPE_7__ {TYPE_3__* Sid; } ;
struct TYPE_9__ {TYPE_1__ User; } ;
typedef int REGSAM ;
typedef int PVOID ;
typedef TYPE_3__* PTOKEN_USER ;
typedef int PHKEY ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef int Buffer ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,int,int *) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int,int ) ;
 int FUNC_6 (int *,int ,int **) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static BOOL
FUNC_10(DWORD VAR_9,
                                 PHKEY VAR_10,
                                 REGSAM VAR_11)
{
    BOOL VAR_12 = VAR_7;
    HANDLE VAR_13 = ((void*)0);
    HANDLE VAR_14;
    BYTE VAR_15[256];
    DWORD VAR_16 = 0;
    UNICODE_STRING VAR_17;
    PTOKEN_USER VAR_18;

    VAR_14 = FUNC_5(VAR_3 | VAR_4 | VAR_5, VAR_1, VAR_9);
    if (!VAR_14)
    {
        FUNC_1("Error: OpenProcess failed(0x%x)\n", FUNC_2());
        return VAR_1;
    }

    if (!FUNC_6(VAR_14, VAR_6, &VAR_13))
    {
        FUNC_1("Error: OpenProcessToken failed(0x%x)\n", FUNC_2());
        FUNC_0(VAR_14);
        return VAR_1;
    }

    if (!FUNC_3(VAR_13, VAR_8, (PVOID)VAR_15, sizeof(VAR_15), &VAR_16))
    {
        FUNC_1("Error: GetTokenInformation failed(0x%x)\n",FUNC_2());
        FUNC_0(VAR_13);
        FUNC_0(VAR_14);
        return VAR_1;
    }

    VAR_18 = ((PTOKEN_USER)VAR_15)->User.Sid;
    if (!FUNC_4(FUNC_8(&VAR_17, VAR_18, VAR_7)))
    {
        FUNC_1("Error: RtlConvertSidToUnicodeString failed(0x%x)\n", FUNC_2());
        FUNC_0(VAR_13);
        FUNC_0(VAR_14);
        return VAR_1;
    }




    VAR_12 = (FUNC_7(VAR_2,
                          VAR_17.Buffer,
                          0,
                          VAR_11,
                          VAR_10) == VAR_0);

    FUNC_9(&VAR_17);

    FUNC_0(VAR_13);
    FUNC_0(VAR_14);

    return VAR_12;
}
