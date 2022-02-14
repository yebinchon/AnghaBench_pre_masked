
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ks ;
typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;


 int FUNC_0 (unsigned char const*,unsigned char**,int,int *,unsigned char**) ;
 int FUNC_1 (unsigned char**,int *) ;
 int FUNC_2 (unsigned char**) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (unsigned char**,unsigned char**,int) ;
 int FUNC_5 (unsigned char**,int ,int) ;
 int FUNC_6 (char const*) ;

void FUNC_7(const char *VAR_0, DES_cblock *VAR_1, DES_cblock *VAR_2)
{
    DES_key_schedule VAR_3;
    int VAR_4, VAR_5;

    FUNC_5(VAR_1, 0, 8);
    FUNC_5(VAR_2, 0, 8);
    VAR_5 = FUNC_6(VAR_0);
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        register unsigned char VAR_6 = VAR_0[VAR_4];

        if ((VAR_4 % 32) < 16) {
            if ((VAR_4 % 16) < 8)
                (*VAR_1)[VAR_4 % 8] ^= (VAR_6 << 1);
            else
                (*VAR_2)[VAR_4 % 8] ^= (VAR_6 << 1);
        } else {
            VAR_6 = ((VAR_6 << 4) & 0xf0) | ((VAR_6 >> 4) & 0x0f);
            VAR_6 = ((VAR_6 << 2) & 0xcc) | ((VAR_6 >> 2) & 0x33);
            VAR_6 = ((VAR_6 << 1) & 0xaa) | ((VAR_6 >> 1) & 0x55);
            if ((VAR_4 % 16) < 8)
                (*VAR_1)[7 - (VAR_4 % 8)] ^= VAR_6;
            else
                (*VAR_2)[7 - (VAR_4 % 8)] ^= VAR_6;
        }
    }
    if (VAR_5 <= 8)
        FUNC_4(VAR_2, VAR_1, 8);
    FUNC_2(VAR_1);
    FUNC_2(VAR_2);
    FUNC_1(VAR_1, &VAR_3);
    FUNC_0((const unsigned char *)VAR_0, VAR_1, VAR_5, &VAR_3, VAR_1);
    FUNC_1(VAR_2, &VAR_3);
    FUNC_0((const unsigned char *)VAR_0, VAR_2, VAR_5, &VAR_3, VAR_2);
    FUNC_3(&VAR_3, sizeof(VAR_3));
    FUNC_2(VAR_1);
    FUNC_2(VAR_2);
}
