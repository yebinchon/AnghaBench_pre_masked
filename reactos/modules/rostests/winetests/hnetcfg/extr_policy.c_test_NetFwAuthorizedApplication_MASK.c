
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int netpath ;
typedef int WCHAR ;
struct TYPE_3__ {int * lpUniversalName; } ;
typedef TYPE_1__ UNIVERSAL_NAME_INFOW ;
typedef int INetFwAuthorizedApplication ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int * BSTR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_11 ;
 int FUNC_12 (int *,int ,TYPE_1__*,int*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int,char*,int ,...) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(void)
{
    INetFwAuthorizedApplication *VAR_12;
    static WCHAR VAR_13[] = {0};
    UNIVERSAL_NAME_INFOW *VAR_14;
    WCHAR VAR_15[VAR_8];
    WCHAR VAR_16[VAR_8];
    WCHAR VAR_17[VAR_8];
    HRESULT VAR_18;
    BSTR VAR_19;
    DWORD VAR_20;

    VAR_18 = FUNC_1(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_7, (void**)&VAR_12);
    FUNC_15(VAR_18 == VAR_10, "got: %08x\n", VAR_18);

    VAR_18 = FUNC_5(((void*)0), VAR_17, FUNC_0(VAR_17));
    FUNC_15(VAR_18, "GetModuleFileName failed: %u\n", FUNC_3());

    VAR_18 = FUNC_8(VAR_12, ((void*)0));
    FUNC_15(VAR_18 == VAR_6, "got: %08x\n", VAR_18);

    VAR_18 = FUNC_8(VAR_12, &VAR_19);
    FUNC_15(VAR_18 == VAR_10 || VAR_18 == FUNC_6(VAR_3), "got: %08x\n", VAR_18);
    FUNC_15(!VAR_19, "got: %s\n", FUNC_16(VAR_19));

    VAR_18 = FUNC_9(VAR_12, ((void*)0));
    FUNC_15(VAR_18 == VAR_5 || VAR_18 == FUNC_6(VAR_4), "got: %08x\n", VAR_18);

    VAR_18 = FUNC_9(VAR_12, VAR_13);
    FUNC_15(VAR_18 == VAR_5 || VAR_18 == FUNC_6(VAR_4), "got: %08x\n", VAR_18);

    VAR_19 = FUNC_10(VAR_17);
    VAR_18 = FUNC_9(VAR_12, VAR_19);
    FUNC_15(VAR_18 == VAR_10, "got: %08x\n", VAR_18);
    FUNC_11(VAR_19);

    FUNC_2(VAR_17, FUNC_0(VAR_15), VAR_15, ((void*)0));
    FUNC_4(VAR_15, VAR_15, FUNC_0(VAR_15));

    VAR_14 = (UNIVERSAL_NAME_INFOW *)&VAR_16;
    VAR_20 = sizeof(VAR_16);
    VAR_18 = FUNC_12(VAR_17, VAR_11, VAR_14, &VAR_20);
    if (VAR_18 != VAR_9)
    {
        VAR_14->lpUniversalName = VAR_16 + sizeof(*VAR_14)/sizeof(WCHAR);
        FUNC_14(VAR_14->lpUniversalName, VAR_15);
    }

    VAR_18 = FUNC_8(VAR_12, &VAR_19);
    FUNC_15(VAR_18 == VAR_10, "got: %08x\n", VAR_18);
    FUNC_15(!FUNC_13(VAR_19,VAR_14->lpUniversalName), "expected %s, got %s\n",
        FUNC_16(VAR_14->lpUniversalName), FUNC_16(VAR_19));
    FUNC_11(VAR_19);

    FUNC_7(VAR_12);
}
