
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_hmac {scalar_t__ hmac_len; scalar_t__ hmac_id; } ;
struct TYPE_3__ {int auth_hdr; } ;
struct sctp_chunk {int skb; int chunk_end; TYPE_2__* chunk_hdr; TYPE_1__ subh; } ;
struct sctp_authhdr {void* shkey_id; void* hmac_id; } ;
struct sctp_association {int dummy; } ;
typedef int auth_hdr ;
typedef scalar_t__ __u16 ;
struct TYPE_4__ {void* length; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct sctp_chunk*,int,struct sctp_authhdr*) ;
 struct sctp_hmac* FUNC_3 (struct sctp_association const*) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association const*,int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

struct sctp_chunk *FUNC_8(const struct sctp_association *VAR_2,
      __u16 VAR_3)
{
 struct sctp_authhdr VAR_4;
 struct sctp_hmac *VAR_5;
 struct sctp_chunk *VAR_6;


 VAR_5 = FUNC_3(VAR_2);
 if (FUNC_7(!VAR_5))
  return ((void*)0);

 VAR_6 = FUNC_4(VAR_2, VAR_1, 0,
       VAR_5->hmac_len + sizeof(VAR_4),
       VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_4.hmac_id = FUNC_0(VAR_5->hmac_id);
 VAR_4.shkey_id = FUNC_0(VAR_3);

 VAR_6->subh.auth_hdr = FUNC_2(VAR_6, sizeof(VAR_4),
       &VAR_4);

 FUNC_5(VAR_6->skb, VAR_5->hmac_len);


 VAR_6->chunk_hdr->length =
  FUNC_0(FUNC_1(VAR_6->chunk_hdr->length) + VAR_5->hmac_len);
 VAR_6->chunk_end = FUNC_6(VAR_6->skb);

 return VAR_6;
}
