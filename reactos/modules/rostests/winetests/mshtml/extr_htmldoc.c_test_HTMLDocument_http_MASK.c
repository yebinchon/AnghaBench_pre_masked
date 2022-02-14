
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IUnknown ;
typedef int IMoniker ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_3 () ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 () ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int * VAR_14 ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *,scalar_t__) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,scalar_t__) ;
 int FUNC_23 (int *,char*) ;
 int FUNC_24 (int *,scalar_t__,char*,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (char*,char*) ;
 int * VAR_16 ;
 int FUNC_29 (char*) ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_30(BOOL VAR_18)
{
    IMoniker *VAR_19;
    IHTMLDocument2 *VAR_20;
    ULONG VAR_21;
    HRESULT VAR_22;

    FUNC_28("Testing HTMLDocument (http%s)...\n", VAR_18 ? " with IWebBrowserApp" : "");

    VAR_15 = VAR_18;

    if(!VAR_17 && FUNC_5()) {
        FUNC_29("IE running in Enhanced Security Configuration\n");
        return;
    }

    FUNC_4(VAR_4);
    VAR_11 = VAR_8;

    VAR_20 = FUNC_3();
    VAR_9 = (IUnknown*)VAR_20;

    VAR_22 = FUNC_0(((void*)0), VAR_10, &VAR_19);
    FUNC_6(VAR_22 == VAR_7, "CreateURLMoniker failed: %08x\n", VAR_22);

    FUNC_17(VAR_20);
    FUNC_9(VAR_20);
    FUNC_10((IUnknown*)VAR_20, ((void*)0), ((void*)0), VAR_3);
    FUNC_16(VAR_20, VAR_19);
    FUNC_14(VAR_20);
    FUNC_20(VAR_2);
    FUNC_19(VAR_20);
    FUNC_12(VAR_20, VAR_6);
    FUNC_13(VAR_20, VAR_5);
    FUNC_10((IUnknown*)VAR_20, VAR_19, ((void*)0), VAR_3);
    FUNC_26(VAR_20);
    FUNC_18((IUnknown*)VAR_20);

    VAR_13 = VAR_12 = "http://test.winehq.org/tests/winehq_snapshot/";
    if(VAR_15) {
        FUNC_24(VAR_20, VAR_3, "#test", "http://test.winehq.org/tests/winehq_snapshot/#test", VAR_3, VAR_8, 0);
        FUNC_23(VAR_20, "#hash_test");
        FUNC_26(VAR_20);
        FUNC_25(VAR_20);
    }
    FUNC_24(VAR_20, VAR_3, ((void*)0), "javascript:external%20&&undefined", VAR_8, VAR_3, 0);
    FUNC_24(VAR_20, VAR_3, ((void*)0), "about:blank", VAR_3, VAR_3, VAR_15 ? VAR_0 : 0);
    FUNC_24(VAR_20, VAR_8, ((void*)0), "about:replace", VAR_3, VAR_3, 0);
    if(VAR_15) {
        FUNC_21(VAR_20);
        FUNC_15(VAR_20);
        FUNC_24(VAR_20, VAR_3, ((void*)0), "about:blank", VAR_3, VAR_3, VAR_15 ? VAR_0 : 0);
    }

    VAR_14 = VAR_12;
    FUNC_22(VAR_20, VAR_8);
    if(!VAR_15)
        FUNC_22(VAR_20, VAR_3);
    if(VAR_15) {
        FUNC_24(VAR_20, VAR_3, ((void*)0), "http://test.winehq.org/tests/file.winetest", VAR_3, VAR_3, VAR_1);
        FUNC_27(VAR_20);
    }

    FUNC_11(VAR_20, VAR_8);
    FUNC_8(VAR_20, VAR_3);
    FUNC_12(VAR_20, VAR_6);
    FUNC_10((IUnknown*)VAR_20, ((void*)0), VAR_14, VAR_15);

    if(VAR_16)
        FUNC_2(VAR_16);
    VAR_16 = ((void*)0);

    FUNC_7(VAR_20);

    VAR_21 = FUNC_1(VAR_19);
    FUNC_6(!VAR_21, "ref=%d, expected 0\n", VAR_21);
}
