
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AES_KEY ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,int const*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;

void FUNC_4(const unsigned char *VAR_3, unsigned char *VAR_4,
                        size_t VAR_5, const AES_KEY *VAR_6,
                        const AES_KEY *VAR_7, const unsigned char *VAR_8,
                        const int VAR_9)
{
    size_t VAR_10;
    size_t VAR_11 = VAR_5;
    unsigned char VAR_12[VAR_0];
    unsigned char VAR_13[VAR_0];
    unsigned char VAR_14[VAR_0];
    unsigned char VAR_15[VAR_0];
    const unsigned char *VAR_16;
    const unsigned char *VAR_17;

    FUNC_2(VAR_3 && VAR_4 && VAR_6 && VAR_8);
    FUNC_2((VAR_2 == VAR_9) || (VAR_1 == VAR_9));
    FUNC_2((VAR_5 % VAR_0) == 0);

    if (VAR_2 == VAR_9) {






        VAR_16 = VAR_8;
        VAR_17 = VAR_8 + VAR_0;
        while (VAR_11 >= VAR_0) {
            for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
                VAR_4[VAR_10] = VAR_3[VAR_10] ^ VAR_16[VAR_10];
            FUNC_1(VAR_4, VAR_4, VAR_6);
            for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
                VAR_4[VAR_10] ^= VAR_17[VAR_10];
            VAR_16 = VAR_4;
            FUNC_3(VAR_15, VAR_3, VAR_0);
            VAR_17 = VAR_15;
            VAR_11 -= VAR_0;
            VAR_3 += VAR_0;
            VAR_4 += VAR_0;
        }


        VAR_16 = VAR_8 + VAR_0 * 2;
        VAR_17 = VAR_8 + VAR_0 * 3;
        VAR_11 = VAR_5;
        while (VAR_11 >= VAR_0) {
            VAR_4 -= VAR_0;



            FUNC_3(VAR_12, VAR_4, VAR_0);
            for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
                VAR_4[VAR_10] ^= VAR_16[VAR_10];



            FUNC_1(VAR_4, VAR_4, VAR_6);






            for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
                VAR_4[VAR_10] ^= VAR_17[VAR_10];



            VAR_16 = VAR_4;
            FUNC_3(VAR_15, VAR_12, VAR_0);
            VAR_17 = VAR_15;
            VAR_11 -= VAR_0;
        }
    } else {

        VAR_16 = VAR_8 + VAR_0 * 2;
        VAR_17 = VAR_8 + VAR_0 * 3;
        VAR_3 += VAR_5;
        VAR_4 += VAR_5;
        while (VAR_11 >= VAR_0) {
            VAR_3 -= VAR_0;
            VAR_4 -= VAR_0;
            FUNC_3(VAR_12, VAR_3, VAR_0);
            FUNC_3(VAR_13, VAR_3, VAR_0);
            for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
                VAR_12[VAR_10] ^= VAR_17[VAR_10];
            FUNC_0(VAR_12, VAR_4, VAR_6);
            for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
                VAR_4[VAR_10] ^= VAR_16[VAR_10];
            FUNC_3(VAR_14, VAR_13, VAR_0);
            VAR_16 = VAR_14;
            VAR_17 = VAR_4;
            VAR_11 -= VAR_0;
        }


        VAR_16 = VAR_8;
        VAR_17 = VAR_8 + VAR_0;
        VAR_11 = VAR_5;
        while (VAR_11 >= VAR_0) {
            FUNC_3(VAR_12, VAR_4, VAR_0);
            FUNC_3(VAR_13, VAR_4, VAR_0);
            for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
                VAR_12[VAR_10] ^= VAR_17[VAR_10];
            FUNC_0(VAR_12, VAR_4, VAR_6);
            for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
                VAR_4[VAR_10] ^= VAR_16[VAR_10];
            FUNC_3(VAR_14, VAR_13, VAR_0);
            VAR_16 = VAR_14;
            VAR_17 = VAR_4;
            VAR_11 -= VAR_0;
            VAR_3 += VAR_0;
            VAR_4 += VAR_0;
        }
    }
}
