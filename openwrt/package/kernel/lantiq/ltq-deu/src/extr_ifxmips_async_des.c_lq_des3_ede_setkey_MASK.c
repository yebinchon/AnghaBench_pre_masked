
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct des_ctx {unsigned int controlr_M; unsigned int key_length; scalar_t__ expkey; } ;
struct crypto_ablkcipher {int dummy; } ;


 struct des_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_ablkcipher *VAR_0, const u8 *VAR_1,
                      unsigned int VAR_2)
{
    struct des_ctx *VAR_3 = FUNC_0(VAR_0);



    VAR_3->controlr_M = VAR_2/8 + 1;
    VAR_3->key_length = VAR_2;

    FUNC_1 ((u8 *) (VAR_3->expkey), VAR_1, VAR_2);

    return 0;
}
