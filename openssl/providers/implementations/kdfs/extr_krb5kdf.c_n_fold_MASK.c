
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_0, unsigned int VAR_1,
                   const unsigned char *VAR_2, size_t VAR_3)
{
    unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9, VAR_10;

    if (VAR_3 == VAR_1) {
        FUNC_0(VAR_0, VAR_2, VAR_3);
        return;
    }


    VAR_5 = VAR_1;
    VAR_6 = VAR_3;

    while (VAR_6 != 0) {
        VAR_4 = VAR_5 % VAR_6;
        VAR_5 = VAR_6;
        VAR_6 = VAR_4;
    }

    VAR_7 = VAR_1 * VAR_3 / VAR_5;


    FUNC_1(VAR_0, 0, VAR_1);


    VAR_8 = 0;
    for (VAR_10 = VAR_7 - 1; VAR_10 >= 0; VAR_10--) {
        unsigned int VAR_11, VAR_12, VAR_13;


        VAR_9 = VAR_10 % VAR_1;


        VAR_11 = 13 * (VAR_10 / VAR_3);

        VAR_13 = VAR_10 - (VAR_11 / 8);

        VAR_12 = VAR_11 & 0x07;



        VAR_4 = (VAR_2[(VAR_13-1) % VAR_3] << (8 - VAR_12)
               | VAR_2[VAR_13 % VAR_3] >> VAR_12)
              & 0xff;

        VAR_4 += VAR_8 + VAR_0[VAR_9];
        VAR_0[VAR_9] = VAR_4 & 0xff;

        VAR_8 = VAR_4 >> 8;
    }


    for (VAR_9 = VAR_1 - 1; VAR_9 >= 0 && VAR_8 != 0; VAR_9--) {
        VAR_8 += VAR_0[VAR_9];
        VAR_0[VAR_9] = VAR_8 & 0xff;
        VAR_8 >>= 8;
    }
}
