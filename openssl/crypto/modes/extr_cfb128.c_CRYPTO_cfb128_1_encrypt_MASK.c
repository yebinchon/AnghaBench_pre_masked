
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int block128_f ;


 int FUNC_0 (unsigned char*,unsigned char*,int,void const*,unsigned char*,int,int ) ;

void FUNC_1(const unsigned char *VAR_0, unsigned char *VAR_1,
                             size_t VAR_2, const void *VAR_3,
                             unsigned char VAR_4[16], int *VAR_5,
                             int VAR_6, block128_f VAR_7)
{
    size_t VAR_8;
    unsigned char VAR_9[1], VAR_10[1];

    for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
        VAR_9[0] = (VAR_0[VAR_8 / 8] & (1 << (7 - VAR_8 % 8))) ? 0x80 : 0;
        FUNC_0(VAR_9, VAR_10, 1, VAR_3, VAR_4, VAR_6, VAR_7);
        VAR_1[VAR_8 / 8] = (VAR_1[VAR_8 / 8] & ~(1 << (unsigned int)(7 - VAR_8 % 8))) |
            ((VAR_10[0] & 0x80) >> (unsigned int)(VAR_8 % 8));
    }
}
