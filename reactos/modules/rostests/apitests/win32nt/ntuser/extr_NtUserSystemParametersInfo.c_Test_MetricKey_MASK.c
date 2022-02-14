
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szReg ;
typedef int WCHAR ;
typedef int PCWSTR ;
typedef int INT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int **,int*,int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int,char*,int ) ;

void
FUNC_3(PCWSTR VAR_2, INT VAR_3)
{
    WCHAR VAR_4[10];
    DWORD VAR_5;

    VAR_5 = sizeof(VAR_4);
    FUNC_2(FUNC_0(VAR_1, VAR_2, &VAR_4, &VAR_5, ((void*)0)) == VAR_0, "Value=%S\n", VAR_2);
    FUNC_2(FUNC_1(VAR_4, L"1") == 0, "Value=%S\n", VAR_2);

}
