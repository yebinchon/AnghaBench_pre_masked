
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int DWORD ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(DWORD *VAR_0, UINT VAR_1)
{
    UINT VAR_2;

    FUNC_0(VAR_1 == 16);

    for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
    {
        VAR_0[VAR_2] = 0xff000000;
        VAR_0[VAR_2] |= (VAR_2 << 20) | (VAR_2 << 16) | (VAR_2 << 12) | (VAR_2 << 8) | (VAR_2 << 4) | VAR_2;
    }
}
