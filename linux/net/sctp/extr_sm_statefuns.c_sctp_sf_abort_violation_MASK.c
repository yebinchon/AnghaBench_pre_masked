
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sctp_packet {void* vtag; } ;
struct TYPE_11__ {int init_tag; } ;
struct sctp_initack_chunk {TYPE_4__ init_hdr; } ;
struct TYPE_14__ {int sk; } ;
struct sctp_endpoint {TYPE_7__ base; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {TYPE_6__* skb; TYPE_5__* sctp_hdr; TYPE_3__* chunk_hdr; } ;
struct TYPE_8__ {int init_tag; } ;
struct TYPE_9__ {TYPE_1__ i; } ;
struct sctp_association {scalar_t__ state; TYPE_2__ peer; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
typedef int __u8 ;
struct TYPE_13__ {int sk; } ;
struct TYPE_12__ {int vtag; } ;
struct TYPE_10__ {scalar_t__ type; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct net*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct sctp_packet*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned int) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (struct sctp_cmd_seq*,int ,int ) ;
 scalar_t__ FUNC_11 (int ,struct sctp_association const*) ;
 int FUNC_12 (struct sctp_chunk*) ;
 int FUNC_13 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_14 (struct sctp_association const*,struct sctp_chunk*,int const*,size_t const) ;
 struct sctp_packet* FUNC_15 (struct net*,struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_16 (struct sctp_packet*,struct sctp_chunk*) ;
 int FUNC_17 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,int ,void*,struct sctp_cmd_seq*) ;
 scalar_t__ FUNC_18 (struct sctp_chunk*) ;

__attribute__((used)) static enum sctp_disposition FUNC_19(
     struct net *VAR_20,
     const struct sctp_endpoint *VAR_21,
     const struct sctp_association *VAR_22,
     void *VAR_23,
     struct sctp_cmd_seq *VAR_24,
     const __u8 *VAR_25,
     const size_t VAR_26)
{
 struct sctp_packet *VAR_27 = ((void*)0);
 struct sctp_chunk *VAR_28 = VAR_23;
 struct sctp_chunk *VAR_29 = ((void*)0);
 if (FUNC_11(VAR_3, VAR_22))
  goto discard;


 VAR_29 = FUNC_14(VAR_22, VAR_28, VAR_25, VAR_26);
 if (!VAR_29)
  goto nomem;

 if (VAR_22) {

  if (VAR_28->chunk_hdr->type == VAR_4 &&
      !VAR_22->peer.i.init_tag) {
   struct sctp_initack_chunk *VAR_30;

   VAR_30 = (struct sctp_initack_chunk *)VAR_28->chunk_hdr;
   if (!FUNC_13(VAR_28, sizeof(*VAR_30)))
    VAR_29->chunk_hdr->flags |= VAR_2;
   else {
    unsigned int VAR_31;

    VAR_31 = FUNC_9(VAR_30->init_hdr.init_tag);
    FUNC_10(VAR_24, VAR_11,
      FUNC_8(VAR_31));
   }
  }

  FUNC_10(VAR_24, VAR_7, FUNC_0(VAR_29));
  FUNC_3(VAR_20, VAR_18);

  if (VAR_22->state <= VAR_19) {
   FUNC_10(VAR_24, VAR_10,
     FUNC_7(VAR_15));
   FUNC_10(VAR_24, VAR_9,
     FUNC_2(VAR_1));
   FUNC_10(VAR_24, VAR_6,
     FUNC_5(VAR_14));
  } else {
   FUNC_10(VAR_24, VAR_9,
     FUNC_2(VAR_0));
   FUNC_10(VAR_24, VAR_5,
     FUNC_5(VAR_14));
   FUNC_1(VAR_20, VAR_17);
  }
 } else {
  VAR_27 = FUNC_15(VAR_20, VAR_22, VAR_28);

  if (!VAR_27)
   goto nomem_pkt;

  if (FUNC_18(VAR_29))
   VAR_27->vtag = FUNC_9(VAR_28->sctp_hdr->vtag);

  VAR_29->skb->sk = VAR_21->base.sk;

  FUNC_16(VAR_27, VAR_29);

  FUNC_10(VAR_24, VAR_8,
   FUNC_4(VAR_27));

  FUNC_3(VAR_20, VAR_18);
 }

 FUNC_3(VAR_20, VAR_16);

discard:
 FUNC_17(VAR_20, VAR_21, VAR_22, FUNC_6(0), VAR_23, VAR_24);
 return VAR_12;

nomem_pkt:
 FUNC_12(VAR_29);
nomem:
 return VAR_13;
}
