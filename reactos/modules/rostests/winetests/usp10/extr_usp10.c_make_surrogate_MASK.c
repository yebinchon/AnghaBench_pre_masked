
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int DWORD ;



__attribute__((used)) static void FUNC_0(DWORD VAR_0, WORD VAR_1[2])
{
    static const DWORD VAR_2 = (1 << 10) - 1;

    if (VAR_0 <= 0xffff)
    {
        VAR_1[0] = VAR_0;
        VAR_1[1] = 0;
    }
    else
    {
        VAR_0 -= 0x010000;
        VAR_1[0] = ((VAR_0 >> 10) & VAR_2) + 0xd800;
        VAR_1[1] = (VAR_0 & VAR_2) + 0xdc00;
    }
}
