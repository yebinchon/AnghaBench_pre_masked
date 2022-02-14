
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_4;
    HWND VAR_5;

    VAR_5 = FUNC_2(0);

    VAR_4 = FUNC_1(VAR_5, VAR_3, VAR_2, 0);
    FUNC_3(VAR_4 == (VAR_1 | VAR_0), "0x%08x\n", VAR_4);

    FUNC_0(VAR_5);
}
