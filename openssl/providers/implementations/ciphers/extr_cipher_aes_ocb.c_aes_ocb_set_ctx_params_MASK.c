
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ data_type; scalar_t__ data_size; int * data; } ;
struct TYPE_8__ {size_t ivlen; size_t keylen; scalar_t__ enc; } ;
struct TYPE_9__ {scalar_t__ taglen; TYPE_1__ base; int tag; } ;
typedef TYPE_2__ PROV_AES_OCB_CTX ;
typedef TYPE_3__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_3__ const*,size_t*) ;
 TYPE_3__* FUNC_2 (TYPE_3__ const*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(void *VAR_10, const OSSL_PARAM VAR_11[])
{
    PROV_AES_OCB_CTX *VAR_12 = (PROV_AES_OCB_CTX *)VAR_10;
    const OSSL_PARAM *VAR_13;
    size_t VAR_14;

    VAR_13 = FUNC_2(VAR_11, VAR_5);
    if (VAR_13 != ((void*)0)) {
        if (VAR_13->data_type != VAR_7) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
        if (VAR_13->data == ((void*)0)) {

            if (VAR_13->data_size > VAR_2)
                return 0;
            VAR_12->taglen = VAR_13->data_size;
        } else {
            if (VAR_13->data_size != VAR_12->taglen || VAR_12->base.enc)
                return 0;
            FUNC_3(VAR_12->tag, VAR_13->data, VAR_13->data_size);
        }
     }
    VAR_13 = FUNC_2(VAR_11, VAR_4);
    if (VAR_13 != ((void*)0)) {
        if (!FUNC_1(VAR_13, &VAR_14)) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }

        if (VAR_14 < VAR_3 || VAR_14 > VAR_1)
            return 0;
        VAR_12->base.ivlen = VAR_14;
    }
    VAR_13 = FUNC_2(VAR_11, VAR_6);
    if (VAR_13 != ((void*)0)) {
        size_t VAR_15;

        if (!FUNC_1(VAR_13, &VAR_15)) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
        if (VAR_12->base.keylen != VAR_15) {
            FUNC_0(VAR_0, VAR_9);
            return 0;
        }
    }
    return 1;
}
