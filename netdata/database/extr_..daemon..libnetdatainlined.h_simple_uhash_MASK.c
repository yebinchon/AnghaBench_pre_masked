
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline uint32_t FUNC_1(const char *VAR_0) {
    unsigned char *VAR_1 = (unsigned char *) VAR_0;
    uint32_t VAR_2 = 0x811c9dc5, VAR_3;
    while ((VAR_3 = *VAR_1++)) {
        if (FUNC_0(VAR_3 >= 'A' && VAR_3 <= 'Z')) VAR_3 += 'a' - 'A';
        VAR_2 *= 16777619;
        VAR_2 ^= VAR_3;
    }
    return VAR_2;
}
