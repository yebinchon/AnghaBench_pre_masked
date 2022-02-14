
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_transport {int param_flags; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_association {scalar_t__ overall_error_count; scalar_t__ max_retrans; } ;
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
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_transport*) ;
 int VAR_12 ;
 int FUNC_5 (struct sctp_cmd_seq*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;

enum sctp_disposition FUNC_7(struct net *VAR_13,
        const struct sctp_endpoint *VAR_14,
        const struct sctp_association *VAR_15,
        const union sctp_subtype VAR_16,
        void *VAR_17,
        struct sctp_cmd_seq *VAR_18)
{
 struct sctp_transport *VAR_19 = (struct sctp_transport *) VAR_17;

 if (VAR_15->overall_error_count >= VAR_15->max_retrans) {
  FUNC_5(VAR_18, VAR_3,
    FUNC_1(VAR_0));

  FUNC_5(VAR_18, VAR_1,
    FUNC_3(VAR_9));
  FUNC_2(VAR_13, VAR_10);
  FUNC_0(VAR_13, VAR_11);
  return VAR_7;
 }
 if (VAR_19->param_flags & VAR_12) {
  if (VAR_8 ==
    FUNC_6(VAR_14, VAR_15, VAR_16, VAR_17,
        VAR_18))
   return VAR_8;




  FUNC_5(VAR_18, VAR_4,
    FUNC_4(VAR_19));
 }
 FUNC_5(VAR_18, VAR_5,
   FUNC_4(VAR_19));
 FUNC_5(VAR_18, VAR_2,
   FUNC_4(VAR_19));

 return VAR_6;
}
