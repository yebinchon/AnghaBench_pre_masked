
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLLabelElement ;
typedef int IHTMLElement ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(IHTMLElement *VAR_1)
{
    IHTMLLabelElement *VAR_2;
    BSTR VAR_3;
    HRESULT VAR_4;

    VAR_2 = FUNC_5((IUnknown*)VAR_1);

    VAR_3 = ((void*)0);
    VAR_4 = FUNC_1(VAR_2, &VAR_3);
    FUNC_6(VAR_4 == VAR_0, "get_htmlFor failed: %08x\n", VAR_4);
    FUNC_6(!FUNC_7(VAR_3, "in"), "htmlFor = %s\n", FUNC_8(VAR_3));
    FUNC_3(VAR_3);

    VAR_3 = FUNC_4("");
    VAR_4 = FUNC_2(VAR_2, VAR_3);
    FUNC_6(VAR_4 == VAR_0, "put_htmlFor failed: %08x\n", VAR_4);
    FUNC_3(VAR_3);

    VAR_3 = (void*)0xdeadbeef;
    VAR_4 = FUNC_1(VAR_2, &VAR_3);
    FUNC_6(VAR_4 == VAR_0, "get_htmlFor failed: %08x\n", VAR_4);
    FUNC_6(!FUNC_7(VAR_3, ""), "htmlFor = %s\n", FUNC_8(VAR_3));

    VAR_3 = FUNC_4("abc");
    VAR_4 = FUNC_2(VAR_2, VAR_3);
    FUNC_6(VAR_4 == VAR_0, "put_htmlFor failed: %08x\n", VAR_4);
    FUNC_3(VAR_3);

    VAR_3 = ((void*)0);
    VAR_4 = FUNC_1(VAR_2, &VAR_3);
    FUNC_6(VAR_4 == VAR_0, "get_htmlFor failed: %08x\n", VAR_4);
    FUNC_6(!FUNC_7(VAR_3, "abc"), "htmlFor = %s\n", FUNC_8(VAR_3));
    FUNC_3(VAR_3);

    FUNC_0(VAR_2);
}
