
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const unsigned char *VAR_0, int VAR_1)
{
    int VAR_2;
    int VAR_3;
    unsigned int VAR_4 = 0;


    for (int VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        VAR_4 += VAR_0[VAR_5];
    }

    VAR_2 = (VAR_4 & 0xffff) + ((VAR_4 & 0xffffffff) >> 16);
    VAR_3 = (VAR_2 & 0xffff) + (VAR_2 >> 16);

    return VAR_3;
}
