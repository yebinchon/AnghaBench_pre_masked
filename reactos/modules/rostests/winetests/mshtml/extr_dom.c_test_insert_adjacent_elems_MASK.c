
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const elem_type_t ;
typedef int IUnknown ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_4(IHTMLDocument2 *VAR_0, IHTMLElement *VAR_1)
{
    IHTMLElement *VAR_2, *VAR_3;

    static const elem_type_t VAR_4[] = {129, 129};
    static const elem_type_t VAR_5[] = {129, 128, 129};

    VAR_2 = FUNC_2(VAR_0, "BR");
    FUNC_1(VAR_1, "BeforeEnd", VAR_2);
    FUNC_0(VAR_2);

    FUNC_3((IUnknown*)VAR_1, VAR_4, 1);

    VAR_2 = FUNC_2(VAR_0, "BR");
    FUNC_1(VAR_1, "beforeend", VAR_2);

    FUNC_3((IUnknown*)VAR_1, VAR_4, 2);

    VAR_3 = FUNC_2(VAR_0, "DIV");
    FUNC_1(VAR_2, "beforebegin", VAR_3);
    FUNC_0(VAR_3);
    FUNC_0(VAR_2);

    FUNC_3((IUnknown*)VAR_1, VAR_5, 3);
}
