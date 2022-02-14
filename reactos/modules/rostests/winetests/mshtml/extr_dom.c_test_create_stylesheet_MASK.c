
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int elem_type_t ;
typedef int all_types2 ;
typedef int all_types ;
typedef int IUnknown ;
typedef int IHTMLStyleSheet ;
typedef int IHTMLStyleElement ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
 scalar_t__ FUNC_0 (int *,int *,int,int **) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *,int const*,int) ;
 int FUNC_10 (int *,int const,int,int **) ;

__attribute__((used)) static void FUNC_11(IHTMLDocument2 *VAR_2)
{
    IHTMLStyleSheet *VAR_3, *VAR_4;
    IHTMLStyleElement *VAR_5;
    IHTMLElement *VAR_6, *VAR_7;
    HRESULT VAR_8;

    static const elem_type_t VAR_9[] = {
        130,
        131,
        128,
        133,
        132
    };

    static const elem_type_t VAR_10[] = {
        130,
        131,
        128,
        129,
        133,
        132
    };

    FUNC_9(VAR_2, VAR_9, sizeof(VAR_9)/sizeof(*VAR_9));

    VAR_8 = FUNC_0(VAR_2, ((void*)0), -1, &VAR_3);
    FUNC_8(VAR_8 == VAR_1, "createStyleSheet failed: %08x\n", VAR_8);

    FUNC_9(VAR_2, VAR_10, sizeof(VAR_10)/sizeof(*VAR_10));

    VAR_6 = FUNC_6(VAR_2);

    FUNC_10((IUnknown*)VAR_6, 129, 1, &VAR_7);
    FUNC_2(VAR_6);

    VAR_8 = FUNC_1(VAR_7, &VAR_0, (void**)&VAR_5);
    FUNC_2(VAR_7);
    FUNC_8(VAR_8 == VAR_1, "Could not get IHTMLStyleElement iface: %08x\n", VAR_8);

    VAR_4 = ((void*)0);
    VAR_8 = FUNC_4(VAR_5, &VAR_4);
    FUNC_8(VAR_8 == VAR_1, "get_styleSheet failed: %08x\n", VAR_8);
    FUNC_8(VAR_4 != ((void*)0), "stylesheet2 == NULL\n");
    FUNC_8(FUNC_7((IUnknown*)VAR_3, (IUnknown*)VAR_4), "stylesheet != stylesheet2\n");

    FUNC_5(VAR_4);
    FUNC_5(VAR_3);

    FUNC_3(VAR_5);
}
