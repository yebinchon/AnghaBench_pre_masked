
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* block128_f ) (unsigned char*,unsigned char*,void const*) ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,void const*) ;

__attribute__((used)) static void FUNC_2(const unsigned char *VAR_0, unsigned char *VAR_1,
                               int VAR_2, const void *VAR_3,
                               unsigned char VAR_4[16], int VAR_5,
                               block128_f VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    unsigned char VAR_10[16 * 2 + 1];


    if (VAR_2 <= 0 || VAR_2 > 128)
        return;


    FUNC_0(VAR_10, VAR_4, 16);

    (*VAR_6) (VAR_4, VAR_4, VAR_3);
    VAR_9 = (VAR_2 + 7) / 8;
    if (VAR_5)
        for (VAR_7 = 0; VAR_7 < VAR_9; ++VAR_7)
            VAR_1[VAR_7] = (VAR_10[16 + VAR_7] = VAR_0[VAR_7] ^ VAR_4[VAR_7]);
    else
        for (VAR_7 = 0; VAR_7 < VAR_9; ++VAR_7)
            VAR_1[VAR_7] = (VAR_10[16 + VAR_7] = VAR_0[VAR_7]) ^ VAR_4[VAR_7];

    VAR_8 = VAR_2 % 8;
    VAR_9 = VAR_2 / 8;
    if (VAR_8 == 0)
        FUNC_0(VAR_4, VAR_10 + VAR_9, 16);
    else
        for (VAR_7 = 0; VAR_7 < 16; ++VAR_7)
            VAR_4[VAR_7] = VAR_10[VAR_7 + VAR_9] << VAR_8 | VAR_10[VAR_7 + VAR_9 + 1] >> (8 - VAR_8);


}
