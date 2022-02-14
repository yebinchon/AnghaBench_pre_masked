
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int truesize; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {TYPE_1__* chunk_hdr; int skb; } ;
struct sctp_association {int dummy; } ;
struct sctp_assoc_change {int sac_assoc_id; void* sac_inbound_streams; void* sac_outbound_streams; void* sac_error; int sac_length; scalar_t__ sac_flags; void* sac_state; int sac_type; } ;
typedef int gfp_t ;
typedef void* __u16 ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_association const*) ;
 struct sk_buff* FUNC_2 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sctp_ulpevent*,int ,int ) ;
 struct sctp_ulpevent* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct sctp_ulpevent*,struct sctp_association const*) ;
 struct sk_buff* FUNC_7 (int ,int,int ,int ) ;
 struct sctp_assoc_change* FUNC_8 (struct sk_buff*,int) ;
 struct sctp_assoc_change* FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;

struct sctp_ulpevent *FUNC_11(
 const struct sctp_association *VAR_2,
 __u16 VAR_3, __u16 VAR_4, __u16 VAR_5, __u16 VAR_6,
 __u16 VAR_7, struct sctp_chunk *VAR_8, gfp_t VAR_9)
{
 struct sctp_ulpevent *VAR_10;
 struct sctp_assoc_change *VAR_11;
 struct sk_buff *VAR_12;




 if (VAR_8) {



  VAR_12 = FUNC_7(VAR_8->skb,
          sizeof(struct sctp_assoc_change), 0, VAR_9);

  if (!VAR_12)
   goto fail;


  VAR_10 = FUNC_3(VAR_12);
  FUNC_4(VAR_10, VAR_0, VAR_12->truesize);


  VAR_11 = FUNC_8(VAR_12, sizeof(struct sctp_assoc_change));


  FUNC_10(VAR_12, sizeof(struct sctp_assoc_change) +
    FUNC_0(VAR_8->chunk_hdr->length) -
    sizeof(struct sctp_chunkhdr));
 } else {
  VAR_10 = FUNC_5(sizeof(struct sctp_assoc_change),
      VAR_0, VAR_9);
  if (!VAR_10)
   goto fail;

  VAR_12 = FUNC_2(VAR_10);
  VAR_11 = FUNC_9(VAR_12, sizeof(struct sctp_assoc_change));
 }







 VAR_11->sac_type = VAR_1;
 VAR_11->sac_state = VAR_4;







 VAR_11->sac_flags = 0;
 VAR_11->sac_length = VAR_12->len;
 VAR_11->sac_error = VAR_5;
 VAR_11->sac_outbound_streams = VAR_6;
 VAR_11->sac_inbound_streams = VAR_7;
 FUNC_6(VAR_10, VAR_2);
 VAR_11->sac_assoc_id = FUNC_1(VAR_2);

 return VAR_10;

fail:
 return ((void*)0);
}
