
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int key_len; int key; } ;
struct TYPE_5__ {int sess_key_len; int * sess_key; TYPE_1__ s2k; int s2k_cipher_algo; int cipher_algo; } ;
typedef TYPE_2__ PGP_Context ;
typedef int PGP_CFB ;


 int FUNC_0 (int **,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *,int *,int,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(PGP_Context *VAR_0, uint8 *VAR_1)
{
 int VAR_2;
 PGP_CFB *VAR_3;
 uint8 VAR_4 = VAR_0->cipher_algo;

 VAR_2 = FUNC_0(&VAR_3, VAR_0->s2k_cipher_algo,
       VAR_0->s2k.key, VAR_0->s2k.key_len, 0, ((void*)0));
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_1(VAR_3, &VAR_4, 1, VAR_1);
 FUNC_1(VAR_3, VAR_0->sess_key, VAR_0->sess_key_len, VAR_1 + 1);

 FUNC_2(VAR_3);
 return VAR_0->sess_key_len + 1;
}
