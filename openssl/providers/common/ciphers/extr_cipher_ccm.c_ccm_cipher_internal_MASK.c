
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ tls_aad_len; int tag_set; scalar_t__ len_set; scalar_t__ iv_set; int m; int buf; scalar_t__ enc; int key_set; TYPE_1__* hw; } ;
struct TYPE_9__ {int (* auth_decrypt ) (TYPE_2__*,unsigned char const*,unsigned char*,size_t,int ,int ) ;int (* auth_encrypt ) (TYPE_2__*,unsigned char const*,unsigned char*,size_t,int *,int ) ;int (* setaad ) (TYPE_2__*,unsigned char const*,size_t) ;} ;
typedef TYPE_1__ PROV_CCM_HW ;
typedef TYPE_2__ PROV_CCM_CTX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,size_t*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_2__*,unsigned char const*,size_t) ;
 int FUNC_3 (TYPE_2__*,unsigned char const*,unsigned char*,size_t,int *,int ) ;
 int FUNC_4 (TYPE_2__*,unsigned char const*,unsigned char*,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_5(PROV_CCM_CTX *VAR_1, unsigned char *VAR_2,
                               size_t *VAR_3, const unsigned char *VAR_4,
                               size_t VAR_5)
{
    int VAR_6 = 0;
    size_t VAR_7 = 0;
    const PROV_CCM_HW *VAR_8 = VAR_1->hw;


    if (!VAR_1->key_set)
        return 0;

    if (VAR_1->tls_aad_len != VAR_0)
        return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);


    if (VAR_4 == ((void*)0) && VAR_2 != ((void*)0))
        goto finish;

    if (!VAR_1->iv_set)
        goto err;

    if (VAR_2 == ((void*)0)) {
        if (VAR_4 == ((void*)0)) {
            if (!FUNC_0(VAR_1, VAR_5))
                goto err;
        } else {

            if (!VAR_1->len_set && VAR_5)
                goto err;
            if (!VAR_8->setaad(VAR_1, VAR_4, VAR_5))
                goto err;
        }
    } else {

        if (!VAR_1->len_set && !FUNC_0(VAR_1, VAR_5))
            goto err;

        if (VAR_1->enc) {
            if (!VAR_8->auth_encrypt(VAR_1, VAR_4, VAR_2, VAR_5, ((void*)0), 0))
                goto err;
            VAR_1->tag_set = 1;
        } else {

            if (!VAR_1->tag_set)
                goto err;

            if (!VAR_8->auth_decrypt(VAR_1, VAR_4, VAR_2, VAR_5, VAR_1->buf, VAR_1->m))
                goto err;

            VAR_1->iv_set = 0;
            VAR_1->tag_set = 0;
            VAR_1->len_set = 0;
        }
    }
    VAR_7 = VAR_5;
finish:
    VAR_6 = 1;
err:
    *VAR_3 = VAR_7;
    return VAR_6;
}
