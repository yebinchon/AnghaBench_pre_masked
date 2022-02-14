
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TfGuidAtom ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int,char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_7(void)
{
    GUID VAR_7,VAR_8;
    HRESULT VAR_9;
    TfGuidAtom VAR_10,VAR_11;
    BOOL VAR_12;

    FUNC_0(&VAR_7);






    VAR_9 = FUNC_3(VAR_5,&VAR_7,&VAR_10);
    FUNC_6(FUNC_5(VAR_9),"ITfCategoryMgr_RegisterGUID failed\n");
    VAR_9 = FUNC_3(VAR_5,&VAR_7,&VAR_11);
    FUNC_6(FUNC_5(VAR_9),"ITfCategoryMgr_RegisterGUID failed\n");
    FUNC_6(VAR_10 == VAR_11,"atoms do not match\n");
    VAR_9 = FUNC_1(VAR_5,VAR_11,((void*)0));
    FUNC_6(VAR_9==VAR_1,"ITfCategoryMgr_GetGUID should have failed\n");
    VAR_9 = FUNC_1(VAR_5,VAR_11,&VAR_8);
    FUNC_6(FUNC_5(VAR_9),"ITfCategoryMgr_GetGUID failed\n");
    FUNC_6(FUNC_4(&VAR_8,&VAR_7),"guids do not match\n");
    VAR_9 = FUNC_2(VAR_5,VAR_10,&VAR_7,((void*)0));
    FUNC_6(VAR_9==VAR_1,"ITfCategoryMgr_IsEqualTfGuidAtom should have failed\n");
    VAR_9 = FUNC_2(VAR_5,VAR_10,&VAR_7,&VAR_12);
    FUNC_6(FUNC_5(VAR_9),"ITfCategoryMgr_IsEqualTfGuidAtom failed\n");
    FUNC_6(VAR_12 == VAR_3,"Equal value invalid\n");


    VAR_9 = FUNC_2(VAR_5,VAR_6,&VAR_0,&VAR_12);
    FUNC_6(FUNC_5(VAR_9),"ITfCategoryMgr_IsEqualTfGuidAtom failed\n");
    FUNC_6(VAR_12 == VAR_3,"Equal value invalid\n");
    VAR_9 = FUNC_1(VAR_5,VAR_4,&VAR_8);
    FUNC_6(FUNC_5(VAR_9),"ITfCategoryMgr_GetGUID failed\n");
    FUNC_6(!FUNC_4(&VAR_8,&VAR_2),"guid should not be NULL\n");
}
