
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t m; unsigned char const* buf; unsigned char* iv; TYPE_1__* hw; scalar_t__ enc; int tls_aad_len; } ;
struct TYPE_8__ {int (* auth_decrypt ) (TYPE_2__*,unsigned char const*,unsigned char*,size_t,unsigned char*,size_t) ;int (* auth_encrypt ) (TYPE_2__*,unsigned char const*,unsigned char*,size_t,unsigned char*,size_t) ;int (* setaad ) (TYPE_2__*,unsigned char const*,int ) ;} ;
typedef TYPE_2__ PROV_CCM_CTX ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_2__*,unsigned char const*,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned char const*,unsigned char*,size_t,unsigned char*,size_t) ;
 int FUNC_4 (TYPE_2__*,unsigned char const*,unsigned char*,size_t,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5(PROV_CCM_CTX *VAR_2,
                          unsigned char *VAR_3, size_t *VAR_4,
                          const unsigned char *VAR_5, size_t VAR_6)
{
    int VAR_7 = 0;
    size_t VAR_8 = 0;


    if (VAR_3 != VAR_5 || VAR_6 < (VAR_0 + (size_t)VAR_2->m))
        goto err;


    if (VAR_2->enc)
        FUNC_1(VAR_3, VAR_2->buf, VAR_0);

    FUNC_1(VAR_2->iv + VAR_1, VAR_5, VAR_0);

    VAR_6 -= VAR_0 + VAR_2->m;
    if (!FUNC_0(VAR_2, VAR_6))
        goto err;


    if (!VAR_2->hw->setaad(VAR_2, VAR_2->buf, VAR_2->tls_aad_len))
        goto err;


    VAR_5 += VAR_0;
    VAR_3 += VAR_0;
    if (VAR_2->enc) {
        if (!VAR_2->hw->auth_encrypt(VAR_2, VAR_5, VAR_3, VAR_6, VAR_3 + VAR_6, VAR_2->m))
            goto err;
        VAR_8 = VAR_6 + VAR_0 + VAR_2->m;
    } else {
        if (!VAR_2->hw->auth_decrypt(VAR_2, VAR_5, VAR_3, VAR_6,
                                   (unsigned char *)VAR_5 + VAR_6, VAR_2->m))
            goto err;
        VAR_8 = VAR_6;
    }
    VAR_7 = 1;
err:
    *VAR_4 = VAR_8;
    return VAR_7;
}
