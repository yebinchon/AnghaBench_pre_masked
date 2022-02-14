
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int provctx; TYPE_1__* cipher; int encrypt; } ;
struct TYPE_6__ {int (* cupdate ) (int ,unsigned char*,size_t*,int,unsigned char const*,size_t) ;int * prov; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_4 ;
 int FUNC_2 (TYPE_2__*,unsigned char*,int*,unsigned char const*,int) ;
 int FUNC_3 (int ,unsigned char*,size_t*,int,unsigned char const*,size_t) ;

int FUNC_4(EVP_CIPHER_CTX *VAR_5, unsigned char *VAR_6, int *VAR_7,
                      const unsigned char *VAR_8, int VAR_9)
{
    int VAR_10;
    size_t VAR_11;
    int VAR_12;


    if (!VAR_5->encrypt) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_5->cipher == ((void*)0)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    if (VAR_5->cipher->prov == ((void*)0))
        goto legacy;

    VAR_12 = FUNC_0(VAR_5);

    if (VAR_5->cipher->cupdate == ((void*)0) || VAR_12 < 1) {
        FUNC_1(VAR_0, VAR_3);
        return 0;
    }
    VAR_10 = VAR_5->cipher->cupdate(VAR_5->provctx, VAR_6, &VAR_11,
                               VAR_9 + (VAR_12 == 1 ? 0 : VAR_12), VAR_8,
                               (size_t)VAR_9);

    if (VAR_10) {
        if (VAR_11 > VAR_4) {
            FUNC_1(VAR_0, VAR_3);
            return 0;
        }
        *VAR_7 = VAR_11;
    }

    return VAR_10;


 legacy:

    return FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
