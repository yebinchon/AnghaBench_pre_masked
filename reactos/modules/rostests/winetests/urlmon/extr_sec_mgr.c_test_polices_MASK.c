
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IInternetZoneManager ;
typedef int IInternetSecurityManager ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int **,int ) ;
 scalar_t__ FUNC_4 (int *,int **,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    IInternetZoneManager *VAR_7 = ((void*)0);
    IInternetSecurityManager *VAR_8 = ((void*)0);
    HRESULT VAR_9;

    FUNC_8("testing polices...\n");

    VAR_9 = FUNC_3(((void*)0), &VAR_8, 0);
    FUNC_2(VAR_9 == VAR_0, "CoInternetCreateSecurityManager failed: %08x\n", VAR_9);
    VAR_9 = FUNC_4(((void*)0), &VAR_7, 0);
    FUNC_2(VAR_9 == VAR_0, "CoInternetCreateZoneManager failed: %08x\n", VAR_9);

    FUNC_7(VAR_8, VAR_7, VAR_6);
    FUNC_7(VAR_8, VAR_7, VAR_3);
    FUNC_7(VAR_8, VAR_7, VAR_1);
    FUNC_7(VAR_8, VAR_7, VAR_4);
    FUNC_7(VAR_8, VAR_7, 0xdeadbeef);

    FUNC_6(VAR_8, VAR_7, VAR_5);
    FUNC_6(VAR_8, VAR_7, VAR_2);

    FUNC_5(VAR_8);

    FUNC_0(VAR_8);
    FUNC_1(VAR_7);
}
