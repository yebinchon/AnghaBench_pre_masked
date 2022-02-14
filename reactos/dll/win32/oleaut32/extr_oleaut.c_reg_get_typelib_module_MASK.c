
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ver ;
typedef int typelibkey ;
typedef int tlguid ;
typedef int tlfn ;
typedef int WCHAR ;
struct TYPE_3__ {int Data1; int Data2; int Data3; int* Data4; } ;
typedef int REGSAM ;
typedef TYPE_1__* REFIID ;
typedef int LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,char*,int,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int,int *) ;
 scalar_t__ FUNC_6 (int ,char*,char*,int*) ;
 scalar_t__ FUNC_7 (int ,char*,int *,int*,int *,int*) ;
 int VAR_6 ;
 int FUNC_8 (char*,int,char*,char*,char*,int) ;
 int FUNC_9 (char*,char*,...) ;

__attribute__((used)) static HRESULT FUNC_10(REFIID VAR_7, WCHAR *VAR_8, DWORD VAR_9)
{
    REGSAM VAR_10 = (sizeof(void*) == 8) ? VAR_4 : VAR_5;
    char VAR_11[200], VAR_12[300], VAR_13[300], VAR_14[100], VAR_15[260];
    DWORD VAR_16, VAR_17, VAR_18;
    LONG VAR_19, VAR_20;
    BOOL VAR_21;
    HKEY VAR_22;

    FUNC_9( VAR_13, "Interface\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\Typelib",
        VAR_7->Data1, VAR_7->Data2, VAR_7->Data3,
        VAR_7->Data4[0], VAR_7->Data4[1], VAR_7->Data4[2], VAR_7->Data4[3],
        VAR_7->Data4[4], VAR_7->Data4[5], VAR_7->Data4[6], VAR_7->Data4[7]
    );

    VAR_20 = FUNC_5(VAR_2,VAR_13,0,VAR_3,&VAR_22);
    if (VAR_20 && (VAR_10 == VAR_4 || (FUNC_2(FUNC_1(), &VAR_21)
                                                && VAR_21)))
        VAR_20 = FUNC_5(VAR_2,VAR_13,0,VAR_3|VAR_10,&VAR_22);

    if (VAR_20)
    {
        FUNC_0("No %s key found.\n", VAR_13);
        return VAR_1;
    }

    VAR_16 = sizeof(VAR_11);
    if (FUNC_7(VAR_22, ((void*)0), ((void*)0), &VAR_18, (BYTE *)VAR_11, &VAR_16))
    {
        FUNC_0("Getting typelib guid failed.\n");
        FUNC_4(VAR_22);
        return VAR_1;
    }

    VAR_17 = sizeof(VAR_14);
    if (FUNC_7(VAR_22, "Version", ((void*)0), &VAR_18, (BYTE *)VAR_14, &VAR_17))
    {
        FUNC_0("Could not get version value?\n");
        FUNC_4(VAR_22);
        return VAR_1;
    }

    FUNC_4(VAR_22);


    FUNC_9(VAR_12, "Typelib\\%s\\%s\\0\\win%u", VAR_11, VAR_14, sizeof(void *) == 8 ? 64 : 32);



    VAR_19 = sizeof(VAR_15);
    if (FUNC_6(VAR_2, VAR_12, VAR_15, &VAR_19))
    {






            FUNC_0("Could not get typelib fn?\n");
            return VAR_1;



    }
    FUNC_3(VAR_0, 0, VAR_15, -1, VAR_8, VAR_9);
    return VAR_6;
}
