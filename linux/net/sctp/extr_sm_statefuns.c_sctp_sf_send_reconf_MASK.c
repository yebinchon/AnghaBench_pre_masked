
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_transport {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_association {scalar_t__ overall_error_count; scalar_t__ max_retrans; int strreset_chunk; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (struct net*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_transport*) ;
 int FUNC_6 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_7 (int ) ;

enum sctp_disposition FUNC_8(struct net *VAR_10,
       const struct sctp_endpoint *VAR_11,
       const struct sctp_association *VAR_12,
       const union sctp_subtype VAR_13,
       void *VAR_14,
       struct sctp_cmd_seq *VAR_15)
{
 struct sctp_transport *VAR_16 = VAR_14;

 if (VAR_12->overall_error_count >= VAR_12->max_retrans) {
  FUNC_6(VAR_15, VAR_3,
    FUNC_2(VAR_0));

  FUNC_6(VAR_15, VAR_1,
    FUNC_4(VAR_7));
  FUNC_3(VAR_10, VAR_8);
  FUNC_1(VAR_10, VAR_9);
  return VAR_6;
 }

 FUNC_7(VAR_12->strreset_chunk);
 FUNC_6(VAR_15, VAR_2,
   FUNC_0(VAR_12->strreset_chunk));
 FUNC_6(VAR_15, VAR_4, FUNC_5(VAR_16));

 return VAR_5;
}
