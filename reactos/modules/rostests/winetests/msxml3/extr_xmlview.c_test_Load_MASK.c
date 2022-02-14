
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int MSG ;
typedef int IUnknown ;
typedef int IPersistMoniker ;
typedef int IMoniker ;
typedef int IHTMLElement ;
typedef int IConnectionPointContainer ;
typedef int IConnectionPoint ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,int,int *,void**) ;
 scalar_t__ FUNC_2 (int ,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,int *,int ,int ) ;
 int FUNC_6 (int *,char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *,int **) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int **) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int ,int *,int *,int ) ;
 scalar_t__ FUNC_18 (int *,int *,void**) ;
 int FUNC_19 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_20 (int ) ;
 int VAR_10 ;
 int FUNC_21 (int *) ;
 int * VAR_11 ;
 int FUNC_22 (int ,int ) ;
 int VAR_12 ;
 int FUNC_23 (char*,char const*) ;
 int FUNC_24 (char*,char const*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_27 (int *,char*,int **) ;
 int FUNC_28 (char*) ;
 scalar_t__ FUNC_29 (int ) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_30(void)
{
    static const WCHAR VAR_14[] = {'/','x','m','l','/','x','m','l','v','i','e','w','.','x','m','l',0};
    static const WCHAR VAR_15[] = {'r','e','s',':','/','/',0};

    WCHAR VAR_16[1024];
    IPersistMoniker *VAR_17;
    IConnectionPointContainer *VAR_18;
    IConnectionPoint *VAR_19;
    IMoniker *VAR_20;
    IBindCtx *VAR_21;
    IHTMLElement *VAR_22;
    HRESULT VAR_23;
    MSG VAR_24;
    BSTR VAR_25;

    FUNC_24(VAR_16, VAR_15);
    FUNC_6(((void*)0), VAR_16+FUNC_25(VAR_16), FUNC_0(VAR_16)-FUNC_0(VAR_15));
    FUNC_23(VAR_16, VAR_14);

    if(!&FUNC_27) {
        FUNC_28("CreateURLMoniker not available\n");
        return;
    }

    VAR_23 = FUNC_1(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_8, (void**)&VAR_17);
    if(FUNC_4(VAR_23)) {
        FUNC_28("Failed to create XMLView instance\n");
        return;
    }
    FUNC_26(VAR_23 == VAR_9, "CoCreateInstance returned %x, expected S_OK\n", VAR_23);

    VAR_23 = FUNC_18(VAR_17, &VAR_7, (void**)&VAR_11);
    FUNC_26(VAR_23 == VAR_9, "QueryInterface(HTMLDocument2) returned %x, expected S_OK\n", VAR_23);
    VAR_23 = FUNC_18(VAR_17, &VAR_5, (void**)&VAR_18);
    FUNC_26(VAR_23 == VAR_9, "QueryInterface(IConnectionPointContainer) returned %x, expected S_OK\n", VAR_23);
    VAR_23 = FUNC_8(VAR_18, &VAR_6, &VAR_19);
    FUNC_26(VAR_23 == VAR_9, "FindConnectionPoint returned %x, expected S_OK\n", VAR_23);
    VAR_23 = FUNC_10(VAR_19, (IUnknown*)&VAR_4, ((void*)0));
    FUNC_26(VAR_23 == VAR_9, "Advise returned %x, expected S_OK\n", VAR_23);
    FUNC_11(VAR_19);
    FUNC_9(VAR_18);

    VAR_23 = FUNC_2(0, &VAR_21);
    FUNC_26(VAR_23 == VAR_9, "CreateBindCtx returned %x, expected S_OK\n", VAR_23);
    VAR_23 = FUNC_27(((void*)0), VAR_16, &VAR_20);
    FUNC_26(VAR_23 == VAR_9, "CreateUrlMoniker returned %x, expected S_OK\n", VAR_23);
    VAR_12 = VAR_3;
    VAR_23 = FUNC_17(VAR_17, VAR_10, VAR_20, VAR_21, 0);
    FUNC_26(VAR_23 == VAR_9, "Load returned %x, expected S_OK\n", VAR_23);
    FUNC_7(VAR_21);
    FUNC_16(VAR_20);

    while(!VAR_12 && FUNC_5(&VAR_24, ((void*)0), 0, 0)) {
        FUNC_21(&VAR_24);
        FUNC_3(&VAR_24);
    }

    VAR_23 = FUNC_13(VAR_11, &VAR_22);
    FUNC_26(VAR_23 == VAR_9, "get_body returned %x, expected S_OK\n", VAR_23);
    VAR_23 = FUNC_15(VAR_22, &VAR_25);
    FUNC_26(VAR_23 == VAR_9, "get_outerHTML returned %x, expected S_OK\n", VAR_23);
    FUNC_26(!FUNC_22(VAR_25, VAR_13), "Incorrect HTML source: %s\n", FUNC_29(VAR_25));
    FUNC_14(VAR_22);
    FUNC_20(VAR_25);

    FUNC_12(VAR_11);
    VAR_11 = ((void*)0);
    FUNC_19(VAR_17);
}
