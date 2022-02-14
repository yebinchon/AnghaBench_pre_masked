
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(const unsigned char *VAR_0, int VAR_1) {
    unsigned int VAR_2 = 5381;

    while (VAR_1--)
        VAR_2 = ((VAR_2 << 5) + VAR_2) + (*VAR_0++);
    return VAR_2;
}
