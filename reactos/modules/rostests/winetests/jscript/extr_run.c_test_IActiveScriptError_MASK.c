
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int wCode; int wReserved; int dwHelpContext; int scode; int * bstrHelpFile; int * bstrDescription; int * bstrSource; int * pfnDeferredFillIn; int * pvReserved; } ;
typedef int SCODE ;
typedef int LONG ;
typedef int IActiveScriptError ;
typedef int HRESULT ;
typedef TYPE_1__ EXCEPINFO ;
typedef int DWORD ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *,int*,int*,int*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int,char*,int,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(IActiveScriptError *VAR_3, SCODE VAR_4, ULONG VAR_5, LONG VAR_6, BSTR VAR_7, BSTR VAR_8, BSTR VAR_9)
{
    HRESULT VAR_10;
    DWORD VAR_11;
    ULONG VAR_12;
    LONG VAR_13;
    BSTR VAR_14;
    EXCEPINFO VAR_15;



    VAR_10 = FUNC_2(VAR_3, ((void*)0), ((void*)0), ((void*)0));
    FUNC_6(VAR_10 == VAR_2, "IActiveScriptError_GetSourcePosition -- hres: expected S_OK, got 0x%08x\n", VAR_10);

    VAR_11 = 0xdeadbeef;
    VAR_10 = FUNC_2(VAR_3, &VAR_11, ((void*)0), ((void*)0));
    FUNC_6(VAR_10 == VAR_2, "IActiveScriptError_GetSourcePosition -- hres: expected S_OK, got 0x%08x\n", VAR_10);
    FUNC_6(VAR_11 == 0, "IActiveScriptError_GetSourcePosition -- source_context: expected 0, got 0x%08x\n", VAR_11);

    VAR_12 = 0xdeadbeef;
    VAR_10 = FUNC_2(VAR_3, ((void*)0), &VAR_12, ((void*)0));
    FUNC_6(VAR_10 == VAR_2, "IActiveScriptError_GetSourcePosition -- hres: expected S_OK, got 0x%08x\n", VAR_10);
    FUNC_6(VAR_12 == VAR_5, "IActiveScriptError_GetSourcePosition -- line_number: expected %d, got %d\n", VAR_5, VAR_12);

    VAR_13 = 0xdeadbeef;
    VAR_10 = FUNC_2(VAR_3, ((void*)0), ((void*)0), &VAR_13);
    FUNC_6(VAR_10 == VAR_2, "IActiveScriptError_GetSourcePosition -- hres: expected S_OK, got 0x%08x\n", VAR_10);
    FUNC_6(VAR_13 == VAR_6, "IActiveScriptError_GetSourcePosition -- char_position: expected %d, got %d\n", VAR_6, VAR_13);



    VAR_10 = FUNC_1(VAR_3, ((void*)0));
    FUNC_6(VAR_10 == VAR_1, "IActiveScriptError_GetSourceLineText -- hres: expected E_POINTER, got 0x%08x\n", VAR_10);

    VAR_14 = ((void*)0);
    VAR_10 = FUNC_1(VAR_3, &VAR_14);
    if (VAR_9) {
        FUNC_6(VAR_10 == VAR_2, "IActiveScriptError_GetSourceLineText -- hres: expected S_OK, got 0x%08x\n", VAR_10);
        FUNC_6(VAR_14 != ((void*)0) && !FUNC_5(VAR_14, VAR_9),
           "IActiveScriptError_GetSourceLineText -- expected %s, got %s\n", FUNC_8(VAR_9), FUNC_8(VAR_14));
    } else {
        FUNC_6(VAR_10 == VAR_0, "IActiveScriptError_GetSourceLineText -- hres: expected S_OK, got 0x%08x\n", VAR_10);
        FUNC_6(VAR_14 == ((void*)0),
           "IActiveScriptError_GetSourceLineText -- expected NULL, got %s\n", FUNC_8(VAR_14));
    }
    FUNC_3(VAR_14);



    VAR_10 = FUNC_0(VAR_3, ((void*)0));
    FUNC_6(VAR_10 == VAR_1, "IActiveScriptError_GetExceptionInfo -- hres: expected E_POINTER, got 0x%08x\n", VAR_10);

    VAR_15.wCode = 0xdead;
    VAR_15.wReserved = 0xdead;
    VAR_15.bstrSource = (BSTR)0xdeadbeef;
    VAR_15.bstrDescription = (BSTR)0xdeadbeef;
    VAR_15.bstrHelpFile = (BSTR)0xdeadbeef;
    VAR_15.dwHelpContext = 0xdeadbeef;
    VAR_15.pvReserved = (void *)0xdeadbeef;
    VAR_15.pfnDeferredFillIn = (void *)0xdeadbeef;
    VAR_15.scode = 0xdeadbeef;

    VAR_10 = FUNC_0(VAR_3, &VAR_15);
    FUNC_6(VAR_10 == VAR_2, "IActiveScriptError_GetExceptionInfo -- hres: expected S_OK, got 0x%08x\n", VAR_10);

    FUNC_6(VAR_15.wCode == 0, "IActiveScriptError_GetExceptionInfo -- excep.wCode: expected 0, got 0x%08x\n", VAR_15.wCode);
    FUNC_6(VAR_15.wReserved == 0, "IActiveScriptError_GetExceptionInfo -- excep.wReserved: expected 0, got %d\n", VAR_15.wReserved);
    if (!FUNC_4())
        FUNC_7("Non-english UI (test with hardcoded strings)\n");
    else {
        FUNC_6(VAR_15.bstrSource != ((void*)0) && !FUNC_5(VAR_15.bstrSource, VAR_7),
           "IActiveScriptError_GetExceptionInfo -- excep.bstrSource is not valid: expected %s, got %s\n",
           FUNC_8(VAR_7), FUNC_8(VAR_15.bstrSource));
        FUNC_6(VAR_15.bstrDescription != ((void*)0) && !FUNC_5(VAR_15.bstrDescription, VAR_8),
           "IActiveScriptError_GetExceptionInfo -- excep.bstrDescription is not valid: got %s\n", FUNC_8(VAR_15.bstrDescription));
    }
    FUNC_6(VAR_15.bstrHelpFile == ((void*)0),
       "IActiveScriptError_GetExceptionInfo -- excep.bstrHelpFile: expected NULL, got %s\n", FUNC_8(VAR_15.bstrHelpFile));
    FUNC_6(VAR_15.dwHelpContext == 0, "IActiveScriptError_GetExceptionInfo -- excep.dwHelpContext: expected 0, got %d\n", VAR_15.dwHelpContext);
    FUNC_6(VAR_15.pvReserved == ((void*)0), "IActiveScriptError_GetExceptionInfo -- excep.pvReserved: expected NULL, got %p\n", *VAR_15.pvReserved);
    FUNC_6(VAR_15.pfnDeferredFillIn == ((void*)0), "IActiveScriptError_GetExceptionInfo -- excep.pfnDeferredFillIn: expected NULL, got %p\n", *VAR_15.pfnDeferredFillIn);
    FUNC_6(VAR_15.scode == VAR_4, "IActiveScriptError_GetExceptionInfo -- excep.scode: expected 0x%08x, got 0x%08x\n", VAR_4, VAR_15.scode);

    FUNC_3(VAR_15.bstrSource);
    FUNC_3(VAR_15.bstrDescription);
    FUNC_3(VAR_15.bstrHelpFile);
}
