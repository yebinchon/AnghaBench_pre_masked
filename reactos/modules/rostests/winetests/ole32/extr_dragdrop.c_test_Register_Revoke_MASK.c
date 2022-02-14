
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWND ;
typedef int HRESULT ;
typedef int * HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,char*,int ,int ,int ,int ,int ,int *,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_8 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    HANDLE VAR_9;
    HRESULT VAR_10;
    HWND VAR_11;

    VAR_11 = FUNC_0("WineOleTestClass", "Test", 0,
        VAR_1, VAR_1, VAR_1, VAR_1, ((void*)0),
        ((void*)0), ((void*)0), ((void*)0));

    VAR_10 = FUNC_5(VAR_11, &VAR_4);
    FUNC_8(VAR_10 == VAR_6 ||
        FUNC_7(VAR_10 == VAR_0),
        "RegisterDragDrop without OLE initialized should have returned E_OUTOFMEMORY instead of 0x%08x\n", VAR_10);

    FUNC_3(((void*)0));

    VAR_10 = FUNC_5(VAR_11, ((void*)0));
    FUNC_8(VAR_10 == VAR_5, "RegisterDragDrop with NULL IDropTarget * should return E_INVALIDARG instead of 0x%08x\n", VAR_10);

    VAR_10 = FUNC_5(((void*)0), &VAR_4);
    FUNC_8(VAR_10 == VAR_3, "RegisterDragDrop with NULL hwnd should return DRAGDROP_E_INVALIDHWND instead of 0x%08x\n", VAR_10);

    VAR_10 = FUNC_5((HWND)0xdeadbeef, &VAR_4);
    FUNC_8(VAR_10 == VAR_3, "RegisterDragDrop with garbage hwnd should return DRAGDROP_E_INVALIDHWND instead of 0x%08x\n", VAR_10);

    FUNC_8(VAR_8 == 0, "DropTarget refs should be zero not %d\n", VAR_8);
    VAR_10 = FUNC_5(VAR_11, &VAR_4);
    FUNC_9(VAR_10, "RegisterDragDrop");
    FUNC_8(VAR_8 >= 1, "DropTarget refs should be at least one\n");

    VAR_9 = FUNC_2(VAR_11, "OleDropTargetInterface");
    FUNC_8(VAR_9 == &VAR_4, "expected IDropTarget pointer %p, got %p\n", &VAR_4, VAR_9);

    VAR_10 = FUNC_5(VAR_11, &VAR_4);
    FUNC_8(VAR_10 == VAR_2, "RegisterDragDrop with already registered hwnd should return DRAGDROP_E_ALREADYREGISTERED instead of 0x%08x\n", VAR_10);

    FUNC_8(VAR_8 >= 1, "DropTarget refs should be at least one\n");
    FUNC_4();


    if (VAR_8 >= 1)
    {
        VAR_10 = FUNC_6(VAR_11);
        FUNC_9(VAR_10, "RevokeDragDrop");
        FUNC_8(VAR_8 == 0 ||
           FUNC_7(VAR_8 == 1),
           "DropTarget refs should be zero not %d\n", VAR_8);
    }

    VAR_10 = FUNC_6(((void*)0));
    FUNC_8(VAR_10 == VAR_3, "RevokeDragDrop with NULL hwnd should return DRAGDROP_E_INVALIDHWND instead of 0x%08x\n", VAR_10);

    FUNC_1(VAR_11);


    FUNC_3(((void*)0));

    VAR_11 = FUNC_0("WineOleTestClass", "Test", 0,
        VAR_1, VAR_1, VAR_1, VAR_1, ((void*)0),
        ((void*)0), ((void*)0), ((void*)0));

    VAR_10 = FUNC_5(VAR_11, &VAR_4);
    FUNC_8(VAR_10 == VAR_7, "got 0x%08x\n", VAR_10);

    FUNC_1(VAR_11);

    VAR_10 = FUNC_6(VAR_11);
    FUNC_8(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);

    FUNC_4();
}
