
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FontCount; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ GFRI_ENTRY ;
typedef int Data ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int*,int*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(LPCWSTR VAR_0, const GFRI_ENTRY *VAR_1)
{
    BOOL VAR_2;
    DWORD VAR_3, VAR_4 = 0;
    DWORD VAR_5;


    VAR_3 = 0;
    VAR_2 = FUNC_0(VAR_0, &VAR_3, ((void*)0), VAR_4);
    FUNC_1(VAR_2, 1);
    FUNC_1(VAR_3, 4);


    VAR_3 = 1024;
    VAR_2 = FUNC_0(VAR_0, &VAR_3, ((void*)0), VAR_4);
    FUNC_1(VAR_2, 0);
    FUNC_1(VAR_3, 1024);


    VAR_5 = 0xDEADFACE;
    VAR_3 = 0;
    VAR_2 = FUNC_0(VAR_0, &VAR_3, &VAR_5, VAR_4);
    FUNC_1(VAR_2, 1);
    FUNC_1(VAR_5, 0xDEADFACE);
    FUNC_1(VAR_3, 4);


    VAR_5 = 0xDEADFACE;
    VAR_3 = sizeof(VAR_5);
    VAR_2 = FUNC_0(VAR_0, &VAR_3, &VAR_5, VAR_4);
    FUNC_1(VAR_2, 1);
    FUNC_1(VAR_5, VAR_1->FontCount);
    FUNC_1(VAR_3, 4);
}
