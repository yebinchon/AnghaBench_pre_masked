
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLStyle6 ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;


 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static void FUNC_10(IHTMLStyle6 *VAR_1)
{
    BSTR VAR_2;
    HRESULT VAR_3;

    VAR_2 = (void*)0xdeadbeef;
    VAR_3 = FUNC_1(VAR_1, &VAR_2);
    FUNC_6(VAR_3 == VAR_0, "get_outline failed: %08x\n", VAR_3);
    FUNC_6(VAR_2 && !*VAR_2, "outline = %s\n", FUNC_8(VAR_2));
    FUNC_4(VAR_2);

    VAR_2 = FUNC_5("1px");
    VAR_3 = FUNC_3(VAR_1, VAR_2);
    FUNC_6(VAR_3 == VAR_0, "put_outline failed: %08x\n", VAR_3);
    FUNC_4(VAR_2);

    VAR_2 = (void*)0xdeadbeef;
    VAR_3 = FUNC_1(VAR_1, &VAR_2);
    FUNC_6(VAR_3 == VAR_0, "get_outline failed: %08x\n", VAR_3);
    FUNC_6(FUNC_9(VAR_2, "1px"), "outline = %s\n", FUNC_8(VAR_2));
    FUNC_4(VAR_2);

    VAR_2 = (void*)0xdeadbeef;
    VAR_3 = FUNC_0(VAR_1, &VAR_2);
    FUNC_6(VAR_3 == VAR_0, "get_boxSizing failed: %08x\n", VAR_3);
    FUNC_6(!VAR_2, "boxSizing = %s\n", FUNC_8(VAR_2));
    FUNC_4(VAR_2);

    VAR_2 = FUNC_5("border-box");
    VAR_3 = FUNC_2(VAR_1, VAR_2);
    FUNC_6(VAR_3 == VAR_0, "put_boxSizing failed: %08x\n", VAR_3);
    FUNC_4(VAR_2);

    VAR_2 = ((void*)0);
    VAR_3 = FUNC_0(VAR_1, &VAR_2);
    FUNC_6(VAR_3 == VAR_0, "get_boxSizing failed: %08x\n", VAR_3);
    FUNC_6(!FUNC_7(VAR_2, "border-box"), "boxSizing = %s\n", FUNC_8(VAR_2));
    FUNC_4(VAR_2);
}
