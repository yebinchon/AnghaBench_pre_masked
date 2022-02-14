
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int ITfDocumentMgr ;
typedef int ITfContext ;
typedef int ITfCompartmentMgr ;
typedef int ITfCompartment ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int **) ;
 int FUNC_10 (int ,int **) ;
 int FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int *,int *) ;
 int VAR_4 ;
 int FUNC_14 (int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_15(void)
{
    ITfContext *VAR_6;
    ITfDocumentMgr *VAR_7;
    ITfCompartmentMgr *VAR_8;
    ITfCompartment *VAR_9;
    HRESULT VAR_10;

    FUNC_9(VAR_4, &VAR_7);
    FUNC_6(VAR_7,&VAR_6);


    VAR_10 = FUNC_10(VAR_4, &VAR_8);
    FUNC_14(FUNC_12(VAR_10),"GetGlobalCompartment failed\n");
    VAR_10 = FUNC_1(VAR_8, &VAR_2, &VAR_9);
    FUNC_14(FUNC_12(VAR_10),"GetCompartment failed\n");
    FUNC_3(VAR_9);
    FUNC_13(VAR_8,&VAR_2,((void*)0));
    FUNC_2(VAR_8);


    VAR_10 = FUNC_11(VAR_4, &VAR_3, (LPVOID*)&VAR_8);
    FUNC_14(FUNC_12(VAR_10),"ThreadMgr QI for IID_ITfCompartmentMgr failed\n");
    VAR_10 = FUNC_1(VAR_8, &VAR_0, &VAR_9);
    FUNC_14(FUNC_12(VAR_10),"GetCompartment failed\n");
    FUNC_13(VAR_8,&VAR_0,&VAR_2);
    FUNC_0(VAR_8,VAR_5,&VAR_0);
    FUNC_13(VAR_8,((void*)0),&VAR_0);
    FUNC_2(VAR_8);
    FUNC_3(VAR_9);


    VAR_10 = FUNC_7(VAR_7, &VAR_3, (LPVOID*)&VAR_8);
    FUNC_14(FUNC_12(VAR_10),"DocumentMgr QI for IID_ITfCompartmentMgr failed\n");

    VAR_10 = FUNC_1(VAR_8, &VAR_1, &VAR_9);
    FUNC_14(FUNC_12(VAR_10),"GetCompartment failed\n");
    FUNC_13(VAR_8,&VAR_1,&VAR_2);
    FUNC_2(VAR_8);


    VAR_10 = FUNC_4(VAR_6, &VAR_3, (LPVOID*)&VAR_8);
    FUNC_14(FUNC_12(VAR_10),"Context QI for IID_ITfCompartmentMgr failed\n");
    FUNC_13(VAR_8,((void*)0),&VAR_1);
    FUNC_2(VAR_8);

    FUNC_5(VAR_6);
    FUNC_8(VAR_7);
}
