
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_12__ {int sess_key_len; int sess_key; int cipher_algo; TYPE_1__* pub_key; } ;
struct TYPE_11__ {int bytes; int * data; } ;
struct TYPE_10__ {int key_id; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_PubKey ;
typedef TYPE_2__ PGP_MPI ;
typedef TYPE_3__ PGP_Context ;


 int FUNC_0 (int *,int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,int *,TYPE_2__**) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_2__**) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int,int *) ;
 int FUNC_10 (char*,...) ;

int
FUNC_11(PGP_Context *VAR_5, PullFilter *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 uint8 VAR_10[8];
 PGP_PubKey *VAR_11;
 uint8 *VAR_12;
 int VAR_13;
 PGP_MPI *VAR_14;

 VAR_11 = VAR_5->pub_key;
 if (VAR_11 == ((void*)0))
 {
  FUNC_10("no pubkey?");
  return VAR_0;
 }

 FUNC_0(VAR_6, VAR_7);
 if (VAR_7 != 3)
 {
  FUNC_10("unknown pubenc_sesskey pkt ver=%d", VAR_7);
  return VAR_1;
 }




 VAR_9 = FUNC_9(VAR_6, 8, VAR_10);
 if (VAR_9 < 0)
  return VAR_9;
 if (FUNC_5(VAR_10, VAR_4, 8) != 0
  && FUNC_5(VAR_10, VAR_11->key_id, 8) != 0)
 {
  FUNC_10("key_id's does not match");
  return VAR_3;
 }




 FUNC_0(VAR_6, VAR_8);
 switch (VAR_8)
 {
  case 130:
   VAR_9 = FUNC_3(VAR_11, VAR_6, &VAR_14);
   break;
  case 129:
  case 128:
   VAR_9 = FUNC_4(VAR_11, VAR_6, &VAR_14);
   break;
  default:
   VAR_9 = VAR_2;
 }
 if (VAR_9 < 0)
  return VAR_9;




 VAR_12 = FUNC_1(VAR_14->data, VAR_14->bytes);
 if (VAR_12 == ((void*)0))
 {
  FUNC_10("check_eme_pkcs1_v15 failed");
  VAR_9 = VAR_3;
  goto out;
 }
 VAR_13 = VAR_14->bytes - (VAR_12 - VAR_14->data);

 VAR_9 = FUNC_2(VAR_12, VAR_13);
 if (VAR_9 < 0)
  goto out;




 VAR_5->cipher_algo = *VAR_12;
 VAR_5->sess_key_len = VAR_13 - 3;
 FUNC_6(VAR_5->sess_key, VAR_12 + 1, VAR_5->sess_key_len);

out:
 FUNC_8(VAR_14);
 if (VAR_9 < 0)
  return VAR_9;
 return FUNC_7(VAR_6);
}
