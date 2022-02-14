
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLFrameBase ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BSTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (scalar_t__,char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,char*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;

__attribute__((used)) static void FUNC_15(IUnknown *VAR_3)
{
    IHTMLFrameBase *VAR_4;
    BSTR VAR_5;
    HRESULT VAR_6;


    VAR_6 = FUNC_5(VAR_3, &VAR_1, (void**)&VAR_4);
    FUNC_8(VAR_6 == VAR_2, "Could not get IHTMLFrameBase interface: 0x%08x\n", VAR_6);

    VAR_6 = FUNC_2(VAR_4, &VAR_5);
    FUNC_8(VAR_6 == VAR_2, "IHTMLFrameBase_get_scrolling failed: 0x%08x\n", VAR_6);
    FUNC_8(!FUNC_11(VAR_5, "auto"), "get_scrolling should have given 'auto', gave: %s\n", FUNC_14(VAR_5));
    FUNC_6(VAR_5);

    VAR_5 = FUNC_7("no");
    VAR_6 = FUNC_4(VAR_4, VAR_5);
    FUNC_8(VAR_6 == VAR_2, "IHTMLFrameBase_put_scrolling failed: 0x%08x\n", VAR_6);
    FUNC_6(VAR_5);

    VAR_6 = FUNC_2(VAR_4, &VAR_5);
    FUNC_8(VAR_6 == VAR_2, "IHTMLFrameBase_get_scrolling failed: 0x%08x\n", VAR_6);
    FUNC_8(!FUNC_11(VAR_5, "no"), "get_scrolling should have given 'no', gave: %s\n", FUNC_14(VAR_5));
    FUNC_6(VAR_5);

    VAR_5 = FUNC_7("junk");
    VAR_6 = FUNC_4(VAR_4, VAR_5);
    FUNC_8(VAR_6 == VAR_0, "IHTMLFrameBase_put_scrolling should have failed "
            "with E_INVALIDARG, instead: 0x%08x\n", VAR_6);
    FUNC_6(VAR_5);

    VAR_6 = FUNC_2(VAR_4, &VAR_5);
    FUNC_8(VAR_6 == VAR_2, "IHTMLFrameBase_get_scrolling failed: 0x%08x\n", VAR_6);
    FUNC_8(!FUNC_11(VAR_5, "no"), "get_scrolling should have given 'no', gave: %s\n", FUNC_14(VAR_5));
    FUNC_6(VAR_5);

    VAR_6 = FUNC_1(VAR_4, &VAR_5);
    FUNC_8(VAR_6 == VAR_2, "get_frameBorder failed: %08x\n", VAR_6);
    FUNC_8(!VAR_5, "frameBorder = %s\n", FUNC_14(VAR_5));

    VAR_5 = FUNC_7("1");
    VAR_6 = FUNC_3(VAR_4, VAR_5);
    FUNC_8(VAR_6 == VAR_2, "put_frameBorder failed: %08x\n", VAR_6);
    FUNC_6(VAR_5);

    VAR_6 = FUNC_1(VAR_4, &VAR_5);
    FUNC_8(VAR_6 == VAR_2, "get_frameBorder failed: %08x\n", VAR_6);
    FUNC_8(!FUNC_11(VAR_5, "1"), "frameBorder = %s, expected \"1\"\n", FUNC_14(VAR_5));

    FUNC_12(VAR_4, ((void*)0));
    FUNC_9(VAR_4, "1px");
    FUNC_12(VAR_4, "1");

    FUNC_13(VAR_4, ((void*)0));
    FUNC_10(VAR_4, "2px");
    FUNC_13(VAR_4, "2");

    FUNC_0(VAR_4);
}
