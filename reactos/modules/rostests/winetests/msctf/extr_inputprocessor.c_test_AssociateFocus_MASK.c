
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITfDocumentMgr ;
typedef int * HWND ;
typedef int HRESULT ;


 int * FUNC_0 (char*,int *,int ,int ,int,int,int,int *,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *,int **) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int ,int *) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_10 ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (void**,char*) ;
 int FUNC_14 (void**,int *,int *,char*) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int * VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int * VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_15(void)
{
    ITfDocumentMgr *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25;
    HWND VAR_26, VAR_27, VAR_28;
    HRESULT VAR_29;

    FUNC_5(VAR_10, &VAR_25);
    VAR_14 = ((void*)0);
    VAR_19 = VAR_25;
    VAR_18 = VAR_4;
    VAR_12 = VAR_4;
    VAR_29 = FUNC_6(VAR_10,((void*)0));
    FUNC_11(FUNC_7(VAR_29),"ITfThreadMgr_SetFocus failed\n");
    FUNC_13(&VAR_18,"OnSetFocus");
    VAR_12 = VAR_6;
    FUNC_2(VAR_25);

    VAR_29 = FUNC_4(VAR_10,&VAR_21);
    FUNC_11(FUNC_7(VAR_29),"CreateDocumentMgr failed\n");

    VAR_29 = FUNC_4(VAR_10,&VAR_22);
    FUNC_11(FUNC_7(VAR_29),"CreateDocumentMgr failed\n");

    VAR_26 = FUNC_0("edit",((void*)0),VAR_9,0,0,200,60,((void*)0),((void*)0),((void*)0),((void*)0));
    FUNC_11(VAR_26!=((void*)0),"Unable to create window 1\n");
    VAR_27 = FUNC_0("edit",((void*)0),VAR_9,0,65,200,60,((void*)0),((void*)0),((void*)0),((void*)0));
    FUNC_11(VAR_27!=((void*)0),"Unable to create window 2\n");
    VAR_28 = FUNC_0("edit",((void*)0),VAR_9,0,130,200,60,((void*)0),((void*)0),((void*)0),((void*)0));
    FUNC_11(VAR_28!=((void*)0),"Unable to create window 3\n");

    FUNC_12();

    VAR_15 = VAR_4;
    VAR_17 = VAR_4;
    VAR_18 = VAR_4;
    VAR_19 = ((void*)0);
    VAR_14 = VAR_1;

    FUNC_9(VAR_26,VAR_7);
    VAR_18 = VAR_6;
    FUNC_8(VAR_26);
    FUNC_13(&VAR_15,"OnInitDocumentMgr");
    FUNC_13(&VAR_17,"OnPushContext");

    VAR_18 = VAR_4;
    VAR_13 = VAR_4;
    VAR_11 = VAR_4;
    FUNC_5(VAR_10, &VAR_19);
    VAR_14 = VAR_1;
    FUNC_12();
    FUNC_13(&VAR_18,"OnSetFocus");
    VAR_13 = VAR_6;
    VAR_11 = VAR_6;

    VAR_14 = VAR_21;
    VAR_19 = VAR_1;
    VAR_18 = VAR_4;
    VAR_20 = VAR_8;
    VAR_29 = FUNC_3(VAR_10,VAR_26,VAR_21,&VAR_23);
    FUNC_11(FUNC_7(VAR_29),"AssociateFocus failed\n");
    FUNC_13(&VAR_18,"OnSetFocus");
    VAR_20 = VAR_0;

    FUNC_12();

    FUNC_5(VAR_10, &VAR_24);
    FUNC_11(VAR_24 == VAR_21 || FUNC_10(VAR_24 == VAR_25 ), "Expected DocumentMgr not focused\n");
    FUNC_2(VAR_24);


    VAR_14 = VAR_21;
    VAR_19 = VAR_1;
    VAR_18 = VAR_4;
    FUNC_6(VAR_10, VAR_21);
    FUNC_13(&VAR_18, "OnSetFocus");

    VAR_29 = FUNC_3(VAR_10,VAR_27,VAR_22,&VAR_23);
    FUNC_11(FUNC_7(VAR_29),"AssociateFocus failed\n");
    FUNC_12();
    FUNC_5(VAR_10, &VAR_24);
    FUNC_11(VAR_24 == VAR_21, "Expected DocumentMgr not focused\n");
    FUNC_2(VAR_24);

    VAR_29 = FUNC_3(VAR_10,VAR_28,VAR_22,&VAR_23);
    FUNC_11(FUNC_7(VAR_29),"AssociateFocus failed\n");
    FUNC_12();
    FUNC_5(VAR_10, &VAR_24);
    FUNC_11(VAR_24 == VAR_21, "Expected DocumentMgr not focused\n");
    FUNC_2(VAR_24);

    VAR_14 = VAR_2;
    VAR_19 = VAR_2;
    VAR_18 = VAR_5;
    VAR_20 = VAR_8;
    FUNC_9(VAR_27,VAR_7);
    FUNC_8(VAR_27);
    FUNC_14(&VAR_18,VAR_21,VAR_22,"OnSetFocus");
    VAR_14 = VAR_1;
    VAR_19 = VAR_1;
    VAR_18 = VAR_3;
    VAR_20 = VAR_0;
    FUNC_12();

    FUNC_9(VAR_28,VAR_7);
    FUNC_8(VAR_28);
    FUNC_12();

    VAR_14 = VAR_2;
    VAR_19 = VAR_2;
    VAR_18 = VAR_5;
    FUNC_8(VAR_26);
    FUNC_12();
    FUNC_14(&VAR_18,VAR_22,VAR_21,"OnSetFocus");

    VAR_29 = FUNC_3(VAR_10,VAR_28,((void*)0),&VAR_23);
    FUNC_11(FUNC_7(VAR_29),"AssociateFocus failed\n");
    FUNC_11(VAR_23 == VAR_22, "incorrect old DocumentMgr returned\n");
    FUNC_2(VAR_23);

    VAR_14 = VAR_25;
    VAR_19 = VAR_21;
    VAR_18 = VAR_4;
    VAR_12 = VAR_3;
    FUNC_6(VAR_10,VAR_25);
    FUNC_13(&VAR_18,"OnSetFocus");

    VAR_14 = VAR_2;
    VAR_19 = VAR_2;
    VAR_18 = VAR_5;
    FUNC_8(VAR_28);
    FUNC_12();
    FUNC_14(&VAR_18,VAR_25,VAR_1,"OnSetFocus");

    VAR_29 = FUNC_3(VAR_10,VAR_27,((void*)0),&VAR_23);
    FUNC_11(FUNC_7(VAR_29),"AssociateFocus failed\n");
    FUNC_11(VAR_23 == VAR_22, "incorrect old DocumentMgr returned\n");
    FUNC_2(VAR_23);
    VAR_29 = FUNC_3(VAR_10,VAR_26,((void*)0),&VAR_23);
    FUNC_11(FUNC_7(VAR_29),"AssociateFocus failed\n");
    FUNC_11(VAR_23 == VAR_21, "incorrect old DocumentMgr returned\n");
    FUNC_2(VAR_23);

    VAR_18 = VAR_3;
    VAR_14 = VAR_1;
    VAR_19 = VAR_1;
    FUNC_8(VAR_27);
    FUNC_12();
    FUNC_8(VAR_26);
    FUNC_12();
    VAR_18 = VAR_6;

    FUNC_2(VAR_21);
    FUNC_2(VAR_22);

    VAR_14 = VAR_25;
    VAR_19 = VAR_1;
    VAR_18 = VAR_4;
    VAR_12 = VAR_3;
    FUNC_6(VAR_10,VAR_25);
    FUNC_13(&VAR_18,"OnSetFocus");

    VAR_18 = VAR_3;
    VAR_14 = VAR_1;
    VAR_19 = VAR_1;
    FUNC_1(VAR_26);
    FUNC_1(VAR_27);
    VAR_16 = VAR_4;
    VAR_18 = VAR_4;
    FUNC_5(VAR_10, &VAR_19);
    VAR_14 = ((void*)0);
    VAR_20 = VAR_8;
    FUNC_1(VAR_28);
    VAR_20 = VAR_0;
    FUNC_13(&VAR_18,"OnSetFocus");
    FUNC_13(&VAR_16,"OnPopContext");
}
