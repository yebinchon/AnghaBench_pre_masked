
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;

VOID
FUNC_2(HWND VAR_2,
                 DWORD VAR_3)
{
    DWORD VAR_4 = FUNC_0(VAR_2, VAR_0);

    if ((VAR_4 & VAR_1) != VAR_3)
    {
        FUNC_1(VAR_2,
                         VAR_0,
                         (VAR_4 & ~VAR_1) | VAR_3);
    }
}
