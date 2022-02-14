
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* aad_buf; size_t aad_buf_len; unsigned char* data_buf; size_t data_buf_len; int key_set; } ;
typedef TYPE_1__ PROV_AES_OCB_CTX ;
typedef int OSSL_ocb_cipher_fn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,size_t*,unsigned char*,size_t*,size_t,unsigned char const*,size_t,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, unsigned char *VAR_3, size_t *VAR_4,
                                size_t VAR_5, const unsigned char *VAR_6,
                                size_t VAR_7)
{
    PROV_AES_OCB_CTX *VAR_8 = (PROV_AES_OCB_CTX *)VAR_2;
    unsigned char *VAR_9;
    size_t *VAR_10;
    OSSL_ocb_cipher_fn VAR_11;

    if (!VAR_8->key_set || !FUNC_1(VAR_8))
        return 0;


    if (VAR_3 == ((void*)0)) {
        VAR_9 = VAR_8->aad_buf;
        VAR_10 = &VAR_8->aad_buf_len;
        VAR_11 = VAR_1;
    } else {
        VAR_9 = VAR_8->data_buf;
        VAR_10 = &VAR_8->data_buf_len;
        VAR_11 = VAR_0;
    }
    return FUNC_0(VAR_8, VAR_9, VAR_10, VAR_3, VAR_4, VAR_5,
                                         VAR_6, VAR_7, VAR_11);
}
