
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s2k_cipher_algo; scalar_t__ cipher_algo; int sym_key_len; int sym_key; int s2k; int s2k_count; int s2k_digest_algo; int s2k_mode; } ;
typedef TYPE_1__ PGP_Context ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_2(PGP_Context *VAR_0)
{
 int VAR_1;

 if (VAR_0->s2k_cipher_algo < 0)
  VAR_0->s2k_cipher_algo = VAR_0->cipher_algo;

 VAR_1 = FUNC_0(&VAR_0->s2k, VAR_0->s2k_mode, VAR_0->s2k_digest_algo, VAR_0->s2k_count);
 if (VAR_1 < 0)
  return VAR_1;

 return FUNC_1(&VAR_0->s2k, VAR_0->s2k_cipher_algo,
         VAR_0->sym_key, VAR_0->sym_key_len);
}
