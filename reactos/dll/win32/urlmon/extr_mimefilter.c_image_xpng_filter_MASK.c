
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xpng_header ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int const*,int const*,int) ;

__attribute__((used)) static BOOL FUNC_1(const BYTE *VAR_0, DWORD VAR_1)
{
    static const BYTE VAR_2[] = {0x89,'P','N','G',0x0d,0x0a,0x1a,0x0a};
    return VAR_1 > sizeof(VAR_2) && !FUNC_0(VAR_0, VAR_2, sizeof(VAR_2));
}
