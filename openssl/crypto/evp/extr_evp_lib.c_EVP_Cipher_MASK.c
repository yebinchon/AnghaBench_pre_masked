
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* cipher; int provctx; } ;
struct TYPE_6__ {int (* cupdate ) (int ,unsigned char*,size_t*,unsigned int,unsigned char const*,size_t) ;int (* cfinal ) (int ,unsigned char*,size_t*,size_t) ;int (* do_cipher ) (TYPE_2__*,unsigned char*,unsigned char const*,unsigned int) ;scalar_t__ (* ccipher ) (int ,unsigned char*,size_t*,unsigned int,unsigned char const*,size_t) ;int * prov; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 size_t FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,unsigned char*,size_t*,unsigned int,unsigned char const*,size_t) ;
 int FUNC_2 (int ,unsigned char*,size_t*,unsigned int,unsigned char const*,size_t) ;
 int FUNC_3 (int ,unsigned char*,size_t*,size_t) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,unsigned char const*,unsigned int) ;

int FUNC_5(EVP_CIPHER_CTX *VAR_0, unsigned char *VAR_1,
               const unsigned char *VAR_2, unsigned int VAR_3)
{
    if (VAR_0->cipher->prov != ((void*)0)) {







        int VAR_4 = -1;
        size_t VAR_5 = 0;
        size_t VAR_6 = FUNC_0(VAR_0);

        if (VAR_0->cipher->ccipher != ((void*)0))
            VAR_4 = VAR_0->cipher->ccipher(VAR_0->provctx, VAR_1, &VAR_5,
                                        VAR_3 + (VAR_6 == 1 ? 0 : VAR_6),
                                        VAR_2, (size_t)VAR_3)
                ? (int)VAR_5 : -1;
        else if (VAR_2 != ((void*)0))
            VAR_4 = VAR_0->cipher->cupdate(VAR_0->provctx, VAR_1, &VAR_5,
                                       VAR_3 + (VAR_6 == 1 ? 0 : VAR_6),
                                       VAR_2, (size_t)VAR_3);
        else
            VAR_4 = VAR_0->cipher->cfinal(VAR_0->provctx, VAR_1, &VAR_5,
                                      VAR_6 == 1 ? 0 : VAR_6);

        return VAR_4;
    }

    return VAR_0->cipher->do_cipher(VAR_0, VAR_1, VAR_2, VAR_3);
}
