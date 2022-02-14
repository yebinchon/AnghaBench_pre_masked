
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* jsbytecode ;



__attribute__((used)) static inline jsbytecode *
FUNC_0(jsbytecode *VAR_0, size_t VAR_1)
{
    size_t VAR_2;

    while ((VAR_2 = VAR_1 >> 7) != 0) {
        *VAR_0++ = (jsbytecode)(VAR_1 | 0x80);
        VAR_1 = VAR_2;
    }
    *VAR_0++ = (jsbytecode)VAR_1;
    return VAR_0;
}
