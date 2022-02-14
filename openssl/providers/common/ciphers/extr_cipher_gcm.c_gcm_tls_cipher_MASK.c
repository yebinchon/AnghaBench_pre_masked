
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tls_enc_records; scalar_t__ iv_gen; unsigned char* iv; size_t ivlen; int tls_aad_len; int iv_state; scalar_t__ enc; int buf; TYPE_1__* hw; int key_set; } ;
struct TYPE_7__ {int (* oneshot ) (TYPE_2__*,int ,int ,unsigned char const*,size_t,unsigned char*,unsigned char*,size_t) ;int (* setiv ) (TYPE_2__*,unsigned char*,size_t) ;} ;
typedef TYPE_2__ PROV_GCM_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned char*,size_t) ;
 int VAR_6 ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,size_t) ;
 int FUNC_5 (TYPE_2__*,unsigned char*,size_t) ;
 int FUNC_6 (TYPE_2__*,int ,int ,unsigned char const*,size_t,unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_7(PROV_GCM_CTX *VAR_7, unsigned char *VAR_8, size_t *VAR_9,
                          const unsigned char *VAR_10, size_t VAR_11)
{
    int VAR_12 = 0;
    size_t VAR_13 = VAR_1;
    size_t VAR_14 = 0;
    unsigned char *VAR_15 = ((void*)0);

    if (!VAR_7->key_set)
        goto err;


    if (VAR_8 != VAR_10 || VAR_11 < (VAR_1 + VAR_2))
        goto err;







    if (VAR_7->enc && ++VAR_7->tls_enc_records == 0) {
        FUNC_0(VAR_0, VAR_3);
        goto err;
    }

    if (VAR_7->iv_gen == 0)
        goto err;




    if (VAR_7->enc) {
        if (!VAR_7->hw->setiv(VAR_7, VAR_7->iv, VAR_7->ivlen))
            goto err;
        if (VAR_13 > VAR_7->ivlen)
            VAR_13 = VAR_7->ivlen;
        FUNC_3(VAR_8, VAR_7->iv + VAR_7->ivlen - VAR_13, VAR_13);




        FUNC_2(VAR_7->iv + VAR_7->ivlen - 8);
    } else {
        FUNC_3(VAR_7->iv + VAR_7->ivlen - VAR_13, VAR_8, VAR_13);
        if (!VAR_7->hw->setiv(VAR_7, VAR_7->iv, VAR_7->ivlen))
            goto err;
    }
    VAR_7->iv_state = VAR_4;


    VAR_10 += VAR_1;
    VAR_8 += VAR_1;
    VAR_11 -= VAR_1 + VAR_2;

    VAR_15 = VAR_7->enc ? VAR_8 + VAR_11 : (unsigned char *)VAR_10 + VAR_11;
    if (!VAR_7->hw->oneshot(VAR_7, VAR_7->buf, VAR_7->tls_aad_len, VAR_10, VAR_11, VAR_8, VAR_15,
                          VAR_2)) {
        if (!VAR_7->enc)
            FUNC_1(VAR_8, VAR_11);
        goto err;
    }
    if (VAR_7->enc)
        VAR_14 = VAR_11 + VAR_1 + VAR_2;
    else
        VAR_14 = VAR_11;

    VAR_12 = 1;
err:
    VAR_7->iv_state = VAR_5;
    VAR_7->tls_aad_len = VAR_6;
    *VAR_9 = VAR_14;
    return VAR_12;
}
