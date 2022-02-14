
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int outer_types ;
typedef int elem_type_t ;
typedef int IUnknown ;
typedef int IHTMLFormElement ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;




 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int const*,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (int *,char*) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,char*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,char*) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *,char*) ;
 int FUNC_27 (int *,int ,char*) ;
 int FUNC_28 (int *,int ,char*) ;
 int FUNC_29 (int *,char*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *,char*) ;
 int FUNC_33 (int *,char*) ;
 int FUNC_34 (int *,char*) ;
 int FUNC_35 (int *,char*) ;
 int FUNC_36 (int *,char*) ;
 int FUNC_37 (int *,int *) ;
 int FUNC_38 (int *,int ) ;
 int FUNC_39 (int *,char*) ;
 int FUNC_40 (int *,char*) ;
 int FUNC_41 (int *,char*) ;
 int FUNC_42 (int *,int *) ;
 int FUNC_43 (int *,char*) ;
 int FUNC_44 (int *,int *) ;
 int FUNC_45 (int *,int *) ;
 int FUNC_46 (int *,char*) ;
 int FUNC_47 (int *,char*) ;
 int FUNC_48 (int *,int ) ;
 int FUNC_49 (int *,char*) ;
 int FUNC_50 (int *,int ) ;
 int FUNC_51 (int *) ;
 int FUNC_52 (int *,int *) ;

