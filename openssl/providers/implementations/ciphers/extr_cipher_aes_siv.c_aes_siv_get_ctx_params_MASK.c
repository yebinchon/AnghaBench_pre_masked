
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ data_type; scalar_t__ data_size; } ;
struct TYPE_10__ {int byte; } ;
struct TYPE_11__ {TYPE_1__ tag; } ;
struct TYPE_12__ {scalar_t__ taglen; scalar_t__ keylen; int enc; TYPE_2__ siv; } ;
typedef TYPE_2__ SIV128_CONTEXT ;
typedef TYPE_3__ PROV_AES_SIV_CTX ;
typedef TYPE_4__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int *,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(void *VAR_6, OSSL_PARAM VAR_7[])
{
    PROV_AES_SIV_CTX *VAR_8 = (PROV_AES_SIV_CTX *)VAR_6;
    SIV128_CONTEXT *VAR_9 = &VAR_8->siv;
    OSSL_PARAM *VAR_10;

    VAR_10 = FUNC_1(VAR_7, VAR_1);
    if (VAR_10 != ((void*)0) && VAR_10->data_type == VAR_4) {
        if (!VAR_8->enc
            || VAR_10->data_size != VAR_8->taglen
            || !FUNC_2(VAR_10, &VAR_9->tag.byte, VAR_8->taglen)) {
            FUNC_0(VAR_0, VAR_5);
            return 0;
        }
    }
    VAR_10 = FUNC_1(VAR_7, VAR_2);
    if (VAR_10 != ((void*)0) && !FUNC_3(VAR_10, VAR_8->taglen)) {
        FUNC_0(VAR_0, VAR_5);
        return 0;
    }
    VAR_10 = FUNC_1(VAR_7, VAR_3);
    if (VAR_10 != ((void*)0) && !FUNC_3(VAR_10, VAR_8->keylen)) {
        FUNC_0(VAR_0, VAR_5);
        return 0;
    }
    return 1;
}
