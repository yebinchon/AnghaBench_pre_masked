
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ data_type; int data_size; int * data; } ;
struct TYPE_9__ {int tag_set; int m; size_t l; size_t tls_aad_pad_sz; int buf; scalar_t__ enc; } ;
typedef TYPE_1__ PROV_CCM_CTX ;
typedef TYPE_2__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__ const*,size_t*) ;
 TYPE_2__* FUNC_2 (TYPE_2__ const*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_3 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (int ,int *,int) ;

int FUNC_6(void *VAR_11, const OSSL_PARAM VAR_12[])
{
    PROV_CCM_CTX *VAR_13 = (PROV_CCM_CTX *)VAR_11;
    const OSSL_PARAM *VAR_14;
    size_t VAR_15;

    VAR_14 = FUNC_2(VAR_12, VAR_2);
    if (VAR_14 != ((void*)0)) {
        if (VAR_14->data_type != VAR_5) {
            FUNC_0(VAR_0, VAR_6);
            return 0;
        }
        if ((VAR_14->data_size & 1) || (VAR_14->data_size < 4) || VAR_14->data_size > 16) {
            FUNC_0(VAR_0, VAR_9);
            return 0;
        }

        if (VAR_14->data != ((void*)0)) {
            if (VAR_13->enc) {
                FUNC_0(VAR_0, VAR_10);
                return 0;
            }
            FUNC_5(VAR_13->buf, VAR_14->data, VAR_14->data_size);
            VAR_13->tag_set = 1;
        }
        VAR_13->m = VAR_14->data_size;
    }

    VAR_14 = FUNC_2(VAR_12, VAR_1);
    if (VAR_14 != ((void*)0)) {
        size_t VAR_16;

        if (!FUNC_1(VAR_14, &VAR_15)) {
            FUNC_0(VAR_0, VAR_6);
            return 0;
        }
        VAR_16 = 15 - VAR_15;
        if (VAR_16 < 2 || VAR_16 > 8) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
        VAR_13->l = VAR_16;
    }

    VAR_14 = FUNC_2(VAR_12, VAR_3);
    if (VAR_14 != ((void*)0)) {
        if (VAR_14->data_type != VAR_5) {
            FUNC_0(VAR_0, VAR_6);
            return 0;
        }
        VAR_15 = FUNC_3(VAR_13, VAR_14->data, VAR_14->data_size);
        if (VAR_15 == 0) {
            FUNC_0(VAR_0, VAR_7);
            return 0;
        }
        VAR_13->tls_aad_pad_sz = VAR_15;
    }

    VAR_14 = FUNC_2(VAR_12, VAR_4);
    if (VAR_14 != ((void*)0)) {
        if (VAR_14->data_type != VAR_5) {
            FUNC_0(VAR_0, VAR_6);
            return 0;
        }
        if (FUNC_4(VAR_13, VAR_14->data, VAR_14->data_size) == 0) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
    }

    return 1;
}
