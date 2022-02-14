
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int UINT ;
typedef scalar_t__ INT ;
typedef int DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (void const**,int,scalar_t__*,int*,int) ;

__attribute__((used)) static void FUNC_3 (const void *VAR_0, void *VAR_1, UINT VAR_2,
        UINT VAR_3, INT VAR_4, UINT VAR_5, UINT VAR_6)
{
    while (VAR_4 > 0)
    {
        WORD *VAR_7 = VAR_1;
        *VAR_7 = FUNC_0(FUNC_1(*(const DWORD *)VAR_0) / 65536);

        VAR_1 = (char *)VAR_1 + VAR_3;
        FUNC_2(&VAR_0, VAR_2, &VAR_4, &VAR_5, VAR_6);
    }
}
