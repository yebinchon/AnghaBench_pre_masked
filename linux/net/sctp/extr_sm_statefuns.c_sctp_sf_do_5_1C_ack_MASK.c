
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_packet {int dummy; } ;
struct sctp_inithdr {int dummy; } ;
struct sctp_initack_chunk {int dummy; } ;
struct sctp_init_chunk {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct TYPE_6__ {int v; } ;
struct TYPE_5__ {struct sctp_inithdr* init_hdr; } ;
struct sctp_chunk {TYPE_3__* chunk_hdr; TYPE_4__* skb; TYPE_2__ param_hdr; int transport; TYPE_1__ subh; int singleton; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_error { ____Placeholder_sctp_error } sctp_error ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
typedef int __u8 ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {int length; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 () ;
 int FUNC_3 (struct sctp_packet*) ;
 int FUNC_4 (struct sctp_init_chunk*) ;
 int FUNC_5 (int ) ;
 int VAR_17 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 struct sctp_packet* FUNC_8 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,void*,int *,scalar_t__) ;
 int FUNC_9 (struct sctp_cmd_seq*,int ,int ) ;
 scalar_t__ FUNC_10 (int ,struct sctp_association const*) ;
 int FUNC_11 (struct sctp_chunk*) ;
 int FUNC_12 (struct sctp_chunk*,int) ;
 int FUNC_13 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_14 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_15 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_16 (struct net*,struct sctp_cmd_seq*,int,int ,struct sctp_association const*,int ) ;
 int FUNC_17 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,int ,struct sctp_init_chunk*,struct sctp_chunk*,struct sctp_chunk**) ;
 int FUNC_18 (struct sctp_chunk*,struct sctp_association const*) ;
 int FUNC_19 (TYPE_4__*,int) ;

enum sctp_disposition FUNC_20(struct net *VAR_18,
       const struct sctp_endpoint *VAR_19,
       const struct sctp_association *VAR_20,
       const union sctp_subtype VAR_21,
       void *VAR_22,
       struct sctp_cmd_seq *VAR_23)
{
 struct sctp_init_chunk *VAR_24;
 struct sctp_chunk *VAR_25 = VAR_22;
 struct sctp_chunk *VAR_26;
 struct sctp_packet *VAR_27;

 if (!FUNC_18(VAR_25, VAR_20))
  return FUNC_13(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);





 if (!VAR_25->singleton)
  return FUNC_14(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);


 if (!FUNC_12(VAR_25, sizeof(struct sctp_initack_chunk)))
  return FUNC_15(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22,
        VAR_23);

 VAR_25->subh.init_hdr = (struct sctp_inithdr *)VAR_25->skb->data;


 VAR_26 = ((void*)0);
 if (!FUNC_17(VAR_18, VAR_19, VAR_20, VAR_25->chunk_hdr->type,
         (struct sctp_init_chunk *)VAR_25->chunk_hdr, VAR_25,
         &VAR_26)) {

  enum sctp_error VAR_28 = VAR_12;






  if (VAR_26) {
   VAR_27 = FUNC_8(VAR_18, VAR_19, VAR_20, VAR_22,
     (__u8 *)(VAR_26->chunk_hdr) +
     sizeof(struct sctp_chunkhdr),
     FUNC_7(VAR_26->chunk_hdr->length) -
     sizeof(struct sctp_chunkhdr));

   FUNC_11(VAR_26);

   if (VAR_27) {
    FUNC_9(VAR_23, VAR_7,
      FUNC_3(VAR_27));
    FUNC_1(VAR_18, VAR_16);
    VAR_28 = VAR_11;
   }
  }
  if (FUNC_10(VAR_1, VAR_20))
   return FUNC_13(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);

  FUNC_1(VAR_18, VAR_15);
  return FUNC_16(VAR_18, VAR_23, VAR_28, VAR_0,
      VAR_20, VAR_25->transport);
 }




 VAR_25->param_hdr.v = FUNC_19(VAR_25->skb, sizeof(struct sctp_inithdr));

 VAR_24 = (struct sctp_init_chunk *)VAR_25->chunk_hdr;

 FUNC_9(VAR_23, VAR_6,
   FUNC_4(VAR_24));


 FUNC_9(VAR_23, VAR_4, FUNC_2());





 FUNC_9(VAR_23, VAR_9,
   FUNC_6(VAR_14));
 FUNC_9(VAR_23, VAR_8,
   FUNC_6(VAR_13));
 FUNC_9(VAR_23, VAR_5,
   FUNC_5(VAR_17));




 FUNC_9(VAR_23, VAR_2, FUNC_2());







 FUNC_9(VAR_23, VAR_3,
   FUNC_0(VAR_26));

 return VAR_10;
}
