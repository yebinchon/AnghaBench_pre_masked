
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwUserPrefOrg ;
typedef int dwUserPref ;
typedef int UINT ;
typedef int* PVOID ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int*,int*,int *) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;

void
FUNC_3(UINT VAR_4, UINT VAR_5, DWORD VAR_6)
{
    BOOL VAR_7, VAR_8 = 0;
    DWORD VAR_9, VAR_10;
    DWORD VAR_11;


    FUNC_0(VAR_4, 0, &VAR_7, 0);
    VAR_11 = sizeof(VAR_10);
    FUNC_1(VAR_1, VAR_3, &VAR_10, &VAR_11, ((void*)0));


    FUNC_0(VAR_5, 0, ((void*)0), VAR_2);
    FUNC_0(VAR_4, 0, &VAR_8, 0);
    FUNC_2(VAR_8 == 0);
    VAR_11 = sizeof(VAR_9);
    FUNC_2(FUNC_1(VAR_1, VAR_3, &VAR_9, &VAR_11, ((void*)0)) == VAR_0);
    FUNC_2((VAR_9 & VAR_6) == 0);
    FUNC_2((VAR_9 & (~VAR_6)) == (VAR_10 & (~VAR_6)));


    FUNC_0(VAR_5, 0, (PVOID)1, 0);
    FUNC_0(VAR_4, 0, &VAR_8, 0);
    FUNC_2(VAR_8 == 1);
    VAR_11 = sizeof(VAR_9);
    FUNC_2(FUNC_1(VAR_1, VAR_3, &VAR_9, &VAR_11, ((void*)0)) == VAR_0);
    FUNC_2((VAR_9 & VAR_6) == 0);
    FUNC_2((VAR_9 & (~VAR_6)) == (VAR_10 & (~VAR_6)));


    FUNC_0(VAR_5, 0, (PVOID)2, 0);
    FUNC_0(VAR_4, 0, &VAR_8, 0);
    FUNC_2(VAR_8 == 1);
    VAR_11 = sizeof(VAR_9);
    FUNC_2(FUNC_1(VAR_1, VAR_3, &VAR_9, &VAR_11, ((void*)0)) == VAR_0);
    FUNC_2((VAR_9 & VAR_6) == 0);
    FUNC_2((VAR_9 & (~VAR_6)) == (VAR_10 & (~VAR_6)));


    FUNC_0(VAR_5, 0, (PVOID)1, VAR_2);
    FUNC_0(VAR_4, 0, &VAR_8, 0);
    FUNC_2(VAR_8 == 1);
    VAR_11 = sizeof(VAR_9);
    FUNC_2(FUNC_1(VAR_1, VAR_3, &VAR_9, &VAR_11, ((void*)0)) == VAR_0);
    FUNC_2((VAR_9 & VAR_6) == VAR_6);
    FUNC_2((VAR_9 & (~VAR_6)) == (VAR_10 & (~VAR_6)));


    FUNC_0(VAR_5, 0, (PVOID)VAR_7, VAR_2);


}
