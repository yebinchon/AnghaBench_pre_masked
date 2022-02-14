
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sctp_ulpevent {int dummy; } ;
struct sctp_init_chunk {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct TYPE_9__ {TYPE_2__* cookie_hdr; } ;
struct sctp_chunk {TYPE_4__* chunk_hdr; TYPE_3__ subh; } ;
struct TYPE_12__ {int sk; } ;
struct TYPE_11__ {int sinit_max_instreams; int sinit_num_ostreams; } ;
struct sctp_association {TYPE_6__ base; TYPE_5__ c; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
struct TYPE_10__ {int type; } ;
struct TYPE_7__ {struct sctp_init_chunk* peer_init; } ;
struct TYPE_8__ {TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_association*) ;
 int FUNC_1 (struct sctp_chunk*) ;
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
 int VAR_15 ;
 int FUNC_2 () ;
 int VAR_16 ;
 int FUNC_3 (int ) ;
 int VAR_17 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_ulpevent*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (struct sctp_cmd_seq*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sctp_association*,int ) ;
 int FUNC_9 (struct net*,struct sctp_chunk*,struct sctp_association*) ;
 int FUNC_10 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_11 (struct sctp_association*,struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_12 (struct sctp_association const*,struct sctp_chunk*,int ,int *,int ,int ) ;
 int FUNC_13 (struct sctp_association*,struct sctp_chunk*,int ,struct sctp_init_chunk*,int ) ;
 int FUNC_14 (struct sctp_association*,struct sctp_association const*,struct sctp_chunk*,struct sctp_cmd_seq*) ;
 int FUNC_15 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,int ,struct sctp_chunk*,struct sctp_cmd_seq*) ;
 int FUNC_16 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,int ,int *,struct sctp_cmd_seq*) ;
 int FUNC_17 (struct sctp_chunk*) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (struct sctp_association const*,int ) ;
 struct sctp_ulpevent* FUNC_20 (struct sctp_association const*,int ,int ,int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_21 (int ,int ) ;

__attribute__((used)) static enum sctp_disposition FUNC_22(
     struct net *VAR_21,
     const struct sctp_endpoint *VAR_22,
     const struct sctp_association *VAR_23,
     struct sctp_chunk *VAR_24,
     struct sctp_cmd_seq *VAR_25,
     struct sctp_association *VAR_26)
{
 struct sctp_init_chunk *VAR_27;
 enum sctp_disposition VAR_28;
 struct sctp_ulpevent *VAR_29;
 struct sctp_chunk *VAR_30;
 struct sctp_chunk *VAR_31;




 VAR_27 = &VAR_24->subh.cookie_hdr->c.peer_init[0];

 if (!FUNC_13(VAR_26, VAR_24, FUNC_17(VAR_24), VAR_27,
          VAR_1))
  goto nomem;

 if (FUNC_8(VAR_26, VAR_1))
  goto nomem;

 if (!FUNC_9(VAR_21, VAR_24, VAR_26))
  return VAR_11;





 if (!FUNC_14(VAR_26, VAR_23, VAR_24, VAR_25))
  return VAR_10;







 if (FUNC_19(VAR_23, VAR_18)) {
  VAR_28 = FUNC_15(VAR_21, VAR_22, VAR_23,
    FUNC_4(VAR_24->chunk_hdr->type),
    VAR_24, VAR_25);
  if (VAR_12 == VAR_28)
   goto nomem;

  VAR_31 = FUNC_12(VAR_23, VAR_24,
      VAR_13,
      ((void*)0), 0, 0);
  if (VAR_31)
   FUNC_7(VAR_25, VAR_6,
     FUNC_1(VAR_31));

  return VAR_10;
 }




 FUNC_7(VAR_25, VAR_7, FUNC_2());
 FUNC_7(VAR_25, VAR_8,
   FUNC_5(VAR_14));
 FUNC_7(VAR_25, VAR_5, FUNC_2());




 FUNC_7(VAR_25, VAR_8,
   FUNC_5(VAR_15));
 FUNC_7(VAR_25, VAR_4, FUNC_2());

 VAR_30 = FUNC_11(VAR_26, VAR_24);
 if (!VAR_30)
  goto nomem;


 VAR_29 = FUNC_20(VAR_23, 0, VAR_16, 0,
          VAR_26->c.sinit_num_ostreams,
          VAR_26->c.sinit_max_instreams,
          ((void*)0), VAR_1);
 if (!VAR_29)
  goto nomem_ev;


 FUNC_7(VAR_25, VAR_9, FUNC_0(VAR_26));
 FUNC_7(VAR_25, VAR_2, FUNC_6(VAR_29));
 if (FUNC_19(VAR_23, VAR_19) &&
     (FUNC_18(VAR_23->base.sk, VAR_0) ||
      FUNC_21(VAR_23->base.sk, VAR_20))) {




  FUNC_7(VAR_25, VAR_6, FUNC_1(VAR_30));
  return FUNC_16(VAR_21, VAR_22, VAR_23,
           FUNC_4(0), ((void*)0),
           VAR_25);
 } else {
  FUNC_7(VAR_25, VAR_3,
    FUNC_3(VAR_17));
  FUNC_7(VAR_25, VAR_6, FUNC_1(VAR_30));
 }
 return VAR_10;

nomem_ev:
 FUNC_10(VAR_30);
nomem:
 return VAR_12;
}
