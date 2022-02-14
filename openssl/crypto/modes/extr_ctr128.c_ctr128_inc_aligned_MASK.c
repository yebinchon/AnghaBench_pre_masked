
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0)
{
    size_t *VAR_1, VAR_2, VAR_3, VAR_4;
    const union {
        long one;
        char little;
    } VAR_5 = {
        1
    };

    if (VAR_5.little || ((size_t)VAR_0 % sizeof(size_t)) != 0) {
        FUNC_0(VAR_0);
        return;
    }

    VAR_1 = (size_t *)VAR_0;
    VAR_2 = 1;
    VAR_4 = 16 / sizeof(size_t);
    do {
        --VAR_4;
        VAR_3 = VAR_1[VAR_4] += VAR_2;

        VAR_2 = ((VAR_3 - VAR_2) & ~VAR_3) >> (sizeof(size_t) * 8 - 1);
    } while (VAR_4);
}
