
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_3;
    HWND VAR_4;


    VAR_4 = FUNC_3(VAR_1);

    VAR_3 = FUNC_1(VAR_4, VAR_0);
    FUNC_4((VAR_3 & (VAR_1 | VAR_2)) == (VAR_1 | VAR_2), "got style 0x%08x\n", VAR_3);

    FUNC_0(VAR_4);


    VAR_4 = FUNC_3(0);

    VAR_3 = FUNC_1(VAR_4, VAR_0);
    FUNC_2(VAR_4, VAR_0, VAR_3 | VAR_1);
    VAR_3 = FUNC_1(VAR_4, VAR_0);
    FUNC_4(VAR_3 & VAR_1, "got style 0x%08x\n", VAR_3);

    FUNC_0(VAR_4);
}
