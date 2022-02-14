
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static BOOL FUNC_1(DWORD VAR_2, DWORD VAR_3, BYTE VAR_4)
{
    if (FUNC_0((VAR_2 & 0xff) - (VAR_3 & 0xff)) > VAR_4) return VAR_0;
    VAR_2 >>= 8; VAR_3 >>= 8;
    if (FUNC_0((VAR_2 & 0xff) - (VAR_3 & 0xff)) > VAR_4) return VAR_0;
    VAR_2 >>= 8; VAR_3 >>= 8;
    if (FUNC_0((VAR_2 & 0xff) - (VAR_3 & 0xff)) > VAR_4) return VAR_0;
    VAR_2 >>= 8; VAR_3 >>= 8;
    if (FUNC_0((VAR_2 & 0xff) - (VAR_3 & 0xff)) > VAR_4) return VAR_0;
    return VAR_1;
}
