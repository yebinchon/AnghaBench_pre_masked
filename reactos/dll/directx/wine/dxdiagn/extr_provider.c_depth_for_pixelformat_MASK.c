
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int D3DFORMAT ;






 int FUNC_0 (char*,int) ;

__attribute__((used)) static DWORD FUNC_1(D3DFORMAT VAR_0)
{
    switch (VAR_0)
    {
    case 131: return 8;
    case 129: return 15;
    case 130: return 16;

    case 128: return 32;
    default:
        FUNC_0("Unknown D3DFORMAT %d, returning 32 bpp\n", VAR_0);
        return 32;
    }
}
