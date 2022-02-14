
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ tls_aad_len; scalar_t__ iv_state; scalar_t__ taglen; int buf; int enc; int ivlen; int iv; int key_set; TYPE_1__* hw; } ;
struct TYPE_10__ {int (* cipherfinal ) (TYPE_2__*,int ) ;int (* cipherupdate ) (TYPE_2__*,unsigned char const*,size_t,unsigned char*) ;int (* aadupdate ) (TYPE_2__*,unsigned char const*,size_t) ;int (* setiv ) (TYPE_2__*,int ,int ) ;} ;
typedef TYPE_1__ PROV_GCM_HW ;
typedef TYPE_2__ PROV_GCM_CTX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,size_t*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned char const*,size_t) ;
 int FUNC_4 (TYPE_2__*,unsigned char const*,size_t,unsigned char*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(PROV_GCM_CTX *VAR_5, unsigned char *VAR_6,
                               size_t *VAR_7, const unsigned char *VAR_8,
                               size_t VAR_9)
{
    size_t VAR_10 = 0;
    int VAR_11 = 0;
    const PROV_GCM_HW *VAR_12 = VAR_5->hw;

    if (VAR_5->tls_aad_len != VAR_4)
        return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

    if (!VAR_5->key_set || VAR_5->iv_state == VAR_2)
        goto err;







    if (VAR_5->iv_state == VAR_3) {
        if (!VAR_5->enc || !FUNC_0(VAR_5, 0))
            goto err;
    }

    if (VAR_5->iv_state == VAR_0) {
        if (!VAR_12->setiv(VAR_5, VAR_5->iv, VAR_5->ivlen))
            goto err;
        VAR_5->iv_state = VAR_1;
    }

    if (VAR_8 != ((void*)0)) {

        if (VAR_6 == ((void*)0)) {
            if (!VAR_12->aadupdate(VAR_5, VAR_8, VAR_9))
                goto err;
        } else {

            if (!VAR_12->cipherupdate(VAR_5, VAR_8, VAR_9, VAR_6))
                goto err;
        }
    } else {

        if (!VAR_5->enc && VAR_5->taglen == VAR_4)
            goto err;
        if (!VAR_12->cipherfinal(VAR_5, VAR_5->buf))
            goto err;
        VAR_5->iv_state = VAR_2;
        goto finish;
    }
    VAR_10 = VAR_9;
finish:
    VAR_11 = 1;
err:
    *VAR_7 = VAR_10;
    return VAR_11;
}
