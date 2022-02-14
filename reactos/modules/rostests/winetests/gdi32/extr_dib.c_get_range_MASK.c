
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef size_t BYTE ;


 int* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(BYTE VAR_1, DWORD VAR_2, BYTE *VAR_3, BYTE *VAR_4)
{
    *VAR_3 = (VAR_0[VAR_1] * VAR_2) / 0xff;
    *VAR_4 = VAR_0[16 - VAR_1] + ((0xff - VAR_0[16 - VAR_1]) * VAR_2) / 0xff;
}
