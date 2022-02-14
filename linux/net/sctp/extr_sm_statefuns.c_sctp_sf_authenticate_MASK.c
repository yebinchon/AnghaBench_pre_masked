
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_shared_key {int dummy; } ;
struct sctp_hmac {unsigned int hmac_len; } ;
struct TYPE_5__ {struct sctp_authhdr* auth_hdr; } ;
struct sctp_chunk {int auth; TYPE_2__* chunk_hdr; TYPE_3__* skb; TYPE_1__ subh; } ;
struct sctp_authhdr {int * hmac; int hmac_id; int shkey_id; } ;
struct sctp_auth_chunk {int dummy; } ;
struct sctp_association {scalar_t__ active_key_id; } ;
typedef enum sctp_ierror { ____Placeholder_sctp_ierror } sctp_ierror ;
typedef int __u8 ;
typedef scalar_t__ __u16 ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,unsigned int,int ) ;
 scalar_t__ FUNC_2 (int *,int *,unsigned int) ;
 int FUNC_3 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_association const*,int ) ;
 int FUNC_6 (struct sctp_association const*,TYPE_3__*,struct sctp_auth_chunk*,struct sctp_shared_key*,int ) ;
 struct sctp_hmac* FUNC_7 (scalar_t__) ;
 struct sctp_shared_key* FUNC_8 (struct sctp_association const*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static enum sctp_ierror FUNC_10(
     const struct sctp_association *VAR_7,
     struct sctp_chunk *VAR_8)
{
 struct sctp_shared_key *VAR_9 = ((void*)0);
 struct sctp_authhdr *VAR_10;
 __u8 *VAR_11, *VAR_12;
 struct sctp_hmac *VAR_13;
 unsigned int VAR_14;
 __u16 VAR_15;


 VAR_10 = (struct sctp_authhdr *)VAR_8->skb->data;
 VAR_8->subh.auth_hdr = VAR_10;
 FUNC_9(VAR_8->skb, sizeof(*VAR_10));




 if (!FUNC_5(VAR_7, VAR_10->hmac_id))
  return VAR_1;




 VAR_15 = FUNC_4(VAR_10->shkey_id);
 if (VAR_15 != VAR_7->active_key_id) {
  VAR_9 = FUNC_8(VAR_7, VAR_15);
  if (!VAR_9)
   return VAR_2;
 }




 VAR_14 = FUNC_4(VAR_8->chunk_hdr->length) -
    sizeof(struct sctp_auth_chunk);
 VAR_13 = FUNC_7(FUNC_4(VAR_10->hmac_id));
 if (VAR_14 != VAR_13->hmac_len)
  return VAR_6;
 VAR_12 = VAR_10->hmac;
 FUNC_9(VAR_8->skb, VAR_14);

 VAR_11 = FUNC_1(VAR_12, VAR_14, VAR_0);
 if (!VAR_11)
  goto nomem;

 FUNC_3(VAR_12, 0, VAR_14);

 FUNC_6(VAR_7, VAR_8->skb,
     (struct sctp_auth_chunk *)VAR_8->chunk_hdr,
     VAR_9, VAR_0);


 if (FUNC_2(VAR_11, VAR_12, VAR_14)) {
  FUNC_0(VAR_11);
  return VAR_3;
 }

 FUNC_0(VAR_11);
 VAR_8->auth = 1;

 return VAR_5;
nomem:
 return VAR_4;
}
