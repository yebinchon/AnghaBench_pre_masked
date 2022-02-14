
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szParameters ;
typedef int WCHAR ;
typedef int LPWSTR ;
typedef int INT_PTR ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,char*,int *,int *,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,char*) ;

__attribute__((used)) static INT
FUNC_3(LPWSTR VAR_2)
{
    WCHAR VAR_3[VAR_0];





    FUNC_2(VAR_3, sizeof(VAR_3), L"/n,::{20D04FE0-3AEA-1069-A2D8-08002B30309D}\\::{21EC2020-3AEA-1069-A2DD-08002B30309D}");
    FUNC_1(VAR_3,sizeof(VAR_3), VAR_2);

    return (INT_PTR)FUNC_0(((void*)0),
                                  L"open",
                                  L"explorer.exe",
                                  VAR_3,
                                  ((void*)0),
                                  VAR_1) > 32;
}
