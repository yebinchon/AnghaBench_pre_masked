
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int * REFCLSID ;
typedef int * LONG ;
typedef int IUnknown ;
typedef int * HRESULT ;
typedef int * HKEY ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * FUNC_0 (int *,int ,int *,int *,void**) ;
 int FUNC_1 () ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*,int ,int *,int ,int ,int *,int **,int *) ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,char*,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ) ;
 int * FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    HRESULT VAR_14;
    HANDLE VAR_15;
    ULONG_PTR VAR_16;
    IUnknown *VAR_17;
    REFCLSID VAR_18 = &VAR_4;
    HKEY VAR_19;
    LONG VAR_20;

    VAR_14 = FUNC_0(VAR_18, VAR_2, ((void*)0), &VAR_10, (void **)&VAR_17);
    FUNC_7(VAR_14 == VAR_6, "CoGetClassObject should have returned CO_E_NOTINITIALIZED instead of 0x%08x\n", VAR_14);
    FUNC_7(VAR_17 == ((void*)0), "CoGetClassObject should have changed the passed in pointer to NULL, instead of %p\n", VAR_17);

    VAR_14 = FUNC_0(VAR_18, VAR_2, ((void*)0), &VAR_10, ((void*)0));
    FUNC_7(VAR_14 == VAR_7 ||
       FUNC_6(VAR_14 == VAR_6),
       "CoGetClassObject should have returned E_INVALIDARG instead of 0x%08x\n", VAR_14);

    FUNC_12(VAR_1, VAR_0);

    if (!&FUNC_10)
    {
        FUNC_13("RegOverridePredefKey not available\n");
        return;
    }

    FUNC_8(((void*)0), VAR_5);

    VAR_14 = FUNC_0(VAR_18, VAR_2, ((void*)0), &VAR_10, (void **)&VAR_17);
    if (VAR_14 == VAR_12)
    {
        FUNC_2(VAR_17);

        VAR_20 = FUNC_4(VAR_9, "Software\\Classes", 0, ((void*)0), 0,
                             VAR_11, ((void*)0), &VAR_19, ((void*)0));
        FUNC_7(!VAR_20, "RegCreateKeyEx returned %d\n", VAR_20);

        VAR_20 = FUNC_10(VAR_8, VAR_19);
        FUNC_7(!VAR_20, "RegOverridePredefKey returned %d\n", VAR_20);

        VAR_14 = FUNC_0(VAR_18, VAR_2, ((void*)0), &VAR_10, (void **)&VAR_17);
        FUNC_7(VAR_14 == VAR_12, "CoGetClassObject should have returned S_OK instead of 0x%08x\n", VAR_14);

        VAR_20 = FUNC_10(VAR_8, ((void*)0));
        FUNC_7(!VAR_20, "RegOverridePredefKey returned %d\n", VAR_20);

        if (VAR_14 == VAR_12) FUNC_2(VAR_17);
        FUNC_3(VAR_19);
    }

    VAR_14 = FUNC_0(&VAR_3, VAR_2, ((void*)0), &VAR_10, (void **)&VAR_17);
    FUNC_7(VAR_14 == VAR_12, "got 0x%08x\n", VAR_14);
    FUNC_2(VAR_17);


    if ((VAR_15 = FUNC_5(VAR_13, &VAR_16)))
    {
        VAR_14 = FUNC_0(&VAR_3, VAR_2, ((void*)0), &VAR_10, (void **)&VAR_17);
        FUNC_7(VAR_14 == VAR_12, "got 0x%08x\n", VAR_14);
        FUNC_2(VAR_17);

        FUNC_9(0, VAR_16);
        FUNC_11(VAR_15);
    }

    FUNC_1();
}
