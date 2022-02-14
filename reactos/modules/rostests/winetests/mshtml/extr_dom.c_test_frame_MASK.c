
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int ITravelLogClient ;
typedef int IObjectIdentity ;
typedef int IHTMLWindow4 ;
typedef int IHTMLWindow2 ;
typedef int IHTMLFrameBase ;
typedef int IHTMLDocument2 ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int **) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 scalar_t__ FUNC_8 (int *,int **) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int **) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int,char*,scalar_t__) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int *,char const*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void FUNC_20(IDispatch *VAR_10, const char *VAR_11)
{
    IHTMLWindow2 *VAR_12, *VAR_13, *VAR_14;
    IHTMLDocument2 *VAR_15, *VAR_16;
    IHTMLWindow4 *VAR_17;
    IHTMLFrameBase *VAR_18;
    IObjectIdentity *VAR_19;
    ITravelLogClient *VAR_20;
    HRESULT VAR_21;

    VAR_21 = FUNC_1(VAR_10, &VAR_4, (void**)&VAR_17);
    FUNC_14(VAR_21 == VAR_8, "Could not get IHTMLWindow4 interface: 0x%08x\n", VAR_21);
    if(FUNC_0(VAR_21))
        return;

    VAR_21 = FUNC_10(VAR_17, &VAR_18);
    FUNC_14(VAR_21 == VAR_8, "IHTMLWindow4_get_frameElement failed: 0x%08x\n", VAR_21);
    FUNC_9(VAR_17);
    if(FUNC_0(VAR_21))
        return;

    FUNC_17((IUnknown*)VAR_18, VAR_0);
    FUNC_18((IUnknown*)VAR_18, VAR_2);
    FUNC_16((IUnknown*)VAR_18, VAR_11);
    FUNC_3(VAR_18);

    VAR_21 = FUNC_1(VAR_10, &VAR_3, (void**)&VAR_12);
    FUNC_14(VAR_21 == VAR_8, "Could not get IHTMLWindow2 interface: 0x%08x\n", VAR_21);
    if(FUNC_0(VAR_21))
        return;

    VAR_21 = FUNC_7(VAR_12, &VAR_13);
    FUNC_14(VAR_21 == VAR_8, "IHTMLWindow2_get_parent failed: 0x%08x\n", VAR_21);
    if(FUNC_0(VAR_21)){
        FUNC_5(VAR_12);
        return;
    }

    VAR_21 = FUNC_4(VAR_12, &VAR_5, (void**)&VAR_19);
    FUNC_14(VAR_21 == VAR_8, "Could not get IObjectIdentity interface: %08x\n", VAR_21);
    VAR_21 = FUNC_4(VAR_12, &VAR_6, (void**)&VAR_20);
    if(VAR_21 == VAR_1) {
        FUNC_19("IID_ITravelLogClient not available\n");
        VAR_20 = ((void*)0);
    }else {
        FUNC_14(VAR_21 == VAR_8, "Could not get ITravelLogClient interface: %08x\n", VAR_21);

        VAR_21 = FUNC_11(VAR_19, (IUnknown*)VAR_20);
        FUNC_14(VAR_21 == VAR_8, "IsEqualObject returned: 0x%08x\n", VAR_21);
        FUNC_13(VAR_20);
    }

    VAR_21 = FUNC_11(VAR_19, (IUnknown*)VAR_19);
    FUNC_14(VAR_21 == VAR_8, "IsEqualObject returned: 0x%08x\n", VAR_21);
    VAR_21 = FUNC_11(VAR_19, (IUnknown*)VAR_13);
    FUNC_14(VAR_21 == VAR_7, "IsEqualObject returned: 0x%08x\n", VAR_21);
    VAR_21 = FUNC_11(VAR_19, &VAR_9);
    FUNC_14(VAR_21 == VAR_1, "IsEqualObject returned: 0x%08x\n", VAR_21);

    FUNC_12(VAR_19);

    VAR_21 = FUNC_6(VAR_13, &VAR_15);
    FUNC_14(VAR_21 == VAR_8, "IHTMLWindow2_get_document failed: 0x%08x\n", VAR_21);
    FUNC_5(VAR_13);
    if(FUNC_0(VAR_21)){
        FUNC_5(VAR_12);
        return;
    }

    FUNC_15(VAR_15, "frameset test");
    FUNC_2(VAR_15);


    VAR_21 = FUNC_8(VAR_12, &VAR_14);
    FUNC_14(VAR_21 == VAR_8, "IHTMLWindow2_get_top failed: 0x%08x\n", VAR_21);
    FUNC_5(VAR_12);
    if(FUNC_0(VAR_21))
        return;

    VAR_21 = FUNC_6(VAR_14, &VAR_16);
    FUNC_14(VAR_21 == VAR_8, "IHTMLWindow2_get_document failed: 0x%08x\n", VAR_21);
    FUNC_5(VAR_14);
    if(FUNC_0(VAR_21))
        return;

    FUNC_15(VAR_16, "frameset test");
    FUNC_2(VAR_16);
}
