
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(BYTE *VAR_1, DWORD VAR_2)
{
    BYTE VAR_3 = 1 << (VAR_2%VAR_0);
    VAR_1[VAR_2/VAR_0] |= VAR_3;
}
