
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int mode; int iter; int salt; int digest_algo; } ;
struct TYPE_6__ {scalar_t__ use_sess_key; TYPE_1__ s2k; int s2k_cipher_algo; } ;
typedef int PushFilter ;
typedef TYPE_2__ PGP_Context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_5(PGP_Context *VAR_1, PushFilter *VAR_2)
{
 uint8 VAR_3[256];
 int VAR_4;
 int VAR_5;
 uint8 *VAR_6 = VAR_3;

 *VAR_6++ = 4;
 *VAR_6++ = VAR_1->s2k_cipher_algo;

 *VAR_6++ = VAR_1->s2k.mode;
 *VAR_6++ = VAR_1->s2k.digest_algo;
 if (VAR_1->s2k.mode > 0)
 {
  FUNC_0(VAR_6, VAR_1->s2k.salt, 8);
  VAR_6 += 8;
 }
 if (VAR_1->s2k.mode == 3)
  *VAR_6++ = VAR_1->s2k.iter;

 if (VAR_1->use_sess_key)
 {
  VAR_5 = FUNC_3(VAR_1, VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6 += VAR_5;
 }

 VAR_4 = VAR_6 - VAR_3;
 VAR_5 = FUNC_4(VAR_2, VAR_0, VAR_4);
 if (VAR_5 >= 0)
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_3, 0, VAR_4);
 return VAR_5;
}
