
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ data_size; scalar_t__ data_type; int data; } ;
struct TYPE_9__ {scalar_t__ ivlen; scalar_t__ keylen; int enc; int oiv; } ;
struct TYPE_10__ {scalar_t__ taglen; int tag; TYPE_1__ base; } ;
typedef TYPE_2__ PROV_AES_OCB_CTX ;
typedef TYPE_3__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(void *VAR_11, OSSL_PARAM VAR_12[])
{
    PROV_AES_OCB_CTX *VAR_13 = (PROV_AES_OCB_CTX *)VAR_11;
    OSSL_PARAM *VAR_14;

    VAR_14 = FUNC_1(VAR_12, VAR_4);
    if (VAR_14 != ((void*)0) && !FUNC_3(VAR_14, VAR_13->base.ivlen)) {
        FUNC_0(VAR_0, VAR_8);
        return 0;
    }
    VAR_14 = FUNC_1(VAR_12, VAR_5);
    if (VAR_14 != ((void*)0) && !FUNC_3(VAR_14, VAR_13->base.keylen)) {
        FUNC_0(VAR_0, VAR_8);
        return 0;
    }
    VAR_14 = FUNC_1(VAR_12, VAR_2);
    if (VAR_14 != ((void*)0)) {
        if (!FUNC_3(VAR_14, VAR_13->taglen)) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
    }

    VAR_14 = FUNC_1(VAR_12, VAR_3);
    if (VAR_14 != ((void*)0)) {
        if (VAR_13->base.ivlen != VAR_14->data_size) {
            FUNC_0(VAR_0, VAR_9);
            return 0;
        }
        if (!FUNC_2(VAR_14, VAR_13->base.oiv, VAR_13->base.ivlen)) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
    }
    VAR_14 = FUNC_1(VAR_12, VAR_1);
    if (VAR_14 != ((void*)0)) {
        if (VAR_14->data_type != VAR_6) {
            FUNC_0(VAR_0, VAR_7);
            return 0;
        }
        if (!VAR_13->base.enc || VAR_14->data_size != VAR_13->taglen) {
            FUNC_0(VAR_0, VAR_10);
            return 0;
        }
        FUNC_4(VAR_14->data, VAR_13->tag, VAR_13->taglen);
    }
    return 1;
}
