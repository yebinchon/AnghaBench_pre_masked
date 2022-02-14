
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int tmpbuf ;
struct TYPE_7__ {int key_len; int key; int digest_algo; int iter; int mode; } ;
struct TYPE_6__ {int s2k_cipher_algo; int cipher_algo; int use_sess_key; TYPE_2__ s2k; int sess_key_len; int sess_key; int sym_key_len; int sym_key; int s2k_digest_algo; int s2k_count; int s2k_mode; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_Context ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int,int ,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,int,int**,int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(PGP_Context *VAR_2, PullFilter *VAR_3)
{
 uint8 *VAR_4;
 int VAR_5;
 uint8 VAR_6[VAR_0 + 2];
 uint8 VAR_7;

 FUNC_0(VAR_3, VAR_7);
 FUNC_0(VAR_3, VAR_2->s2k_cipher_algo);
 if (VAR_7 != 4)
 {
  FUNC_6("bad key pkt ver");
  return VAR_1;
 }




 VAR_5 = FUNC_4(VAR_3, &VAR_2->s2k);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_2->s2k_mode = VAR_2->s2k.mode;
 VAR_2->s2k_count = FUNC_8(VAR_2->s2k.iter);
 VAR_2->s2k_digest_algo = VAR_2->s2k.digest_algo;




 VAR_5 = FUNC_3(&VAR_2->s2k, VAR_2->s2k_cipher_algo,
        VAR_2->sym_key, VAR_2->sym_key_len);
 if (VAR_5 < 0)
  return VAR_5;




 VAR_5 = FUNC_5(VAR_3, VAR_0 + 2, &VAR_4, VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 == 0)
 {



  FUNC_2(VAR_2->sess_key, VAR_2->s2k.key, VAR_2->s2k.key_len);
  VAR_2->sess_key_len = VAR_2->s2k.key_len;
  VAR_2->cipher_algo = VAR_2->s2k_cipher_algo;
  VAR_5 = 0;
  VAR_2->use_sess_key = 0;
 }
 else
 {



  if (VAR_5 < 17 || VAR_5 > VAR_0 + 1)
  {
   FUNC_6("expect key, but bad data");
   return VAR_1;
  }
  VAR_2->use_sess_key = 1;
  VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_5);
 }

 FUNC_7(VAR_6, 0, sizeof(VAR_6));
 return VAR_5;
}
