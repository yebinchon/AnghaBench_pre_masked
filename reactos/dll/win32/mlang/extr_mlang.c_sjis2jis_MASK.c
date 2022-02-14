
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1)
{
    unsigned char VAR_2 = *VAR_0;
    unsigned char VAR_3 = *VAR_1;
    int VAR_4 = VAR_3 < 159;
    int VAR_5 = VAR_2 < 160 ? 112 : 176;
    int VAR_6 = VAR_4 ? (31 + (VAR_3 > 127)): 126;

    *VAR_0 = ((VAR_2 - VAR_5) << 1) - VAR_4;
    *VAR_1 -= VAR_6;
}
