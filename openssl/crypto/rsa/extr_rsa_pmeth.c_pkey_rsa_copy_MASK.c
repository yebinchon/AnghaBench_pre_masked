
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {int oaep_labellen; scalar_t__ oaep_label; int saltlen; int mgf1md; int md; int pad_mode; scalar_t__ pub_exp; int nbits; } ;
typedef TYPE_1__ RSA_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(EVP_PKEY_CTX *VAR_0, const EVP_PKEY_CTX *VAR_1)
{
    RSA_PKEY_CTX *VAR_2, *VAR_3;

    if (!FUNC_3(VAR_0))
        return 0;
    VAR_3 = VAR_1->data;
    VAR_2 = VAR_0->data;
    VAR_2->nbits = VAR_3->nbits;
    if (VAR_3->pub_exp) {
        VAR_2->pub_exp = FUNC_0(VAR_3->pub_exp);
        if (!VAR_2->pub_exp)
            return 0;
    }
    VAR_2->pad_mode = VAR_3->pad_mode;
    VAR_2->md = VAR_3->md;
    VAR_2->mgf1md = VAR_3->mgf1md;
    VAR_2->saltlen = VAR_3->saltlen;
    if (VAR_3->oaep_label) {
        FUNC_1(VAR_2->oaep_label);
        VAR_2->oaep_label = FUNC_2(VAR_3->oaep_label, VAR_3->oaep_labellen);
        if (!VAR_2->oaep_label)
            return 0;
        VAR_2->oaep_labellen = VAR_3->oaep_labellen;
    }
    return 1;
}
