
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IOleObject ;
typedef int IOleDocumentView ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *,int *) ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int * VAR_17 ;

__attribute__((used)) static void FUNC_14(IHTMLDocument2 *VAR_18, DWORD VAR_19)
{
    IOleObject *VAR_20 = ((void*)0);
    IOleDocumentView *VAR_21;
    GUID VAR_22;
    HRESULT VAR_23;

    VAR_16 = VAR_14;

    if(VAR_17)
        FUNC_2(VAR_17);
    VAR_17 = ((void*)0);

    VAR_23 = FUNC_1(VAR_18, &VAR_5, (void**)&VAR_20);
    FUNC_9(VAR_23 == VAR_9, "QueryInterface(IID_IOleObject) failed: %08x\n", VAR_23);

    VAR_23 = FUNC_4(VAR_20, ((void*)0));
    FUNC_9(VAR_23 == VAR_2, "GetUserClassID returned: %08x, expected E_INVALIDARG\n", VAR_23);

    VAR_23 = FUNC_4(VAR_20, &VAR_22);
    FUNC_9(VAR_23 == VAR_9, "GetUserClassID failed: %08x\n", VAR_23);
    FUNC_9(FUNC_7(&VAR_22, &VAR_0), "guid != CLSID_HTMLDocument\n");

    FUNC_13((IUnknown*)VAR_18);

    FUNC_10(VAR_20, VAR_19);
    FUNC_12(VAR_18, VAR_3);
    FUNC_11(VAR_20);

    if(VAR_13 == VAR_1) {
        VAR_23 = FUNC_5(VAR_20, &VAR_4, (void **)&VAR_21);
        FUNC_9(VAR_23 == VAR_9, "IOleObject_QueryInterface failed with error 0x%08x\n", VAR_23);

        FUNC_8(VAR_8);
        FUNC_8(VAR_10);
        FUNC_8(VAR_11);
        FUNC_8(VAR_7);
        FUNC_8(VAR_6);
        VAR_15 = ((void*)0);

        VAR_23 = FUNC_3(VAR_21, VAR_12);
        FUNC_9(VAR_23 == VAR_9, "IOleDocumentView_UIActivate failed with error 0x%08x\n", VAR_23);

        FUNC_0(VAR_8);
        FUNC_0(VAR_10);
        FUNC_0(VAR_11);
        FUNC_0(VAR_7);
        FUNC_0(VAR_6);

        FUNC_2(VAR_21);
    }

    FUNC_6(VAR_20);

    FUNC_13((IUnknown*)VAR_18);
}
