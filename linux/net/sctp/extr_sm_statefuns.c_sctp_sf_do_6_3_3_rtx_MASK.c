
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_transport {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct TYPE_2__ {scalar_t__ zero_window_announced; } ;
struct sctp_association {scalar_t__ overall_error_count; scalar_t__ max_retrans; scalar_t__ state; TYPE_1__ peer; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_transport*) ;
 int FUNC_6 (struct sctp_cmd_seq*,int ,int ) ;

enum sctp_disposition FUNC_7(struct net *VAR_14,
        const struct sctp_endpoint *VAR_15,
        const struct sctp_association *VAR_16,
        const union sctp_subtype VAR_17,
        void *VAR_18,
        struct sctp_cmd_seq *VAR_19)
{
 struct sctp_transport *VAR_20 = VAR_18;

 FUNC_2(VAR_14, VAR_12);

 if (VAR_16->overall_error_count >= VAR_16->max_retrans) {
  if (VAR_16->peer.zero_window_announced &&
      VAR_16->state == VAR_13) {
   FUNC_6(VAR_19, VAR_5,
    FUNC_4(VAR_9));
  } else {
   FUNC_6(VAR_19, VAR_3,
     FUNC_1(VAR_0));

   FUNC_6(VAR_19, VAR_1,
     FUNC_3(VAR_8));
   FUNC_2(VAR_14, VAR_10);
   FUNC_0(VAR_14, VAR_11);
   return VAR_7;
  }
 }
 FUNC_6(VAR_19, VAR_4, FUNC_5(VAR_20));


 FUNC_6(VAR_19, VAR_2, FUNC_5(VAR_20));

 return VAR_6;
}
