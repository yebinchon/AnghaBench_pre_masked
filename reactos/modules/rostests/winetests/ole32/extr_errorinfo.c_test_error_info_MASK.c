
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef int IUnknown ;
typedef int IErrorInfo ;
typedef int ICreateErrorInfo ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int **) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,int **) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,float*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,float*) ;
 scalar_t__ FUNC_8 (int *,float*) ;
 scalar_t__ FUNC_9 (int *,int *,void**) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_12 (int,int *) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (scalar_t__,char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    HRESULT VAR_5;
    ICreateErrorInfo *VAR_6;
    IErrorInfo *VAR_7;
    static WCHAR VAR_8[] = {'F','a','i','l','e','d',' ','S','p','r','o','c','k','e','t',0};
    static WCHAR VAR_9[] = {'s','p','r','o','c','k','e','t','.','h','l','p',0};
    static WCHAR VAR_10[] = {'s','p','r','o','c','k','e','t',0};
    IUnknown *VAR_11;

    VAR_5 = FUNC_0(&VAR_6);
    FUNC_14(VAR_5, "CreateErrorInfo");

    VAR_5 = FUNC_2(VAR_6, &VAR_3, (void**)&VAR_11);
    FUNC_14(VAR_5, "QI");
    FUNC_11(VAR_11);

    VAR_5 = FUNC_4(VAR_6, ((void*)0));
    FUNC_14(VAR_5, "ICreateErrorInfo_SetDescription");

    VAR_5 = FUNC_4(VAR_6, VAR_8);
    FUNC_14(VAR_5, "ICreateErrorInfo_SetDescription");

    VAR_5 = FUNC_5(VAR_6, &VAR_0);
    FUNC_14(VAR_5, "ICreateErrorInfo_SetGUID");

    VAR_5 = FUNC_6(VAR_6, 0xdeadbeef);
    FUNC_14(VAR_5, "ICreateErrorInfo_SetHelpContext");

    VAR_5 = FUNC_7(VAR_6, ((void*)0));
    FUNC_14(VAR_5, "ICreateErrorInfo_SetHelpFile");

    VAR_5 = FUNC_7(VAR_6, VAR_9);
    FUNC_14(VAR_5, "ICreateErrorInfo_SetHelpFile");

    VAR_5 = FUNC_8(VAR_6, ((void*)0));
    FUNC_14(VAR_5, "ICreateErrorInfo_SetSource");

    VAR_5 = FUNC_8(VAR_6, VAR_10);
    FUNC_14(VAR_5, "ICreateErrorInfo_SetSource");

    VAR_5 = FUNC_2(VAR_6, &VAR_2, (void **)&VAR_7);
    FUNC_14(VAR_5, "ICreateErrorInfo_QueryInterface");

    VAR_5 = FUNC_9(VAR_7, &VAR_3, (void**)&VAR_11);
    FUNC_14(VAR_5, "QI");
    FUNC_11(VAR_11);

    FUNC_3(VAR_6);

    VAR_5 = FUNC_12(0, VAR_7);
    FUNC_14(VAR_5, "SetErrorInfo");

    FUNC_10(VAR_7);
    VAR_7 = ((void*)0);

    VAR_5 = FUNC_1(0, &VAR_7);
    FUNC_14(VAR_5, "GetErrorInfo");

    FUNC_10(VAR_7);

    VAR_5 = FUNC_1(0, &VAR_7);
    FUNC_13(VAR_5 == VAR_4, "GetErrorInfo should have returned S_FALSE instead of 0x%08x\n", VAR_5);
    FUNC_13(!VAR_7, "pErrorInfo should be set to NULL\n");

    VAR_5 = FUNC_12(0, ((void*)0));
    FUNC_14(VAR_5, "SetErrorInfo");

    VAR_5 = FUNC_1(0xdeadbeef, &VAR_7);
    FUNC_13(VAR_5 == VAR_1, "GetErrorInfo should have returned E_INVALIDARG instead of 0x%08x\n", VAR_5);

    VAR_5 = FUNC_12(0xdeadbeef, ((void*)0));
    FUNC_13(VAR_5 == VAR_1, "SetErrorInfo should have returned E_INVALIDARG instead of 0x%08x\n", VAR_5);
}
