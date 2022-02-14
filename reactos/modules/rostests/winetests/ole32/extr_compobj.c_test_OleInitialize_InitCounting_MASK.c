
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * REFCLSID ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_7;
    IUnknown *VAR_8;
    REFCLSID VAR_9 = &VAR_0;


    VAR_7 = FUNC_7(((void*)0), VAR_1);
    FUNC_6(VAR_7 == VAR_6, "CoInitializeEx(COINIT_MULTITHREADED) failed with error 0x%08x\n", VAR_7);

    VAR_7 = FUNC_4(((void*)0));
    FUNC_6(VAR_7 == VAR_4, "OleInitialize should have returned 0x%08x instead of 0x%08x\n", VAR_4, VAR_7);
    FUNC_5();

    VAR_8 = (IUnknown *)0xdeadbeef;
    VAR_7 = FUNC_0(VAR_9, ((void*)0), 0x17, &VAR_3, (void **)&VAR_8);
    FUNC_6(VAR_7 == VAR_6, "CoCreateInstance should have returned 0x%08x instead of 0x%08x\n", VAR_6, VAR_7);
    if (VAR_8) FUNC_3(VAR_8);

    FUNC_2();


    VAR_7 = FUNC_1(((void*)0));
    FUNC_6(VAR_7 == VAR_6, "CoInitialize() failed with error 0x%08x\n", VAR_7);

    VAR_7 = FUNC_4(((void*)0));
    FUNC_6(VAR_7 == VAR_6, "OleInitialize should have returned 0x%08x instead of 0x%08x\n", VAR_6, VAR_7);
    FUNC_5();
    FUNC_5();
    FUNC_5();

    VAR_8 = (IUnknown *)0xdeadbeef;
    VAR_7 = FUNC_0(VAR_9, ((void*)0), 0x17, &VAR_3, (void **)&VAR_8);
    FUNC_6(VAR_7 == VAR_6, "CoCreateInstance should have returned 0x%08x instead of 0x%08x\n", VAR_6, VAR_7);
    if (VAR_8) FUNC_3(VAR_8);

    FUNC_2();

    VAR_8 = (IUnknown *)0xdeadbeef;
    VAR_7 = FUNC_0(VAR_9, ((void*)0), 0x17, &VAR_3, (void **)&VAR_8);
    FUNC_6(VAR_7 == VAR_2, "CoCreateInstance should have returned 0x%08x instead of 0x%08x\n", VAR_2, VAR_7);
    if (VAR_8) FUNC_3(VAR_8);


    VAR_7 = FUNC_1(((void*)0));
    FUNC_6(VAR_7 == VAR_6, "CoInitialize() failed with error 0x%08x\n", VAR_7);

    VAR_7 = FUNC_4(((void*)0));
    FUNC_6(VAR_7 == VAR_6, "OleInitialize should have returned 0x%08x instead of 0x%08x\n", VAR_6, VAR_7);

    FUNC_2();
    FUNC_2();

    VAR_8 = (IUnknown *)0xdeadbeef;
    VAR_7 = FUNC_0(VAR_9, ((void*)0), 0x17, &VAR_3, (void **)&VAR_8);
    FUNC_6(VAR_7 == VAR_2, "CoCreateInstance should have returned 0x%08x instead of 0x%08x\n", VAR_2, VAR_7);

    if (VAR_8) FUNC_3(VAR_8);

    VAR_7 = FUNC_4(((void*)0));
    FUNC_6(VAR_7 == VAR_5, "OleInitialize should have returned 0x%08x instead of 0x%08x\n", VAR_5, VAR_7);


    FUNC_5();

}
