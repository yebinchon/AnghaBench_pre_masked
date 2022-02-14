
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLDocument2 ;
typedef int IHTMLDOMNode ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(IHTMLDocument2 *VAR_1)
{
    IHTMLDocument2 *VAR_2;
    IHTMLDOMNode *VAR_3;
    int VAR_4;

    VAR_2 = FUNC_2(VAR_1);
    VAR_3 = FUNC_3((IUnknown*)VAR_2);
    FUNC_1(VAR_2);

    VAR_4 = FUNC_4((IUnknown*)VAR_3);
    FUNC_5(VAR_4 == 8, "type = %d\n", VAR_4);

    FUNC_6((IUnknown*)VAR_3, "<!DOCTYPE html>");
    FUNC_7((IUnknown*)VAR_3, VAR_0);
    FUNC_0(VAR_3);
}
