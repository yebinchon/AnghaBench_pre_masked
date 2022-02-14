
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (size_t) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0, int *VAR_1, size_t VAR_2)
{
    unsigned int VAR_3 = FUNC_0(VAR_2);
    int VAR_4;


    if (VAR_3 > 0xFF)
        return 0;


    for (VAR_4 = VAR_3 - 1; VAR_4 >= 0; --VAR_4) {
        VAR_0[VAR_4] = (unsigned char)(VAR_2 & 0xFF);
        VAR_2 >>= 8;
    }

    VAR_0[VAR_3] = (unsigned char)VAR_3;


    *VAR_1 = VAR_3 + 1;
    return 1;
}
