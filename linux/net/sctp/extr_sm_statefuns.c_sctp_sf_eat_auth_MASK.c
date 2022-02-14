
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {TYPE_2__* skb; } ;
struct sctp_authhdr {int shkey_id; int hmac_id; } ;
struct sctp_auth_chunk {int dummy; } ;
struct TYPE_3__ {int auth_capable; } ;
struct sctp_association {scalar_t__ active_key_id; TYPE_1__ peer; } ;
struct net {int dummy; } ;
typedef enum sctp_ierror { ____Placeholder_sctp_ierror } sctp_ierror ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
typedef int __u16 ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_1 () ;
 int FUNC_2 (struct sctp_ulpevent*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_5 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_6 (struct sctp_association const*,struct sctp_chunk*,int ,int *,int,int ) ;
 int FUNC_7 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_8 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_9 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_10 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 struct sctp_ulpevent* FUNC_11 (struct sctp_association const*,scalar_t__,int ,int ) ;
 int FUNC_12 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_13(struct net *VAR_9,
           const struct sctp_endpoint *VAR_10,
           const struct sctp_association *VAR_11,
           const union sctp_subtype VAR_12,
           void *VAR_13, struct sctp_cmd_seq *VAR_14)
{
 struct sctp_chunk *VAR_15 = VAR_13;
 struct sctp_authhdr *VAR_16;
 struct sctp_chunk *VAR_17;
 enum sctp_ierror VAR_18;


 if (!VAR_11->peer.auth_capable)
  return FUNC_9(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

 if (!FUNC_12(VAR_15, VAR_11)) {
  FUNC_4(VAR_14, VAR_5,
    FUNC_1());
  return FUNC_8(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
 }


 if (!FUNC_5(VAR_15, sizeof(struct sctp_auth_chunk)))
  return FUNC_10(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_14);

 VAR_16 = (struct sctp_authhdr *)VAR_15->skb->data;
 VAR_18 = FUNC_7(VAR_11, VAR_15);
 switch (VAR_18) {
 case 132:



  VAR_17 = FUNC_6(VAR_11, VAR_15,
            VAR_8,
            &VAR_16->hmac_id,
            sizeof(__u16), 0);
  if (VAR_17) {
   FUNC_4(VAR_14, VAR_4,
     FUNC_0(VAR_17));
  }

 case 131:
 case 130:
  return FUNC_8(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

 case 128:
  return FUNC_10(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_14);

 case 129:
  return VAR_7;

 default:
  break;
 }

 if (VAR_11->active_key_id != FUNC_3(VAR_16->shkey_id)) {
  struct sctp_ulpevent *VAR_19;

  VAR_19 = FUNC_11(VAR_11, FUNC_3(VAR_16->shkey_id),
        VAR_2, VAR_1);

  if (!VAR_19)
   return -VAR_0;

  FUNC_4(VAR_14, VAR_3,
    FUNC_2(VAR_19));
 }

 return VAR_6;
}
