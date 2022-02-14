
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef unsigned int DWORD ;


 int FUNC_0 (unsigned int*,int,int) ;

__attribute__((used)) static inline void FUNC_1(DWORD *VAR_0, UINT VAR_1)
{
    DWORD VAR_2 = (1u << (VAR_1 & 0x1f)) - 1;
    FUNC_0(VAR_0, 0xff, (VAR_1 >> 5) * sizeof(*VAR_0));
    if (VAR_2) VAR_0[VAR_1 >> 5] = VAR_2;
}
