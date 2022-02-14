
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int HWND ;
typedef int HTHEME ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int,int ,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_5 (HWND VAR_4, RECT* VAR_5)
{
    HTHEME VAR_6 = FUNC_3 (VAR_4);
    FUNC_0 (VAR_4, VAR_5);
    if (!VAR_6)
        FUNC_4(VAR_5, -1, -1);
    else
    {
        DWORD VAR_7 = FUNC_2 (VAR_4, VAR_0);
        int VAR_8 = (VAR_7 & VAR_1) ? VAR_3 : VAR_2;
        FUNC_1 (VAR_6, 0, VAR_8, 0, VAR_5, VAR_5);
    }
}
