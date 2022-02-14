
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IOleObject ;
typedef int IHTMLDocument2 ;
typedef int IAdviseSink ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int * FUNC_6 () ;
 int * VAR_15 ;
 int FUNC_7 (int ) ;
 int VAR_16 ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (char*) ;
 int * VAR_17 ;

__attribute__((used)) static void FUNC_27(void)
{
    IHTMLDocument2 *VAR_18;
    IOleObject *VAR_19;
    DWORD VAR_20;
    HRESULT VAR_21;

    FUNC_26("Testing HTMLDocument (IPersistStreamInit)...\n");

    FUNC_7(VAR_10);
    VAR_16 = VAR_14;

    VAR_18 = FUNC_6();
    VAR_15 = (IUnknown*)VAR_18;

    VAR_21 = FUNC_1(VAR_18, &VAR_9, (void**)&VAR_19);
    FUNC_8(VAR_21 == VAR_13, "Could not get IOleObject: %08x\n", VAR_21);

    VAR_21 = FUNC_3(VAR_19, (IAdviseSink*)&VAR_0, &VAR_20);
    FUNC_8(VAR_21 == VAR_13, "Advise failed: %08x\n", VAR_21);

    FUNC_25((IUnknown*)VAR_18);
    FUNC_17(VAR_18, VAR_12);
    FUNC_22(VAR_18);
    FUNC_13(VAR_18);
    FUNC_19(VAR_18, VAR_8);
    FUNC_11(VAR_19, VAR_3);
    FUNC_19(VAR_18, VAR_14);
    FUNC_14(VAR_19);
    FUNC_18(VAR_18, VAR_11);

    FUNC_15((IUnknown*)VAR_18, ((void*)0), ((void*)0), VAR_8);
    FUNC_20(VAR_18);
    FUNC_23(VAR_7|VAR_6);
    FUNC_18(VAR_18, VAR_11);

    FUNC_21();
    FUNC_16(VAR_18, VAR_14);
    FUNC_5(VAR_1);
    FUNC_12(VAR_18, VAR_14);
    FUNC_0(VAR_1);
    FUNC_24(VAR_18, VAR_8);
    FUNC_17(VAR_18, VAR_12);

    FUNC_10(VAR_18, &VAR_5);
    FUNC_11(VAR_19, VAR_4);
    FUNC_24(VAR_18, VAR_14);
    FUNC_11(VAR_19, VAR_4|VAR_2);
    FUNC_24(VAR_18, VAR_14);
    FUNC_10(VAR_18, ((void*)0));
    FUNC_11(VAR_19, VAR_4|VAR_2);

    FUNC_4(VAR_19);
    if(VAR_17) {
        FUNC_2(VAR_17);
        VAR_17 = ((void*)0);
    }

    FUNC_9(VAR_18);
}
