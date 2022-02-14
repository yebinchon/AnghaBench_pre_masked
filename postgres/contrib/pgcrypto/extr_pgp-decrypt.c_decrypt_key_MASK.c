
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int key_len; int key; } ;
struct TYPE_5__ {int sess_key_len; int cipher_algo; int * sess_key; TYPE_1__ s2k; int s2k_cipher_algo; } ;
typedef TYPE_2__ PGP_Context ;
typedef int PGP_CFB ;


 int VAR_0 ;
 int FUNC_0 (int **,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *,int const*,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int,int) ;

__attribute__((used)) static int
FUNC_5(PGP_Context *VAR_1, const uint8 *VAR_2, int VAR_3)
{
 int VAR_4;
 uint8 VAR_5;
 PGP_CFB *VAR_6;

 VAR_4 = FUNC_0(&VAR_6, VAR_1->s2k_cipher_algo,
       VAR_1->s2k.key, VAR_1->s2k.key_len, 0, ((void*)0));
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_6, VAR_2, 1, &VAR_5);
 VAR_2++;
 VAR_3--;

 FUNC_1(VAR_6, VAR_2, VAR_3, VAR_1->sess_key);
 FUNC_2(VAR_6);
 VAR_1->sess_key_len = VAR_3;
 VAR_1->cipher_algo = VAR_5;

 if (FUNC_3(VAR_5) != VAR_3)
 {
  FUNC_4("sesskey bad len: algo=%d, expected=%d, got=%d",
     VAR_5, FUNC_3(VAR_5), VAR_3);
  return VAR_0;
 }
 return 0;
}
