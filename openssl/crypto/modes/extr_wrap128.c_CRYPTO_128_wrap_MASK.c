
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* block128_f ) (unsigned char*,unsigned char*,void*) ;


 size_t VAR_0 ;
 unsigned char* VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;

size_t FUNC_2(void *VAR_2, const unsigned char *VAR_3,
                       unsigned char *VAR_4,
                       const unsigned char *VAR_5, size_t VAR_6,
                       block128_f VAR_7)
{
    unsigned char *VAR_8, VAR_9[16], *VAR_10;
    size_t VAR_11, VAR_12, VAR_13;
    if ((VAR_6 & 0x7) || (VAR_6 < 16) || (VAR_6 > VAR_0))
        return 0;
    VAR_8 = VAR_9;
    VAR_13 = 1;
    FUNC_1(VAR_4 + 8, VAR_5, VAR_6);
    if (!VAR_3)
        VAR_3 = VAR_1;

    FUNC_0(VAR_8, VAR_3, 8);

    for (VAR_12 = 0; VAR_12 < 6; VAR_12++) {
        VAR_10 = VAR_4 + 8;
        for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11 += 8, VAR_13++, VAR_10 += 8) {
            FUNC_0(VAR_9 + 8, VAR_10, 8);
            VAR_7(VAR_9, VAR_9, VAR_2);
            VAR_8[7] ^= (unsigned char)(VAR_13 & 0xff);
            if (VAR_13 > 0xff) {
                VAR_8[6] ^= (unsigned char)((VAR_13 >> 8) & 0xff);
                VAR_8[5] ^= (unsigned char)((VAR_13 >> 16) & 0xff);
                VAR_8[4] ^= (unsigned char)((VAR_13 >> 24) & 0xff);
            }
            FUNC_0(VAR_10, VAR_9 + 8, 8);
        }
    }
    FUNC_0(VAR_4, VAR_8, 8);
    return VAR_6 + 8;
}
