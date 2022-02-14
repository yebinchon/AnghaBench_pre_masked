
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsbytecode ;



__attribute__((used)) static inline jsbytecode *
FUNC_0(jsbytecode *VAR_0, size_t *VAR_1)
{
    size_t VAR_2;

    VAR_2 = *VAR_0++;
    if ((VAR_2 & 0x80) == 0) {



        *VAR_1 = VAR_2;
    } else {
        size_t VAR_3 = 7;
        *VAR_1 = 0x7F & VAR_2;
        do {
            VAR_2 = *VAR_0++;
            *VAR_1 |= (VAR_2 & 0x7F) << VAR_3;
            VAR_3 += 7;
        } while ((VAR_2 & 0x80) != 0);
    }
    return VAR_0;
}
