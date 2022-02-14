
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwUserPrefMask ;
typedef int* PVOID ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int*,int*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_3(void)
{
    BOOL VAR_7, VAR_8 = 0;
    DWORD VAR_9;
    DWORD VAR_10;


    FUNC_0(VAR_3, 0, &VAR_7, 0);


    FUNC_0(VAR_4, 0, ((void*)0), VAR_2);
    FUNC_0(VAR_3, 0, &VAR_8, 0);
    FUNC_2(VAR_8 == 0);
    VAR_10 = sizeof(VAR_9);
    FUNC_2(FUNC_1(VAR_1, VAR_6, &VAR_9, &VAR_10, ((void*)0)) == VAR_0);
    FUNC_2((VAR_9 & VAR_5) == 0);


    FUNC_0(VAR_4, 0, (PVOID)1, VAR_2);
    FUNC_0(VAR_3, 0, &VAR_8, 0);
    FUNC_2(VAR_8 == 1);
    VAR_10 = sizeof(VAR_9);
    FUNC_2(FUNC_1(VAR_1, VAR_6, &VAR_9, &VAR_10, ((void*)0)) == VAR_0);
    FUNC_2((VAR_9 & VAR_5) != 0);



    FUNC_0(VAR_4, 0, (PVOID)VAR_7, VAR_2);
}
