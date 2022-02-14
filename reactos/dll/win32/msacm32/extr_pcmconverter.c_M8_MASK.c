
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned char FUNC_0(unsigned char VAR_0, unsigned char VAR_1)
{
    int VAR_2 = VAR_0 - 128;
    int VAR_3 = VAR_1 - 128;
    int VAR_4 = (VAR_2 + VAR_3) + 128;


    if (VAR_4 > 0xff)
        VAR_4 = 0xff;
    else if (VAR_4 < 0)
        VAR_4 = 0;

    return VAR_4;
}