__attribute__((used)) static void FUNC_53(IHTMLDocument2 *VAR_5)
{
    IHTMLElement *VAR_6, *VAR_7, *VAR_8;

    static const elem_type_t VAR_9[] = {
        128,
        129
    };

    VAR_8 = FUNC_2(VAR_5, "divid");

    VAR_6 = FUNC_3(VAR_5, "linkid", VAR_2);
    if(VAR_6) {
        FUNC_38(VAR_6, VAR_3);
        FUNC_41(VAR_6, "stylesheet");
        FUNC_42(VAR_6, ((void*)0));
        FUNC_43(VAR_6, "text/css");
        FUNC_39(VAR_6, "about:blank");
        FUNC_40(VAR_6, "all");
        FUNC_6(VAR_6, VAR_4);
        FUNC_8(VAR_6, "prev");
        FUNC_9(VAR_6, "next");
        FUNC_10(VAR_6, "text/plain");
        FUNC_7(VAR_6, "about:prev");
        FUNC_0(VAR_6);
    }

    FUNC_17((IUnknown*)VAR_8, "<div id=\"innerid\"></div>");
    VAR_7 = FUNC_2(VAR_5, "innerid");
    FUNC_11(VAR_7 != ((void*)0), "elem2 == NULL\n");
    FUNC_18((IUnknown*)VAR_7, "<br><a href=\"about:blank\" id=\"aid\">a</a>");
    FUNC_14((IUnknown*)VAR_8, VAR_9, sizeof(VAR_9)/sizeof(*VAR_9));
    FUNC_0(VAR_7);

    VAR_7 = FUNC_2(VAR_5, "aid");
    FUNC_11(VAR_7 != ((void*)0), "elem2 == NULL\n");
    FUNC_18((IUnknown*)VAR_7, "");
    FUNC_14((IUnknown*)VAR_8, VAR_9, 1);
    FUNC_0(VAR_7);

    FUNC_17((IUnknown*)VAR_8, "<textarea id=\"ta\"></textarea>");
    VAR_6 = FUNC_3(VAR_5, "ta", VAR_2);
    if(VAR_6) {
        IHTMLFormElement *VAR_10;

        FUNC_52((IUnknown*)VAR_6, ((void*)0));
        FUNC_49((IUnknown*)VAR_6, "test");
        FUNC_46((IUnknown*)VAR_6, ((void*)0));
        FUNC_47((IUnknown*)VAR_6, "defval text");
        FUNC_49((IUnknown*)VAR_6, "test");
        FUNC_50((IUnknown*)VAR_6, VAR_3);
        FUNC_48((IUnknown*)VAR_6, VAR_4);
        FUNC_48((IUnknown*)VAR_6, VAR_3);
        FUNC_51((IUnknown*)VAR_6);

        VAR_10 = FUNC_4((IUnknown*)VAR_6);
        FUNC_11(!VAR_10, "form = %p\n", VAR_10);

        FUNC_15(VAR_6, VAR_4);

        FUNC_0(VAR_6);
    }

    FUNC_17((IUnknown*)VAR_8, "<textarea id=\"ta\">default text</textarea>");
    VAR_6 = FUNC_3(VAR_5, "ta", VAR_2);
    if(VAR_6) {
        FUNC_46((IUnknown*)VAR_6, "default text");
        FUNC_0(VAR_6);
    }

    FUNC_17((IUnknown*)VAR_8, "<form id=\"fid\"><textarea id=\"ta\"></textarea></form>");
    VAR_6 = FUNC_3(VAR_5, "ta", VAR_2);
    if(VAR_6) {
        IHTMLFormElement *VAR_11;

        VAR_7 = FUNC_3(VAR_5, "fid", VAR_2);
        FUNC_11(VAR_7 != ((void*)0), "elem2 == NULL\n");

        VAR_11 = FUNC_4((IUnknown*)VAR_6);
        FUNC_11(VAR_11 != ((void*)0), "form = NULL\n");
        FUNC_11(FUNC_5((IUnknown*)VAR_11, (IUnknown*)VAR_7), "form != elem2\n");

        FUNC_1(VAR_11);
        FUNC_0(VAR_7);
        FUNC_0(VAR_6);
    }

    FUNC_17((IUnknown*)VAR_8,
            "<input value=\"val\" id =\"inputid\"  />");
    VAR_6 = FUNC_3(VAR_5, "inputid", VAR_2);
    if(VAR_6) {
        FUNC_32((IUnknown*)VAR_6, "val");
        FUNC_35((IUnknown*)VAR_6, "test");
        FUNC_34((IUnknown*)VAR_6, "new val");
        FUNC_36((IUnknown*)VAR_6, "test");
        FUNC_0(VAR_6);
    }

    FUNC_17((IUnknown*)VAR_8, "");
    FUNC_37(VAR_5, VAR_8);

    FUNC_17((IUnknown*)VAR_8,
            "<form id=\"form\"><input type=\"button\" /><div><input type=\"text\" id=\"inputid\"/></div></textarea>");
    VAR_6 = FUNC_3(VAR_5, "form", VAR_2);
    if(VAR_6) {
        FUNC_23((IUnknown*)VAR_6, 2);
        FUNC_22(VAR_6);
        FUNC_19((IUnknown*)VAR_6, ((void*)0));
        FUNC_26((IUnknown*)VAR_6, "about:blank");
        FUNC_24((IUnknown*)VAR_6, "get");
        FUNC_28((IUnknown*)VAR_6, VAR_1, "post");
        FUNC_28((IUnknown*)VAR_6, VAR_0, "put");
        FUNC_24((IUnknown*)VAR_6, "post");
        FUNC_25((IUnknown*)VAR_6, ((void*)0));
        FUNC_29((IUnknown*)VAR_6, "Name");
        FUNC_21((IUnknown*)VAR_6, "application/x-www-form-urlencoded");
        FUNC_27((IUnknown*)VAR_6, VAR_1, "text/plain");
        FUNC_27((IUnknown*)VAR_6, VAR_1, "multipart/form-data");
        FUNC_27((IUnknown*)VAR_6, VAR_0, "image/png");
        FUNC_21((IUnknown*)VAR_6, "multipart/form-data");
        FUNC_20((IUnknown*)VAR_6);
        FUNC_30((IUnknown*)VAR_6);
        FUNC_31((IUnknown*)VAR_6);
        FUNC_0(VAR_6);

        VAR_6 = FUNC_3(VAR_5, "inputid", VAR_2);
        FUNC_33((IUnknown*)VAR_6, "form");
        FUNC_0(VAR_6);
    }

    FUNC_17((IUnknown*)VAR_8,
            "<form id=\"form\" name=\"form_name\"><select id=\"sform\"><option id=\"oform\"></option></select></form>");
    VAR_6 = FUNC_3(VAR_5, "sform", VAR_2);
    VAR_7 = FUNC_3(VAR_5, "form", VAR_2);
    if(VAR_6 && VAR_7) {
        FUNC_45((IUnknown*)VAR_6, (IUnknown*)VAR_7);
        FUNC_0(VAR_6);

        VAR_6 = FUNC_3(VAR_5, "oform", VAR_2);
        if(VAR_6) {
            FUNC_44((IUnknown*)VAR_6, (IUnknown*)VAR_7);
            FUNC_0(VAR_6);
        }
        FUNC_0(VAR_7);
    }

    FUNC_12(VAR_8);
    FUNC_13(VAR_5, VAR_8);
    FUNC_16(VAR_5);

    FUNC_0(VAR_8);
}
