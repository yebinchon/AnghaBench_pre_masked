
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_paramhdr {int dummy; } ;
struct sctp_errhdr {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct TYPE_8__ {scalar_t__ addip_hdr; } ;
struct sctp_chunk {TYPE_4__ subh; TYPE_3__* skb; int auth; } ;
struct TYPE_5__ {int asconf_capable; } ;
struct sctp_association {scalar_t__ addip_serial; struct sctp_chunk* addip_last_asconf; TYPE_1__ peer; } ;
struct sctp_addiphdr {int serial; } ;
struct sctp_addip_chunk {int dummy; } ;
struct TYPE_6__ {int addip_noauth; } ;
struct net {TYPE_2__ sctp; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
typedef scalar_t__ __u32 ;
struct TYPE_7__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct net*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_10 (struct sctp_chunk*,int) ;
 int FUNC_11 (struct sctp_chunk*,int ,int ) ;
 struct sctp_chunk* FUNC_12 (struct sctp_association const*,struct sctp_chunk*,int) ;
 int FUNC_13 (struct sctp_association*,struct sctp_chunk*) ;
 int FUNC_14 (struct net*,struct sctp_endpoint const*,struct sctp_association*,union sctp_subtype const,struct sctp_cmd_seq*) ;
 int FUNC_15 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_16 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_17 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_18 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,void*,struct sctp_cmd_seq*) ;
 int FUNC_19 (struct sctp_association const*,struct sctp_chunk*,int,struct sctp_paramhdr**) ;
 int FUNC_20 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_21(struct net *VAR_14,
         const struct sctp_endpoint *VAR_15,
         const struct sctp_association *VAR_16,
         const union sctp_subtype VAR_17,
         void *VAR_18,
         struct sctp_cmd_seq *VAR_19)
{
 struct sctp_chunk *VAR_20 = VAR_16->addip_last_asconf;
 struct sctp_paramhdr *VAR_21 = ((void*)0);
 struct sctp_chunk *VAR_22 = VAR_18;
 struct sctp_addiphdr *VAR_23;
 __u32 VAR_24, VAR_25;
 struct sctp_chunk *VAR_26;

 if (!FUNC_20(VAR_22, VAR_16)) {
  FUNC_9(VAR_19, VAR_4,
    FUNC_5());
  return FUNC_16(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);
 }







 if (!VAR_16->peer.asconf_capable ||
     (!VAR_14->sctp.addip_noauth && !VAR_22->auth))
  return FUNC_15(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
          VAR_19);


 if (!FUNC_10(VAR_22,
         sizeof(struct sctp_addip_chunk)))
  return FUNC_17(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
        VAR_19);

 VAR_23 = (struct sctp_addiphdr *)VAR_22->skb->data;
 VAR_25 = FUNC_8(VAR_23->serial);


 if (!FUNC_19(VAR_16, VAR_22, 0, &VAR_21))
  return FUNC_18(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
      (void *)VAR_21, VAR_19);

 if (VAR_20) {
  VAR_23 = (struct sctp_addiphdr *)VAR_20->subh.addip_hdr;
  VAR_24 = FUNC_8(VAR_23->serial);
 } else {
  VAR_24 = VAR_16->addip_serial - 1;
 }







 if (FUNC_0(VAR_25, VAR_24 + 1) &&
     !(VAR_16->addip_last_asconf)) {
  VAR_26 = FUNC_12(VAR_16, VAR_22,
     sizeof(struct sctp_errhdr));
  if (VAR_26) {
   FUNC_11(VAR_26, VAR_9, 0);
   FUNC_9(VAR_19, VAR_3,
     FUNC_1(VAR_26));
  }



  FUNC_9(VAR_19, VAR_6,
    FUNC_7(VAR_11));
  FUNC_9(VAR_19, VAR_2, FUNC_5());
  FUNC_9(VAR_19, VAR_5,
    FUNC_3(VAR_0));
  FUNC_9(VAR_19, VAR_1,
    FUNC_6(VAR_9));
  FUNC_4(VAR_14, VAR_12);
  FUNC_2(VAR_14, VAR_13);
  return VAR_7;
 }

 if ((VAR_25 == VAR_24) && VAR_16->addip_last_asconf) {
  FUNC_9(VAR_19, VAR_6,
    FUNC_7(VAR_11));

  if (!FUNC_13((struct sctp_association *)VAR_16,
          VAR_22))
   return FUNC_14(VAR_14, VAR_15,
     (struct sctp_association *)VAR_16,
       VAR_17, VAR_19);

  VAR_26 = FUNC_12(VAR_16, VAR_22,
     sizeof(struct sctp_errhdr));
  if (VAR_26) {
   FUNC_11(VAR_26, VAR_10, 0);
   FUNC_9(VAR_19, VAR_3,
     FUNC_1(VAR_26));
  }



  FUNC_9(VAR_19, VAR_2, FUNC_5());
  FUNC_9(VAR_19, VAR_5,
    FUNC_3(VAR_0));
  FUNC_9(VAR_19, VAR_1,
    FUNC_6(VAR_9));
  FUNC_4(VAR_14, VAR_12);
  FUNC_2(VAR_14, VAR_13);
  return VAR_7;
 }

 return VAR_8;
}
