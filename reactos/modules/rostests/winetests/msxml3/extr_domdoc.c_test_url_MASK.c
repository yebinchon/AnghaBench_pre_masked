
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLDOMDocument ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void)
{
    IXMLDOMDocument *VAR_3;
    HRESULT VAR_4;
    BSTR VAR_5;

    VAR_3 = FUNC_2(&VAR_1);

    VAR_4 = FUNC_1(VAR_3, ((void*)0));
    FUNC_3(VAR_4 == VAR_0, "got 0x%08x\n", VAR_4);

    VAR_5 = (void *)0xdeadbeef;
    VAR_4 = FUNC_1(VAR_3, &VAR_5);
    FUNC_3(VAR_4 == VAR_2, "got 0x%08x\n", VAR_4);
    FUNC_3(VAR_5 == ((void*)0), "got %s\n", FUNC_4(VAR_5));

    FUNC_0(VAR_3);
}
