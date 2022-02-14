
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int GFRI_ENTRY ;
typedef int Data ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int*,int*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(LPCWSTR VAR_0, const GFRI_ENTRY *VAR_1)
{
    BOOL VAR_2;
    DWORD VAR_3, VAR_4 = 3;
    DWORD VAR_5[2];


    VAR_3 = 0;
    VAR_2 = FUNC_0(VAR_0, &VAR_3, ((void*)0), VAR_4);
    FUNC_1(VAR_2, 1);
    FUNC_1(VAR_3, 4);


    VAR_3 = sizeof(VAR_5);
    VAR_2 = FUNC_0(VAR_0, &VAR_3, ((void*)0), VAR_4);
    FUNC_1(VAR_2, 0);
    FUNC_1(VAR_3, 8);


    VAR_3 = 0;
    VAR_5[0] = 0xDEADFACE;
    VAR_2 = FUNC_0(VAR_0, &VAR_3, VAR_5, VAR_4);
    FUNC_1(VAR_2, 1);
    FUNC_1(VAR_3, 4);
    FUNC_1(VAR_5[0], 0xDEADFACE);


    VAR_3 = sizeof(VAR_5);
    VAR_5[0] = 0xDEADFACE;
    VAR_2 = FUNC_0(VAR_0, &VAR_3, VAR_5, VAR_4);
    FUNC_1(VAR_2, 1);
    FUNC_1(VAR_3, 4);
    FUNC_1(VAR_5[0], 1);
}
