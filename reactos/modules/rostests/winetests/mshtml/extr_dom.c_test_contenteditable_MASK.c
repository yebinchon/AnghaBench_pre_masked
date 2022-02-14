
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLElement3 ;
typedef char* HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,int ) ;
 char* VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int,char*,char*,...) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(IUnknown *VAR_1)
{
    IHTMLElement3 *VAR_2 = FUNC_5(VAR_1);
    HRESULT VAR_3;
    BSTR VAR_4, VAR_5;

    VAR_3 = FUNC_1(VAR_2, &VAR_5);
    FUNC_6(VAR_3 == VAR_0, "get_contentEditable failed: 0x%08x\n", VAR_3);

    VAR_4 = FUNC_4("true");
    VAR_3 = FUNC_2(VAR_2, VAR_4);
    FUNC_6(VAR_3 == VAR_0, "put_contentEditable(%s) failed: 0x%08x\n", FUNC_8(VAR_4), VAR_3);
    FUNC_3(VAR_4);
    VAR_3 = FUNC_1(VAR_2, &VAR_4);
    FUNC_6(VAR_3 == VAR_0, "get_contentEditable failed: 0x%08x\n", VAR_3);
    FUNC_6(!FUNC_7(VAR_4, "true"), "Got %s, expected %s\n", FUNC_8(VAR_4), "true");


    VAR_3 = FUNC_2(VAR_2, VAR_5);
    FUNC_6(VAR_3 == VAR_0, "put_contentEditable(%s) failed: 0x%08x\n", FUNC_8(VAR_5), VAR_3);
    FUNC_3(VAR_5);

    FUNC_0(VAR_2);
}
