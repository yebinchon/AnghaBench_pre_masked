
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
typedef int u8 ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct TYPE_2__ {scalar_t__ data_hdr; } ;
struct sctp_chunk {scalar_t__ end_of_packet; TYPE_1__ subh; } ;
struct sctp_association {int stream; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;







 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_5 (struct sctp_chunk*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sctp_association const*,struct sctp_chunk*,struct sctp_cmd_seq*) ;
 int FUNC_9 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,struct sctp_chunk*,struct sctp_cmd_seq*,int *,int ) ;
 int FUNC_10 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_11 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_12 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_13(
     struct net *VAR_7,
     const struct sctp_endpoint *VAR_8,
     const struct sctp_association *VAR_9,
     const union sctp_subtype VAR_10,
     void *VAR_11,
     struct sctp_cmd_seq *VAR_12)
{
 struct sctp_chunk *VAR_13 = VAR_11;
 int VAR_14;

 if (!FUNC_12(VAR_13, VAR_9)) {
  FUNC_4(VAR_12, VAR_2,
    FUNC_2());
  return FUNC_10(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 }

 if (!FUNC_5(VAR_13, FUNC_6(&VAR_9->stream)))
  return FUNC_11(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
        VAR_12);

 VAR_14 = FUNC_8(VAR_9, VAR_13, VAR_12);
 switch (VAR_14) {
 case 129:
 case 132:
 case 133:
 case 131:
 case 134:
  break;
 case 130:
  return VAR_4;
 case 128:
  return FUNC_9(VAR_7, VAR_8, VAR_9, VAR_13, VAR_12,
            (u8 *)VAR_13->subh.data_hdr,
            FUNC_7(&VAR_9->stream));
 default:
  FUNC_0();
 }
 if (VAR_13->end_of_packet) {



  FUNC_4(VAR_12, VAR_1, FUNC_2());
  FUNC_4(VAR_12, VAR_0, FUNC_1());
  FUNC_4(VAR_12, VAR_3,
    FUNC_3(VAR_6));
 }

 return VAR_5;
}
