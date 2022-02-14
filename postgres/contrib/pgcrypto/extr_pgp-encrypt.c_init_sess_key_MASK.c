
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key_len; int key; } ;
struct TYPE_5__ {TYPE_1__ s2k; int sess_key; int sess_key_len; int cipher_algo; scalar_t__ pub_key; scalar_t__ use_sess_key; } ;
typedef TYPE_2__ PGP_Context ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(PGP_Context *VAR_1)
{
 if (VAR_1->use_sess_key || VAR_1->pub_key)
 {
  VAR_1->sess_key_len = FUNC_2(VAR_1->cipher_algo);
  if (!FUNC_1(VAR_1->sess_key, VAR_1->sess_key_len))
   return VAR_0;
 }
 else
 {
  VAR_1->sess_key_len = VAR_1->s2k.key_len;
  FUNC_0(VAR_1->sess_key, VAR_1->s2k.key, VAR_1->s2k.key_len);
 }

 return 0;
}
