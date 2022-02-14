
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_paramhdr {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int source; int dest; int * transport; int has_asconf; TYPE_2__* skb; int auth; } ;
struct TYPE_6__ {scalar_t__ addip_serial; int asconf_capable; } ;
struct sctp_association {int * new_transport; TYPE_3__ peer; } ;
struct sctp_addiphdr {int serial; } ;
struct sctp_addip_chunk {int dummy; } ;
struct TYPE_4__ {int addip_noauth; } ;
struct net {TYPE_1__ sctp; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
typedef scalar_t__ __u32 ;
struct TYPE_5__ {scalar_t__ data; } ;


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_4 (struct sctp_association const*) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association const*,int ) ;
 int FUNC_6 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_7 (struct sctp_association*,struct sctp_chunk*) ;
 int FUNC_8 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_9 (struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,int *,struct sctp_cmd_seq*) ;
 int FUNC_10 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_11 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_12 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,void*,struct sctp_cmd_seq*) ;
 int FUNC_13 (struct sctp_association const*,struct sctp_chunk*,int,struct sctp_paramhdr**) ;
 int FUNC_14 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_15(struct net *VAR_5,
     const struct sctp_endpoint *VAR_6,
     const struct sctp_association *VAR_7,
     const union sctp_subtype VAR_8,
     void *VAR_9,
     struct sctp_cmd_seq *VAR_10)
{
 struct sctp_paramhdr *VAR_11 = ((void*)0);
 struct sctp_chunk *VAR_12 = ((void*)0);
 struct sctp_chunk *VAR_13 = VAR_9;
 struct sctp_addiphdr *VAR_14;
 __u32 VAR_15;

 if (!FUNC_14(VAR_13, VAR_7)) {
  FUNC_3(VAR_10, VAR_1,
    FUNC_1());
  return FUNC_10(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 }







 if (!VAR_7->peer.asconf_capable ||
     (!VAR_5->sctp.addip_noauth && !VAR_13->auth))
  return FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
          VAR_10);


 if (!FUNC_6(VAR_13, sizeof(struct sctp_addip_chunk)))
  return FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_10);

 VAR_14 = (struct sctp_addiphdr *)VAR_13->skb->data;
 VAR_15 = FUNC_2(VAR_14->serial);


 if (!FUNC_13(VAR_7, VAR_13, 1, &VAR_11))
  return FUNC_12(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
        (void *)VAR_11, VAR_10);





 if (VAR_15 == VAR_7->peer.addip_serial + 1) {



  if (!VAR_13->has_asconf)
   FUNC_4(VAR_7);
  VAR_12 = FUNC_7((struct sctp_association *)
       VAR_7, VAR_13);
  if (!VAR_12)
   return VAR_4;
 } else if (VAR_15 < VAR_7->peer.addip_serial + 1) {
  VAR_12 = FUNC_5(VAR_7, VAR_14->serial);
  if (!VAR_12)
   return VAR_3;





  VAR_12->transport = ((void*)0);
 } else {



  return VAR_3;
 }
 VAR_12->dest = VAR_13->source;
 FUNC_3(VAR_10, VAR_0, FUNC_0(VAR_12));
 if (VAR_7->new_transport) {
  FUNC_9(VAR_6, VAR_7, VAR_8, VAR_7->new_transport, VAR_10);
  ((struct sctp_association *)VAR_7)->new_transport = ((void*)0);
 }

 return VAR_2;
}
