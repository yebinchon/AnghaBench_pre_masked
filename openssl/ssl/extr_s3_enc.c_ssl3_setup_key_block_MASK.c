
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* cipher; } ;
struct TYPE_10__ {int key_block_length; unsigned char* key_block; int * new_compression; int const* new_hash; int const* new_sym_enc; } ;
struct TYPE_12__ {int need_empty_fragments; TYPE_1__ tmp; } ;
struct TYPE_13__ {int options; TYPE_3__ s3; TYPE_5__* session; } ;
struct TYPE_11__ {scalar_t__ algorithm_enc; } ;
typedef int SSL_COMP ;
typedef TYPE_4__ SSL ;
typedef int EVP_MD ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 unsigned char* FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,unsigned char*,int) ;
 int FUNC_7 (TYPE_5__*,int const**,int const**,int *,int *,int **,int ) ;

int FUNC_8(SSL *VAR_7)
{
    unsigned char *VAR_8;
    const EVP_CIPHER *VAR_9;
    const EVP_MD *VAR_10;
    int VAR_11;
    int VAR_12 = 0;
    SSL_COMP *VAR_13;

    if (VAR_7->s3.tmp.key_block_length != 0)
        return 1;

    if (!FUNC_7(VAR_7->session, &VAR_9, &VAR_10, ((void*)0), ((void*)0), &VAR_13, 0)) {
        FUNC_4(VAR_7, VAR_1, VAR_2,
                 VAR_5);
        return 0;
    }

    VAR_7->s3.tmp.new_sym_enc = VAR_9;
    VAR_7->s3.tmp.new_hash = VAR_10;



    VAR_7->s3.tmp.new_compression = VAR_13;


    VAR_11 = FUNC_2(VAR_10);
    if (VAR_11 < 0)
        return 0;

    VAR_11 = FUNC_1(VAR_9) + VAR_11 + FUNC_0(VAR_9);
    VAR_11 *= 2;

    FUNC_5(VAR_7);

    if ((VAR_8 = FUNC_3(VAR_11)) == ((void*)0)) {
        FUNC_4(VAR_7, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    VAR_7->s3.tmp.key_block_length = VAR_11;
    VAR_7->s3.tmp.key_block = VAR_8;


    VAR_12 = FUNC_6(VAR_7, VAR_8, VAR_11);

    if (!(VAR_7->options & VAR_3)) {




        VAR_7->s3.need_empty_fragments = 1;

        if (VAR_7->session->cipher != ((void*)0)) {
            if (VAR_7->session->cipher->algorithm_enc == VAR_6)
                VAR_7->s3.need_empty_fragments = 0;


            if (VAR_7->session->cipher->algorithm_enc == VAR_4)
                VAR_7->s3.need_empty_fragments = 0;

        }
    }

    return VAR_12;
}
