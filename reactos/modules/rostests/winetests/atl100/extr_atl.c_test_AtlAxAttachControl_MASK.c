
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int IUnknown ;
typedef int * HWND ;
typedef int HRESULT ;


 int FUNC_0 (int *,int *,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int,int *,void**) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,int ,int) ;
 int * FUNC_7 () ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    HWND VAR_8;
    HRESULT VAR_9;
    IUnknown *VAR_10, *VAR_11;
    LONG VAR_12;

    VAR_9 = FUNC_0(((void*)0), ((void*)0), ((void*)0));
    FUNC_8(VAR_9 == VAR_3, "Expected AtlAxAttachControl to return E_INVALIDARG, got 0x%08x\n", VAR_9);

    VAR_11 = (IUnknown *)0xdeadbeef;
    VAR_9 = FUNC_0(((void*)0), ((void*)0), &VAR_11);
    FUNC_8(VAR_9 == VAR_3, "Expected AtlAxAttachControl to return E_INVALIDARG, got 0x%08x\n", VAR_9);
    FUNC_8(VAR_11 == (IUnknown *)0xdeadbeef,
       "Expected the output container pointer to be untouched, got %p\n", VAR_11);

    VAR_8 = FUNC_7();
    VAR_9 = FUNC_0(((void*)0), VAR_8, ((void*)0));
    FUNC_8(VAR_9 == VAR_3, "Expected AtlAxAttachControl to return E_INVALIDARG, got 0x%08x\n", VAR_9);
    FUNC_2(VAR_8);

    VAR_8 = FUNC_7();
    VAR_11 = (IUnknown *)0xdeadbeef;
    VAR_9 = FUNC_0(((void*)0), VAR_8, &VAR_11);
    FUNC_8(VAR_9 == VAR_3, "Expected AtlAxAttachControl to return E_INVALIDARG, got 0x%08x\n", VAR_9);
    FUNC_8(VAR_11 == (IUnknown *)0xdeadbeef, "returned %p\n", VAR_11);
    FUNC_2(VAR_8);

    VAR_9 = FUNC_1(&VAR_2, ((void*)0), VAR_1 | VAR_0,
                          &VAR_5, (void **)&VAR_10);
    FUNC_8(VAR_9 == VAR_7, "Expected CoCreateInstance to return S_OK, got 0x%08x\n", VAR_9);

    if (FUNC_3(VAR_9))
    {
        FUNC_9("Couldn't obtain a test IOleObject instance\n");
        return;
    }

    VAR_9 = FUNC_0(VAR_10, ((void*)0), ((void*)0));
    FUNC_8(VAR_9 == VAR_6, "Expected AtlAxAttachControl to return S_FALSE, got 0x%08x\n", VAR_9);

    VAR_11 = ((void*)0);
    VAR_9 = FUNC_0(VAR_10, ((void*)0), &VAR_11);
    FUNC_8(VAR_9 == VAR_6, "Expected AtlAxAttachControl to return S_FALSE, got 0x%08x\n", VAR_9);
    FUNC_8(VAR_11 != ((void*)0), "got %p\n", VAR_11);
    FUNC_5(VAR_11);

    VAR_8 = FUNC_7();
    FUNC_6(VAR_8, VAR_4, 0xdeadbeef);
    VAR_9 = FUNC_0(VAR_10, VAR_8, ((void*)0));
    FUNC_8(VAR_9 == VAR_7, "Expected AtlAxAttachControl to return S_OK, got 0x%08x\n", VAR_9);
    VAR_12 = FUNC_4(VAR_8, VAR_4);
    FUNC_8(VAR_12 == 0xdeadbeef, "returned %08x\n", VAR_12);
    FUNC_2(VAR_8);

    VAR_8 = FUNC_7();
    FUNC_6(VAR_8, VAR_4, 0xdeadbeef);
    VAR_11 = ((void*)0);
    VAR_9 = FUNC_0(VAR_10, VAR_8, &VAR_11);
    FUNC_8(VAR_9 == VAR_7, "Expected AtlAxAttachControl to return S_OK, got 0x%08x\n", VAR_9);
    FUNC_8(VAR_11 != ((void*)0), "Expected not NULL!\n");
    FUNC_5(VAR_11);
    VAR_12 = FUNC_4(VAR_8, VAR_4);
    FUNC_8(VAR_12 == 0xdeadbeef, "Expected unchanged, returned %08x\n", VAR_12);
    FUNC_2(VAR_8);

    FUNC_5(VAR_10);
}
