
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MEASUREITEMSTRUCT ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    MEASUREITEMSTRUCT VAR_2;
    HWND VAR_3;

    VAR_3 = FUNC_2();

    VAR_1 = 0;
    FUNC_1(VAR_3, VAR_0, 0, (LPARAM)&VAR_2);
    FUNC_3(VAR_1 == 1, "got %d\n", VAR_1);

    FUNC_0(VAR_3);
}
