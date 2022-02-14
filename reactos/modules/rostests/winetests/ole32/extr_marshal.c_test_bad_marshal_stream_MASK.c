
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,...) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,...) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,scalar_t__ (*) (int *)) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_8;
    IStream *VAR_9 = ((void*)0);

    VAR_8 = FUNC_2(((void*)0), VAR_5, &VAR_9);
    FUNC_7(VAR_8, FUNC_2);
    VAR_8 = FUNC_0(VAR_9, &VAR_0, (IUnknown*)&VAR_6, VAR_1, ((void*)0), VAR_2);
    FUNC_7(VAR_8, FUNC_0);

    FUNC_6();


    VAR_8 = FUNC_1(VAR_9);
    FUNC_5(VAR_8 == VAR_3, "Should have failed with STG_E_READFAULT, but returned 0x%08x instead\n", VAR_8);


    FUNC_4(VAR_9, VAR_7, VAR_4, ((void*)0));
    VAR_8 = FUNC_1(VAR_9);
    FUNC_7(VAR_8, FUNC_1);

    FUNC_3(VAR_9);
}
