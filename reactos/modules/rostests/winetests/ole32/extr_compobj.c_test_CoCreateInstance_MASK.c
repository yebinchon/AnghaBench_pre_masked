
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * REFCLSID ;
typedef int IUnknown ;
typedef int * HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int * VAR_10 ;
 int FUNC_4 (int,char*,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_11;
    IUnknown *VAR_12;
    REFCLSID VAR_13 = &VAR_6;

    VAR_12 = (IUnknown *)0xdeadbeef;
    VAR_11 = FUNC_0(VAR_13, ((void*)0), VAR_3, &VAR_9, (void **)&VAR_12);
    FUNC_4(VAR_11 == VAR_8, "CoCreateInstance should have returned CO_E_NOTINITIALIZED instead of 0x%08x\n", VAR_11);
    FUNC_4(VAR_12 == ((void*)0), "CoCreateInstance should have changed the passed in pointer to NULL, instead of %p\n", VAR_12);

    FUNC_2(((void*)0));


    VAR_11 = FUNC_0(&VAR_7, ((void*)0), VAR_3, &VAR_9, (void **)&VAR_12);
    FUNC_4(VAR_11 == VAR_10, "CoCreateInstance for non-registered inproc server should have returned REGDB_E_CLASSNOTREG instead of 0x%08x\n", VAR_11);
    VAR_11 = FUNC_0(&VAR_7, ((void*)0), VAR_2, &VAR_9, (void **)&VAR_12);
    FUNC_4(VAR_11 == VAR_10, "CoCreateInstance for non-registered inproc handler should have returned REGDB_E_CLASSNOTREG instead of 0x%08x\n", VAR_11);
    VAR_11 = FUNC_0(&VAR_7, ((void*)0), VAR_4, &VAR_9, (void **)&VAR_12);
    FUNC_4(VAR_11 == VAR_10, "CoCreateInstance for non-registered local server should have returned REGDB_E_CLASSNOTREG instead of 0x%08x\n", VAR_11);
    VAR_11 = FUNC_0(&VAR_7, ((void*)0), VAR_5, &VAR_9, (void **)&VAR_12);
    FUNC_4(VAR_11 == VAR_10, "CoCreateInstance for non-registered remote server should have returned REGDB_E_CLASSNOTREG instead of 0x%08x\n", VAR_11);

    VAR_11 = FUNC_0(VAR_13, ((void*)0), VAR_3, &VAR_9, (void **)&VAR_12);
    if(VAR_11 == VAR_10)
    {
        FUNC_6("IE not installed so can't test CoCreateInstance\n");
        FUNC_3();
        return;
    }

    FUNC_5(VAR_11, "CoCreateInstance");
    if(VAR_12) FUNC_1(VAR_12);
    FUNC_3();

    VAR_11 = FUNC_0(VAR_13, ((void*)0), VAR_3, &VAR_9, (void **)&VAR_12);
    FUNC_4(VAR_11 == VAR_8, "CoCreateInstance should have returned CO_E_NOTINITIALIZED instead of 0x%08x\n", VAR_11);

    FUNC_7(VAR_1, VAR_0);
}
