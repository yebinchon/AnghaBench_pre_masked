
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,int*,unsigned char*,size_t) ;
 scalar_t__ FUNC_2 (unsigned char*,size_t) ;
 int FUNC_3 (unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_4(unsigned char *VAR_0, size_t *VAR_1,
                        const unsigned char *VAR_2, size_t VAR_3,
                        EVP_CIPHER_CTX *VAR_4)
{
    size_t VAR_5 = FUNC_0(VAR_4);
    size_t VAR_6;
    int VAR_7;




    VAR_6 = (VAR_3 + 4 + VAR_5 - 1) / VAR_5;
    VAR_6 *= VAR_5;
    if (VAR_6 < 2 * VAR_5) {

        return 0;
    }
    if (VAR_3 > 0xFF) {

        return 0;
    }
    if (VAR_0) {

        VAR_0[0] = (unsigned char)VAR_3;
        VAR_0[1] = VAR_2[0] ^ 0xFF;
        VAR_0[2] = VAR_2[1] ^ 0xFF;
        VAR_0[3] = VAR_2[2] ^ 0xFF;
        FUNC_3(VAR_0 + 4, VAR_2, VAR_3);

        if (VAR_6 > VAR_3 + 4
            && FUNC_2(VAR_0 + 4 + VAR_3, VAR_6 - 4 - VAR_3) <= 0)
            return 0;

        if (!FUNC_1(VAR_4, VAR_0, &VAR_7, VAR_0, VAR_6)
            || !FUNC_1(VAR_4, VAR_0, &VAR_7, VAR_0, VAR_6))
            return 0;
    }

    *VAR_1 = VAR_6;

    return 1;
}
