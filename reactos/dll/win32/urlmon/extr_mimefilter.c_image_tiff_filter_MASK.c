
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int const*,int const*,int) ;

__attribute__((used)) static BOOL FUNC_1(const BYTE *VAR_0, DWORD VAR_1)
{
    static const BYTE VAR_2[] = {0x4d,0x4d,0x00,0x2a};
    static const BYTE VAR_3[] = {0x49,0x49,0x2a,0xff};

    return VAR_1 >= 4 && (!FUNC_0(VAR_0, VAR_2, 4) || !FUNC_0(VAR_0, VAR_3, 4));
}
