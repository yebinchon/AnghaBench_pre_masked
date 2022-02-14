
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_2 () ;
 int VAR_15 ;
 int * VAR_16 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int *,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 () ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,int) ;
 int FUNC_29 (int *,int ) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (char*,char*,char*) ;
 int * VAR_18 ;

__attribute__((used)) static void FUNC_32(BOOL VAR_19, BOOL VAR_20)
{
    IHTMLDocument2 *VAR_21;

    FUNC_31("Testing HTMLDocument (%s, %s)...\n", (VAR_19 ? "load" : "no load"),
            (VAR_17 ? "mime" : "no mime"));

    FUNC_3(VAR_19 ? VAR_8 : VAR_9);
    VAR_17 = VAR_20;

    VAR_21 = FUNC_2();
    VAR_16 = (IUnknown*)VAR_21;

    FUNC_22(VAR_21);
    FUNC_8(VAR_21);
    FUNC_15(VAR_21, VAR_12);
    FUNC_16(VAR_21, VAR_11);
    FUNC_29(VAR_21, VAR_7);
    FUNC_24(VAR_21);
    FUNC_11(VAR_21);
    FUNC_12((IUnknown*)VAR_21, ((void*)0), ((void*)0), VAR_7);
    FUNC_21(VAR_21, &VAR_10);
    if(!VAR_19)
        FUNC_20(VAR_21);

    FUNC_7(VAR_21, VAR_0);

    if(VAR_19) {
        FUNC_6(VAR_21, &VAR_4);
        FUNC_26(VAR_5|VAR_6);
        FUNC_12((IUnknown*)VAR_21, &VAR_10, ((void*)0), VAR_7);
        FUNC_27(VAR_21);
    }

    FUNC_16(VAR_21, VAR_11);
    FUNC_18(VAR_21);
    FUNC_17(VAR_21);
    FUNC_28(VAR_21, 200);
    FUNC_28(VAR_21, 100);
    FUNC_19(VAR_21);
    FUNC_25(VAR_21, VAR_13);
    FUNC_29(VAR_21, VAR_13);
    FUNC_30(VAR_21);

    FUNC_23();
    FUNC_17(VAR_21);
    FUNC_25(VAR_21, VAR_13);
    FUNC_14(VAR_21, VAR_13);




    FUNC_25(VAR_21, VAR_7);
    FUNC_13();
    FUNC_14(VAR_21, VAR_7);
    FUNC_10();
    FUNC_9(VAR_21, VAR_7);


    FUNC_7(VAR_21, VAR_1);
    FUNC_25(VAR_21, VAR_13);
    FUNC_17(VAR_21);
    FUNC_23();
    FUNC_14(VAR_21, VAR_13);
    FUNC_9(VAR_21, VAR_7);


    VAR_14 = VAR_3;
    FUNC_7(VAR_21, VAR_1);
    FUNC_25(VAR_21, VAR_13);

    FUNC_29(VAR_21, VAR_13);
    FUNC_6(VAR_21, ((void*)0));
    FUNC_29(VAR_21, VAR_7);

    FUNC_23();
    FUNC_14(VAR_21, VAR_13);
    FUNC_10();
    FUNC_10();
    FUNC_9(VAR_21, VAR_13);
    FUNC_20(VAR_21);
    FUNC_12((IUnknown*)VAR_21, VAR_19 ? &VAR_10 : ((void*)0), ((void*)0), VAR_7);

    if(!VAR_19) {

        VAR_14 = VAR_2;
        FUNC_7(VAR_21, 0);
        FUNC_25(VAR_21, VAR_13);
        FUNC_17(VAR_21);
        FUNC_23();
        FUNC_14(VAR_21, VAR_13);
        FUNC_9(VAR_21, VAR_7);
        VAR_14 = VAR_3;
    }

    if(VAR_18)
        FUNC_0(VAR_18);
    VAR_18 = ((void*)0);

    FUNC_4(FUNC_1(VAR_15), "hwnd is destroyed\n");
    FUNC_5(VAR_21);
    FUNC_4(!FUNC_1(VAR_15), "hwnd is not destroyed\n");
}
