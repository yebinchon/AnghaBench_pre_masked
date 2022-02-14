
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_4(HWND VAR_2, DWORD VAR_3)
{
    BOOL VAR_4;

    if (VAR_3 & VAR_1)
    {
        VAR_4 = FUNC_2(FUNC_0(), VAR_2);
        if (VAR_4)
            VAR_4 = (VAR_2 == (HWND)FUNC_3(FUNC_1(VAR_2), VAR_0, 0, 0));
    }
    else
    {
        VAR_4 = (FUNC_0() == VAR_2);
    }

    return VAR_4;
}
