
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(size_t VAR_0)
{
    unsigned int VAR_1 = 0, VAR_2 = sizeof(size_t);

    while (VAR_0 && (VAR_1 < VAR_2)) {
        ++VAR_1;
        VAR_0 >>= 8;
    }

    if (VAR_1 == 0)
        VAR_1 = 1;
    return VAR_1;
}
