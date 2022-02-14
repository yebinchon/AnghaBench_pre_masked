
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const elem_type_t ;
typedef int body_all_types ;
typedef int all_types ;
typedef int IUnknown ;
typedef int IHTMLElementCollection ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
 scalar_t__ FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void FUNC_8(IHTMLDocument2 *VAR_1)
{
    IHTMLElementCollection *VAR_2;
    IHTMLElement *VAR_3;
    HRESULT VAR_4;

    static const elem_type_t VAR_5[] = {
        130,
        131,
        128,
        129,
        133,
        129
    };

    static const elem_type_t VAR_6[] = {
        132,
        129
    };

    VAR_4 = FUNC_0(VAR_1, &VAR_2);
    FUNC_4(VAR_4 == VAR_0, "get_all failed: %08x\n", VAR_4);
    FUNC_6((IUnknown*)VAR_2, VAR_5, sizeof(VAR_5)/sizeof(VAR_5[0]));
    FUNC_1(VAR_2);

    VAR_3 = FUNC_3(VAR_1);
    FUNC_7((IUnknown*)VAR_3, "<div>test</div><noscript><a href=\"about:blank\">A</a></noscript>");
    FUNC_5((IUnknown*)VAR_3, VAR_6, sizeof(VAR_6)/sizeof(*VAR_6));
    FUNC_2(VAR_3);
}
