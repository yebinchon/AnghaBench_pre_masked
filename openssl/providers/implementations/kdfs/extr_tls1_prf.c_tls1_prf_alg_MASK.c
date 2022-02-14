
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MAC_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,size_t) ;
 unsigned char* FUNC_2 (size_t) ;
 int FUNC_3 (int *,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_4(EVP_MAC_CTX *VAR_2, EVP_MAC_CTX *VAR_3,
                        const unsigned char *VAR_4, size_t VAR_5,
                        const unsigned char *VAR_6, size_t VAR_7,
                        unsigned char *VAR_8, size_t VAR_9)
{
    if (VAR_3 != ((void*)0)) {

        size_t VAR_10;
        unsigned char *VAR_11;

        size_t VAR_12 = (VAR_5 + 1) / 2;
        size_t VAR_13 = VAR_12;

        if (!FUNC_3(VAR_2, VAR_4, VAR_12,
                             VAR_6, VAR_7, VAR_8, VAR_9))
            return 0;

        if ((VAR_11 = FUNC_2(VAR_9)) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }

        if (!FUNC_3(VAR_3, VAR_4 + VAR_5 - VAR_13, VAR_13,
                             VAR_6, VAR_7, VAR_11, VAR_9)) {
            FUNC_1(VAR_11, VAR_9);
            return 0;
        }
        for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
            VAR_8[VAR_10] ^= VAR_11[VAR_10];
        FUNC_1(VAR_11, VAR_9);
        return 1;
    }


    if (!FUNC_3(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9))
        return 0;

    return 1;
}
