
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int cipher; } ;
struct TYPE_7__ {int const* new_hash; int const* new_sym_enc; int new_cipher; } ;
struct TYPE_8__ {TYPE_1__ tmp; } ;
struct TYPE_9__ {TYPE_2__ s3; TYPE_5__* session; } ;
typedef TYPE_3__ SSL ;
typedef int EVP_MD ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_5__*,int const**,int const**,int *,int *,int *,int ) ;

int FUNC_2(SSL *VAR_3)
{
    const EVP_CIPHER *VAR_4;
    const EVP_MD *VAR_5;

    VAR_3->session->cipher = VAR_3->s3.tmp.new_cipher;
    if (!FUNC_1(VAR_3->session, &VAR_4, &VAR_5, ((void*)0), ((void*)0), ((void*)0), 0)) {
        FUNC_0(VAR_3, VAR_0, VAR_1,
                 VAR_2);
        return 0;
    }

    VAR_3->s3.tmp.new_sym_enc = VAR_4;
    VAR_3->s3.tmp.new_hash = VAR_5;

    return 1;
}
