
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct sctp_shared_key {int dummy; } ;
struct TYPE_8__ {int * hmac; int hmac_id; int shkey_id; } ;
struct sctp_auth_chunk {TYPE_2__ auth_hdr; } ;
struct sctp_auth_bytes {int len; int * data; } ;
struct sctp_association {scalar_t__ active_key_id; TYPE_1__* ep; struct sctp_auth_bytes* asoc_shared_key; } ;
struct crypto_shash {int dummy; } ;
typedef int gfp_t ;
typedef int __u8 ;
typedef scalar_t__ __u16 ;
struct TYPE_9__ {struct crypto_shash* tfm; } ;
struct TYPE_7__ {struct crypto_shash** auth_hmacs; } ;


 int FUNC_0 (TYPE_3__*,struct crypto_shash*) ;
 int FUNC_1 (TYPE_3__*,int *,int,int *) ;
 scalar_t__ FUNC_2 (struct crypto_shash*,int *,int ) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 struct sctp_auth_bytes* FUNC_4 (struct sctp_association const*,struct sctp_shared_key*,int ) ;
 int FUNC_5 (struct sctp_auth_bytes*) ;
 int FUNC_6 (TYPE_3__*) ;
 unsigned char* FUNC_7 (struct sk_buff*) ;

void FUNC_8(const struct sctp_association *VAR_1,
         struct sk_buff *VAR_2, struct sctp_auth_chunk *VAR_3,
         struct sctp_shared_key *VAR_4, gfp_t VAR_5)
{
 struct sctp_auth_bytes *VAR_6;
 struct crypto_shash *VAR_7;
 __u16 VAR_8, VAR_9;
 unsigned char *VAR_10;
 int VAR_11 = 0;
 __u8 *VAR_12;





 VAR_8 = FUNC_3(VAR_3->auth_hdr.shkey_id);
 VAR_9 = FUNC_3(VAR_3->auth_hdr.hmac_id);

 if (VAR_8 == VAR_1->active_key_id)
  VAR_6 = VAR_1->asoc_shared_key;
 else {

  VAR_6 = FUNC_4(VAR_1, VAR_4, VAR_5);
  if (!VAR_6)
   return;

  VAR_11 = 1;
 }


 VAR_10 = FUNC_7(VAR_2);

 VAR_7 = VAR_1->ep->auth_hmacs[VAR_9];

 VAR_12 = VAR_3->auth_hdr.hmac;
 if (FUNC_2(VAR_7, &VAR_6->data[0], VAR_6->len))
  goto free;

 {
  FUNC_0(VAR_0, VAR_7);

  VAR_0->tfm = VAR_7;
  FUNC_1(VAR_0, (u8 *)VAR_3,
        VAR_10 - (unsigned char *)VAR_3, VAR_12);
  FUNC_6(VAR_0);
 }

free:
 if (VAR_11)
  FUNC_5(VAR_6);
}
