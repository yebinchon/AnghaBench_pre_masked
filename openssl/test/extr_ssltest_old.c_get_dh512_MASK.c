
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dh512_p ;
typedef int dh512_g ;
typedef int DH ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int *,int *) ;

__attribute__((used)) static DH *FUNC_5(void)
{
    static unsigned char VAR_0[] = {
        0xCB, 0xC8, 0xE1, 0x86, 0xD0, 0x1F, 0x94, 0x17, 0xA6, 0x99, 0xF0,
        0xC6,
        0x1F, 0x0D, 0xAC, 0xB6, 0x25, 0x3E, 0x06, 0x39, 0xCA, 0x72, 0x04,
        0xB0,
        0x6E, 0xDA, 0xC0, 0x61, 0xE6, 0x7A, 0x77, 0x25, 0xE8, 0x3B, 0xB9,
        0x5F,
        0x9A, 0xB6, 0xB5, 0xFE, 0x99, 0x0B, 0xA1, 0x93, 0x4E, 0x35, 0x33,
        0xB8,
        0xE1, 0xF1, 0x13, 0x4F, 0x59, 0x1A, 0xD2, 0x57, 0xC0, 0x26, 0x21,
        0x33,
        0x02, 0xC5, 0xAE, 0x23,
    };
    static unsigned char VAR_1[] = {
        0x02,
    };
    DH *VAR_2;
    BIGNUM *VAR_3, *VAR_4;

    if ((VAR_2 = FUNC_3()) == ((void*)0))
        return ((void*)0);
    VAR_3 = FUNC_0(VAR_0, sizeof(VAR_0), ((void*)0));
    VAR_4 = FUNC_0(VAR_1, sizeof(VAR_1), ((void*)0));
    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || !FUNC_4(VAR_2, VAR_3, ((void*)0), VAR_4)) {
        FUNC_2(VAR_2);
        FUNC_1(VAR_3);
        FUNC_1(VAR_4);
        return ((void*)0);
    }
    return VAR_2;
}
