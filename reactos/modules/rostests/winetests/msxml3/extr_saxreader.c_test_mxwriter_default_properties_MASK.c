
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxwriter_props_t {int bom; int disable_escape; int indent; int omitdecl; int standalone; int encoding; scalar_t__ clsid; } ;
typedef int VARIANT_BOOL ;
typedef int IMXWriter ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int ,int *,void**) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,int*) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_3 ;
 int FUNC_13 (int,char*,int,int,int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(const struct mxwriter_props_t *VAR_4)
{
    int VAR_5 = 0;

    while (VAR_4->clsid)
    {
        IMXWriter *VAR_6;
        VARIANT_BOOL VAR_7;
        BSTR VAR_8;
        HRESULT VAR_9;

        if (!FUNC_11(VAR_4->clsid, VAR_3))
        {
            VAR_4++;
            VAR_5++;
            continue;
        }

        VAR_9 = FUNC_0(VAR_4->clsid, ((void*)0), VAR_0,
            &VAR_1, (void**)&VAR_6);
        FUNC_1(VAR_9, VAR_2);

        VAR_7 = !VAR_4->bom;
        VAR_9 = FUNC_3(VAR_6, &VAR_7);
        FUNC_1(VAR_9, VAR_2);
        FUNC_13(VAR_4->bom == VAR_7, "test %d: got BOM %d, expected %d\n", VAR_5, VAR_7, VAR_4->bom);

        VAR_7 = !VAR_4->disable_escape;
        VAR_9 = FUNC_4(VAR_6, &VAR_7);
        FUNC_1(VAR_9, VAR_2);
        FUNC_13(VAR_4->disable_escape == VAR_7, "test %d: got disable escape %d, expected %d\n", VAR_5, VAR_7,
           VAR_4->disable_escape);

        VAR_7 = !VAR_4->indent;
        VAR_9 = FUNC_6(VAR_6, &VAR_7);
        FUNC_1(VAR_9, VAR_2);
        FUNC_13(VAR_4->indent == VAR_7, "test %d: got indent %d, expected %d\n", VAR_5, VAR_7, VAR_4->indent);

        VAR_7 = !VAR_4->omitdecl;
        VAR_9 = FUNC_7(VAR_6, &VAR_7);
        FUNC_1(VAR_9, VAR_2);
        FUNC_13(VAR_4->omitdecl == VAR_7, "test %d: got omitdecl %d, expected %d\n", VAR_5, VAR_7, VAR_4->omitdecl);

        VAR_7 = !VAR_4->standalone;
        VAR_9 = FUNC_8(VAR_6, &VAR_7);
        FUNC_1(VAR_9, VAR_2);
        FUNC_13(VAR_4->standalone == VAR_7, "test %d: got standalone %d, expected %d\n", VAR_5, VAR_7, VAR_4->standalone);

        VAR_9 = FUNC_5(VAR_6, &VAR_8);
        FUNC_1(VAR_9, VAR_2);
        FUNC_13(!FUNC_12(VAR_8, FUNC_10(VAR_4->encoding)), "test %d: got encoding %s, expected %s\n",
            VAR_5, FUNC_14(VAR_8), VAR_4->encoding);
        FUNC_9(VAR_8);

        FUNC_2(VAR_6);

        VAR_4++;
        VAR_5++;
    }
}
