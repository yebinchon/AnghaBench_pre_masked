
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_ulpevent {int dummy; } ;
struct TYPE_4__ {int sk; } ;
struct sctp_endpoint {TYPE_1__ base; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {int skb; } ;
struct TYPE_6__ {int auth_capable; scalar_t__ adaptation_ind; } ;
struct TYPE_5__ {int sinit_max_instreams; int sinit_num_ostreams; } ;
struct sctp_association {TYPE_3__ peer; TYPE_2__ c; scalar_t__* timeouts; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct sctp_ulpevent*) ;
 int FUNC_5 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_6 (struct sctp_chunk*,int) ;
 int FUNC_7 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_8 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 struct sctp_ulpevent* FUNC_9 (struct sctp_association const*,int ) ;
 struct sctp_ulpevent* FUNC_10 (struct sctp_association const*,int ,int ,int ,int ,int ,int *,int ) ;
 struct sctp_ulpevent* FUNC_11 (struct sctp_association const*,int ,int ,int ) ;
 int FUNC_12 (struct sctp_chunk*,struct sctp_association const*) ;
 int FUNC_13 (int ,int ) ;

enum sctp_disposition FUNC_14(struct net *VAR_16,
      const struct sctp_endpoint *VAR_17,
      const struct sctp_association *VAR_18,
      const union sctp_subtype VAR_19,
      void *VAR_20,
      struct sctp_cmd_seq *VAR_21)
{
 struct sctp_chunk *VAR_22 = VAR_20;
 struct sctp_ulpevent *VAR_23;

 if (!FUNC_12(VAR_22, VAR_18))
  return FUNC_7(VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);




 if (!FUNC_6(VAR_22, sizeof(struct sctp_chunkhdr)))
  return FUNC_8(VAR_16, VAR_17, VAR_18, VAR_19, VAR_20,
        VAR_21);







 FUNC_5(VAR_21, VAR_4, FUNC_1());


 FUNC_13(VAR_17->base.sk, VAR_22->skb);







 FUNC_5(VAR_21, VAR_7,
   FUNC_3(VAR_12));
 FUNC_5(VAR_21, VAR_5,
   FUNC_2(VAR_15));
 FUNC_0(VAR_16, VAR_14);
 FUNC_0(VAR_16, VAR_13);
 FUNC_5(VAR_21, VAR_3, FUNC_1());
 if (VAR_18->timeouts[VAR_11])
  FUNC_5(VAR_21, VAR_6,
    FUNC_3(VAR_11));





 VAR_23 = FUNC_10(VAR_18, 0, VAR_8,
          0, VAR_18->c.sinit_num_ostreams,
          VAR_18->c.sinit_max_instreams,
          ((void*)0), VAR_0);

 if (!VAR_23)
  goto nomem;

 FUNC_5(VAR_21, VAR_2, FUNC_4(VAR_23));






 if (VAR_18->peer.adaptation_ind) {
  VAR_23 = FUNC_9(VAR_18, VAR_0);
  if (!VAR_23)
   goto nomem;

  FUNC_5(VAR_21, VAR_2,
    FUNC_4(VAR_23));
 }

 if (!VAR_18->peer.auth_capable) {
  VAR_23 = FUNC_11(VAR_18, 0, VAR_1,
      VAR_0);
  if (!VAR_23)
   goto nomem;
  FUNC_5(VAR_21, VAR_2,
    FUNC_4(VAR_23));
 }

 return VAR_9;
nomem:
 return VAR_10;
}
