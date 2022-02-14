
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {unsigned char* data; scalar_t__ data_type; size_t return_size; } ;
struct TYPE_9__ {int ivlen; int iv; } ;
struct TYPE_10__ {TYPE_1__ base; int key_bits; } ;
typedef TYPE_2__ PROV_RC2_CTX ;
typedef TYPE_3__ OSSL_PARAM ;
typedef int ASN1_TYPE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,long,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int FUNC_6 (void*,TYPE_3__*) ;
 int FUNC_7 (int *,unsigned char**) ;
 long FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(void *VAR_6, OSSL_PARAM VAR_7[])
{
    PROV_RC2_CTX *VAR_8 = (PROV_RC2_CTX *)VAR_6;
    OSSL_PARAM *VAR_9;

    if (!FUNC_6(VAR_6, VAR_7))
        return 0;
    VAR_9 = FUNC_4(VAR_7, VAR_3);
    if (VAR_9 != ((void*)0) && !FUNC_5(VAR_9, VAR_8->key_bits)) {
        FUNC_3(VAR_0, VAR_5);
        return 0;
    }
    VAR_9 = FUNC_4(VAR_7, VAR_2);
    if (VAR_9 != ((void*)0)) {
        long VAR_10;
        int VAR_11;
        ASN1_TYPE *VAR_12;
        unsigned char *VAR_13 = VAR_9->data;
        unsigned char **VAR_14 = VAR_13 == ((void*)0) ? ((void*)0) : &VAR_13;

        if (VAR_9->data_type != VAR_4) {
            FUNC_3(VAR_0, VAR_5);
            return 0;
        }
        if ((VAR_12 = FUNC_1()) == ((void*)0)) {
            FUNC_3(VAR_0, VAR_1);
            return 0;
        }


        VAR_10 = FUNC_8(VAR_8->key_bits);
        if (!FUNC_2(VAR_12, VAR_10,
                                           VAR_8->base.iv, VAR_8->base.ivlen)) {
            FUNC_0(VAR_12);
            FUNC_3(VAR_0, VAR_1);
            return 0;
        }




        VAR_11 = FUNC_7(VAR_12, VAR_14);
        if (VAR_11 >= 0)
            VAR_9->return_size = (size_t)VAR_11;

        FUNC_0(VAR_12);
        if (VAR_11 < 0) {
            FUNC_3(VAR_0, VAR_5);
            return 0;
        }
    }
    return 1;
}
