
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int iv ;
struct TYPE_13__ {int ivlen; int keylen; } ;
struct TYPE_12__ {unsigned char* data; scalar_t__ data_type; int data_size; } ;
struct TYPE_11__ {int key_bits; TYPE_5__ base; } ;
typedef TYPE_1__ PROV_RC2_CTX ;
typedef TYPE_2__ OSSL_PARAM ;
typedef int ASN1_TYPE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,long*,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__ const*,int*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_5__*,unsigned char*,size_t) ;
 int FUNC_7 (void*,TYPE_2__*) ;
 int * FUNC_8 (int *,unsigned char const**,int ) ;
 int FUNC_9 (long) ;

__attribute__((used)) static int FUNC_10(void *VAR_6, OSSL_PARAM VAR_7[])
{
    PROV_RC2_CTX *VAR_8 = (PROV_RC2_CTX *)VAR_6;
    const OSSL_PARAM *VAR_9;

    if (!FUNC_7(VAR_6, VAR_7))
        return 0;
    VAR_9 = FUNC_5(VAR_7, VAR_2);
    if (VAR_9 != ((void*)0)) {
         if (!FUNC_3(VAR_9, &VAR_8->key_bits)) {
            FUNC_2(VAR_0, VAR_4);
            return 0;
        }
    }
    VAR_9 = FUNC_4(VAR_7, VAR_1);
    if (VAR_9 != ((void*)0)) {
        ASN1_TYPE *VAR_10 = ((void*)0);
        long VAR_11 = 0;
        const unsigned char *VAR_12 = VAR_9->data;
        int VAR_13 = 1;
        unsigned char VAR_14[16];

        if (VAR_9->data_type != VAR_3
            || VAR_8->base.ivlen > sizeof(VAR_14)
            || (VAR_10 = FUNC_8(((void*)0), &VAR_12, VAR_9->data_size)) == ((void*)0)
            || ((size_t)FUNC_1(VAR_10, &VAR_11, VAR_14,
                                                      VAR_8->base.ivlen)
                != VAR_8->base.ivlen)
            || !FUNC_6(&VAR_8->base, VAR_14, VAR_8->base.ivlen)
            || (VAR_8->key_bits = FUNC_9(VAR_11)) == 0) {
            FUNC_2(VAR_0, VAR_5);
            VAR_13 = 0;
        }
        FUNC_0(VAR_10);
        if (VAR_13 == 0)
            return 0;





        VAR_8->base.keylen = VAR_8->key_bits / 8;
    }
    return 1;
}
