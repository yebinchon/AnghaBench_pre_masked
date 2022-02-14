
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_transport {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {struct sctp_transport* transport; } ;
struct sctp_association {scalar_t__ overall_error_count; scalar_t__ max_retrans; struct sctp_chunk* addip_last_asconf; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct net*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_transport*) ;
 int FUNC_7 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_8 (struct sctp_chunk*) ;

enum sctp_disposition FUNC_9(
     struct net *VAR_15,
     const struct sctp_endpoint *VAR_16,
     const struct sctp_association *VAR_17,
     const union sctp_subtype VAR_18,
     void *VAR_19,
     struct sctp_cmd_seq *VAR_20)
{
 struct sctp_chunk *VAR_21 = VAR_17->addip_last_asconf;
 struct sctp_transport *VAR_22 = VAR_21->transport;

 FUNC_3(VAR_15, VAR_14);





 if (VAR_22)
  FUNC_7(VAR_20, VAR_5,
    FUNC_6(VAR_22));


 FUNC_7(VAR_20, VAR_3, FUNC_0(VAR_21));






 if (VAR_17->overall_error_count >= VAR_17->max_retrans) {
  FUNC_7(VAR_20, VAR_7,
    FUNC_5(VAR_11));
  FUNC_7(VAR_20, VAR_4,
    FUNC_2(VAR_0));
  FUNC_7(VAR_20, VAR_1,
    FUNC_4(VAR_10));
  FUNC_3(VAR_15, VAR_12);
  FUNC_1(VAR_15, VAR_13);
  return VAR_8;
 }
 FUNC_8(VAR_17->addip_last_asconf);
 FUNC_7(VAR_20, VAR_2,
   FUNC_0(VAR_17->addip_last_asconf));





 FUNC_7(VAR_20, VAR_6,
   FUNC_5(VAR_11));

 return VAR_9;
}
