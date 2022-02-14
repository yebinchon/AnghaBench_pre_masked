
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ablkcipher {int dummy; } ;
struct aes_ctx {int * nonce; } ;
struct ablkcipher_request {int * info; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct aes_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (struct aes_ctx*,struct ablkcipher_request*,int *,int ,int) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(struct ablkcipher_request *VAR_3)
{
    struct crypto_ablkcipher *VAR_4 = FUNC_2(VAR_3);
    struct aes_ctx *VAR_5 = FUNC_1(VAR_4);
    int VAR_6;
    u8 *VAR_7 = VAR_3->info;
    u8 VAR_8[16];

    FUNC_4(VAR_8, VAR_5->nonce, VAR_2);
    FUNC_4(VAR_8 + VAR_2, VAR_7, VAR_1);


    *(__be32 *)(VAR_8 + VAR_2 + VAR_1) =
        FUNC_0(1);

    VAR_3->info = VAR_8;
    VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_3->info, VAR_0, 4);
    VAR_3->info = VAR_7;
    return VAR_6;
}
