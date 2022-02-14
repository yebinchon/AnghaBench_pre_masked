
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int POS ;



__attribute__((used)) static inline POS FUNC_0(POS VAR_0, POS VAR_1, unsigned int VAR_2)
{
    uint32_t VAR_3 = VAR_0 * (65536 - VAR_2);
    uint32_t VAR_4 = VAR_1 * (VAR_2 + 1);

    return (POS)((VAR_3 + VAR_4) / 65536);
}
