
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ulpevent {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_4__ {int auth_capable; scalar_t__ adaptation_ind; } ;
struct TYPE_3__ {int sinit_max_instreams; int sinit_num_ostreams; } ;
struct sctp_association {scalar_t__ state; TYPE_2__ peer; TYPE_1__ c; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_chunk*) ;
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
 int FUNC_1 (struct net*,int ) ;
 int VAR_12 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_ulpevent*) ;
 int FUNC_6 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_7 (struct net*,struct sctp_chunk*,struct sctp_association const*) ;
 struct sctp_chunk* FUNC_8 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_9 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_10 (struct sctp_association const*,int ) ;
 struct sctp_ulpevent* FUNC_11 (struct sctp_association const*,int ,int ,int ,int ,int ,int *,int ) ;
 struct sctp_ulpevent* FUNC_12 (struct sctp_association const*,int ,int ,int ) ;

__attribute__((used)) static enum sctp_disposition FUNC_13(
     struct net *VAR_14,
     const struct sctp_endpoint *VAR_15,
     const struct sctp_association *VAR_16,
     struct sctp_chunk *VAR_17,
     struct sctp_cmd_seq *VAR_18,
     struct sctp_association *VAR_19)
{
 struct sctp_ulpevent *VAR_20 = ((void*)0), *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
 struct sctp_chunk *VAR_23;
 if (!FUNC_7(VAR_14, VAR_17, VAR_16))
  return VAR_9;


 if (VAR_16->state < VAR_13) {
  FUNC_6(VAR_18, VAR_6,
    FUNC_4(VAR_11));
  FUNC_6(VAR_18, VAR_4,
    FUNC_3(VAR_13));
  FUNC_1(VAR_14, VAR_12);
  FUNC_6(VAR_18, VAR_3,
    FUNC_2());
  VAR_20 = FUNC_11(VAR_16, 0,
          VAR_7, 0,
          VAR_16->c.sinit_num_ostreams,
          VAR_16->c.sinit_max_instreams,
          ((void*)0), VAR_0);
  if (!VAR_20)
   goto nomem;






  if (VAR_16->peer.adaptation_ind) {
   VAR_21 = FUNC_10(VAR_16,
         VAR_0);
   if (!VAR_21)
    goto nomem;

  }

  if (!VAR_16->peer.auth_capable) {
   VAR_22 = FUNC_12(VAR_16, 0,
            VAR_1,
            VAR_0);
   if (!VAR_22)
    goto nomem;
  }
 }

 VAR_23 = FUNC_8(VAR_16, VAR_17);
 if (!VAR_23)
  goto nomem;

 FUNC_6(VAR_18, VAR_5, FUNC_0(VAR_23));

 if (VAR_20)
  FUNC_6(VAR_18, VAR_2,
    FUNC_5(VAR_20));
 if (VAR_21)
  FUNC_6(VAR_18, VAR_2,
     FUNC_5(VAR_21));
 if (VAR_22)
  FUNC_6(VAR_18, VAR_2,
    FUNC_5(VAR_22));

 return VAR_8;

nomem:
 if (VAR_22)
  FUNC_9(VAR_22);
 if (VAR_21)
  FUNC_9(VAR_21);
 if (VAR_20)
  FUNC_9(VAR_20);
 return VAR_10;
}
