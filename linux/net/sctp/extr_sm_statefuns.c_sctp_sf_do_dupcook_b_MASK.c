
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_init_chunk {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct TYPE_7__ {TYPE_2__* cookie_hdr; } ;
struct sctp_chunk {TYPE_3__ subh; } ;
struct TYPE_8__ {int auth_capable; scalar_t__ adaptation_ind; } ;
struct sctp_association {TYPE_4__ peer; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
struct TYPE_5__ {struct sctp_init_chunk* peer_init; } ;
struct TYPE_6__ {TYPE_1__ c; } ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_association*) ;
 int FUNC_1 (struct sctp_chunk*) ;
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
 int FUNC_2 (struct net*,int ) ;
 int VAR_12 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_13 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_cmd_seq*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sctp_association*,int ) ;
 int FUNC_8 (struct net*,struct sctp_chunk*,struct sctp_association*) ;
 struct sctp_chunk* FUNC_9 (struct sctp_association*,struct sctp_chunk*) ;
 int FUNC_10 (struct sctp_association*,struct sctp_chunk*,int ,struct sctp_init_chunk*,int ) ;
 int FUNC_11 (struct sctp_chunk*) ;

__attribute__((used)) static enum sctp_disposition FUNC_12(
     struct net *VAR_14,
     const struct sctp_endpoint *VAR_15,
     const struct sctp_association *VAR_16,
     struct sctp_chunk *VAR_17,
     struct sctp_cmd_seq *VAR_18,
     struct sctp_association *VAR_19)
{
 struct sctp_init_chunk *VAR_20;
 struct sctp_chunk *VAR_21;




 VAR_20 = &VAR_17->subh.cookie_hdr->c.peer_init[0];
 if (!FUNC_10(VAR_19, VAR_17, FUNC_11(VAR_17), VAR_20,
          VAR_0))
  goto nomem;

 if (FUNC_7(VAR_19, VAR_0))
  goto nomem;

 if (!FUNC_8(VAR_14, VAR_17, VAR_19))
  return VAR_10;


 FUNC_6(VAR_18, VAR_7, FUNC_0(VAR_19));
 FUNC_6(VAR_18, VAR_4,
   FUNC_4(VAR_13));
 FUNC_2(VAR_14, VAR_12);
 FUNC_6(VAR_18, VAR_3, FUNC_3());

 VAR_21 = FUNC_9(VAR_19, VAR_17);
 if (!VAR_21)
  goto nomem;

 FUNC_6(VAR_18, VAR_6, FUNC_1(VAR_21));
 FUNC_6(VAR_18, VAR_2, FUNC_5(VAR_8));
 if (VAR_16->peer.adaptation_ind)
  FUNC_6(VAR_18, VAR_1, FUNC_3());

 if (!VAR_16->peer.auth_capable)
  FUNC_6(VAR_18, VAR_5, FUNC_3());

 return VAR_9;

nomem:
 return VAR_11;
}
