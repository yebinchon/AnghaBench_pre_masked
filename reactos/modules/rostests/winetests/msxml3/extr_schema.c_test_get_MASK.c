
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLDOMSchemaCollection2 ;
typedef int IXMLDOMNode ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int **) ;
 scalar_t__ VAR_3 ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (int,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
    IXMLDOMSchemaCollection2 *VAR_4;
    IXMLDOMNode *VAR_5;
    HRESULT VAR_6;

    VAR_4 = FUNC_4(60, &VAR_2);
    if (!VAR_4) return;

    VAR_6 = FUNC_2(VAR_4, ((void*)0), ((void*)0));
    FUNC_6(VAR_6 == VAR_0 || VAR_6 == VAR_1 , "got %08x\n", VAR_6);

    VAR_6 = FUNC_2(VAR_4, FUNC_3("uri"), &VAR_5);
    FUNC_0(VAR_6, VAR_0);

    FUNC_1(VAR_4);

    VAR_4 = FUNC_4(40, &VAR_2);
    if (!VAR_4) return;

    VAR_6 = FUNC_2(VAR_4, ((void*)0), ((void*)0));
    FUNC_0(VAR_6, VAR_1);

    VAR_6 = FUNC_2(VAR_4, FUNC_3("uri"), &VAR_5);
    FUNC_0(VAR_6, VAR_3);

    FUNC_1(VAR_4);
    FUNC_5();
}
