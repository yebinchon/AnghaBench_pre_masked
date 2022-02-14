
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PROV_AES_OCB_CTX ;
typedef int (* OSSL_ocb_cipher_fn ) (int *,unsigned char const*,unsigned char*,size_t) ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (unsigned char*,size_t*,size_t,unsigned char const**,size_t*) ;
 int FUNC_2 (unsigned char*,size_t*,size_t,unsigned char const**,size_t*) ;

__attribute__((used)) static int FUNC_3(PROV_AES_OCB_CTX *VAR_4,
                                         unsigned char *VAR_5, size_t *VAR_6,
                                         unsigned char *VAR_7, size_t *VAR_8,
                                         size_t VAR_9, const unsigned char *VAR_10,
                                         size_t VAR_11, OSSL_ocb_cipher_fn VAR_12)
{
    size_t VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_0, &VAR_10, &VAR_11);
    size_t VAR_14 = 0;

    if (*VAR_6 == VAR_0) {
        if (VAR_9 < VAR_0) {
            FUNC_0(VAR_1, VAR_3);
            return 0;
        }
        if (!VAR_12(VAR_4, VAR_5, VAR_7, VAR_0)) {
            FUNC_0(VAR_1, VAR_2);
            return 0;
        }
        *VAR_6 = 0;
        VAR_14 = VAR_0;
        VAR_7 += VAR_0;
    }
    if (VAR_13 > 0) {
        VAR_14 += VAR_13;
        if (VAR_9 < VAR_14) {
            FUNC_0(VAR_1, VAR_3);
            return 0;
        }
        if (!VAR_12(VAR_4, VAR_10, VAR_7, VAR_13)) {
            FUNC_0(VAR_1, VAR_2);
            return 0;
        }
        VAR_10 += VAR_13;
        VAR_11 -= VAR_13;
    }
    if (!FUNC_2(VAR_5, VAR_6, VAR_0, &VAR_10, &VAR_11)) {

        return 0;
    }

    *VAR_8 = VAR_14;
    return VAR_11 == 0;
}
