
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int HWND ;
typedef int HMIXEROBJ ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,int ) ;

__attribute__((used)) static UINT
FUNC_3(HWND VAR_4, DWORD VAR_5)
{
    int VAR_6;
    UINT VAR_7;

    VAR_6 = FUNC_1(VAR_4, VAR_1, 0, 0);

    if (VAR_6 == VAR_0)
        return 0;

    VAR_7 = (UINT) FUNC_1(VAR_4, VAR_2, VAR_6, 0);
    if (VAR_7 == (UINT) VAR_0)
        return 0;

    if (FUNC_2((HMIXEROBJ)FUNC_0(VAR_7), &VAR_7, VAR_5) != VAR_3)
        return 0;

    return VAR_7;
}
