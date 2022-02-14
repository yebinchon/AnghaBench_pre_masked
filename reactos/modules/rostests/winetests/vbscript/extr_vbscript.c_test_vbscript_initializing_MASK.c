
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_8 ;
 int * FUNC_8 () ;
 int FUNC_9 (int,char*,scalar_t__) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static void FUNC_11(void)
{
    IActiveScriptParse *VAR_9;
    IActiveScript *VAR_10;
    ULONG VAR_11;
    HRESULT VAR_12;

    VAR_10 = FUNC_8();

    VAR_12 = FUNC_4(VAR_10, &VAR_3, (void**)&VAR_9);
    FUNC_9(VAR_12 == VAR_8, "Could not get IActiveScriptParse: %08x\n", VAR_12);

    FUNC_10(VAR_10, VAR_7);

    FUNC_7(VAR_2);
    VAR_12 = FUNC_6(VAR_10, &VAR_0);
    FUNC_9(VAR_12 == VAR_8, "SetScriptSite failed: %08x\n", VAR_12);
    FUNC_0(VAR_2);

    FUNC_7(VAR_5);
    VAR_12 = FUNC_1(VAR_9);
    FUNC_9(VAR_12 == VAR_8, "InitNew failed: %08x\n", VAR_12);
    FUNC_0(VAR_5);

    VAR_12 = FUNC_6(VAR_10, &VAR_0);
    FUNC_9(VAR_12 == VAR_1, "SetScriptSite failed: %08x, expected E_UNEXPECTED\n", VAR_12);

    FUNC_7(VAR_4);
    VAR_12 = FUNC_3(VAR_10);
    FUNC_9(VAR_12 == VAR_8, "Close failed: %08x\n", VAR_12);
    FUNC_0(VAR_4);

    FUNC_10(VAR_10, VAR_6);

    FUNC_2(VAR_9);

    VAR_11 = FUNC_5(VAR_10);
    FUNC_9(!VAR_11, "ref = %d\n", VAR_11);
}
