
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int elem_type_t ;
typedef int all_types ;
typedef int IUnknown ;
typedef void IHTMLLocation ;
typedef int IHTMLElementCollection ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;






 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *,char*,int ) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int,char*,...) ;
 int * FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int *,char*) ;
 int FUNC_14 (int *,int const*,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int *) ;

__attribute__((used)) static void FUNC_17(IHTMLDocument2 *VAR_4)
{
    IHTMLDocument2 *VAR_5, *VAR_6, *VAR_7;
    IHTMLElement *VAR_8, *VAR_9, *VAR_10;
    IHTMLElementCollection *VAR_11;
    IHTMLLocation *VAR_12;
    HRESULT VAR_13;

    static const elem_type_t VAR_14[] = {
        129,
        130,
        128,
        133,
        131,
        132
    };

    VAR_5 = FUNC_6(VAR_4);

    FUNC_13((IUnknown*)VAR_5, &VAR_0, "[object]");

    VAR_9 = (void*)0xdeadbeef;
    VAR_13 = FUNC_2(VAR_5, &VAR_9);
    FUNC_11(VAR_13 == VAR_2, "get_body failed: %08x\n", VAR_13);
    FUNC_11(!VAR_9, "body != NULL\n");

    VAR_12 = (void*)0xdeadbeef;
    VAR_13 = FUNC_3(VAR_5, &VAR_12);
    FUNC_11(VAR_13 == VAR_1, "get_location failed: %08x\n", VAR_13);
    FUNC_11(VAR_12 == (void*)0xdeadbeef, "location changed\n");

    VAR_10 = FUNC_12(VAR_4, "BR");
    FUNC_15(VAR_10, -1);
    FUNC_16((IUnknown*)VAR_5, (IUnknown*)VAR_10);
    FUNC_15(VAR_10, 0);
    FUNC_5(VAR_10);

    VAR_8 = FUNC_8(VAR_4, "divid", VAR_3);
    FUNC_16((IUnknown*)VAR_8, (IUnknown*)VAR_5);
    FUNC_5(VAR_8);

    VAR_13 = FUNC_1(VAR_4, &VAR_11);
    FUNC_11(VAR_13 == VAR_2, "get_all failed: %08x\n", VAR_13);
    FUNC_14((IUnknown*)VAR_11, VAR_14, sizeof(VAR_14)/sizeof(VAR_14[0]));
    FUNC_4(VAR_11);

    VAR_8 = FUNC_12(VAR_5, "div");
    VAR_6 = FUNC_9((IUnknown*)VAR_8);
    VAR_7 = FUNC_7(VAR_4);
    FUNC_11(FUNC_10((IUnknown*)VAR_6, (IUnknown*)VAR_7), "owner_doc != doc_node\n");
    FUNC_0(VAR_7);
    FUNC_0(VAR_6);
    FUNC_5(VAR_8);

    FUNC_0(VAR_5);
}
