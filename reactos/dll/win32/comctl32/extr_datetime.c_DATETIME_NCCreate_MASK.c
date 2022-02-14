
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int DWORD ;
typedef int CREATESTRUCTW ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_3 (HWND VAR_3, const CREATESTRUCTW *VAR_4)
{
    DWORD VAR_5 = FUNC_1(VAR_3, VAR_0);

    VAR_5 |= VAR_2;
    FUNC_2(VAR_3, VAR_0, VAR_5);

    return FUNC_0(VAR_3, VAR_1, 0, (LPARAM)VAR_4);
}
