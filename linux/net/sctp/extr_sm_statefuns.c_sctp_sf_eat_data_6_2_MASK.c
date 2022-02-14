
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
typedef union sctp_arg {int dummy; } sctp_arg ;
typedef int u8 ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct TYPE_3__ {scalar_t__ data_hdr; } ;
struct sctp_chunk {scalar_t__ end_of_packet; TYPE_2__* chunk_hdr; TYPE_1__ subh; } ;
struct sctp_association {scalar_t__* timeouts; int stream; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 union sctp_arg FUNC_1 () ;







 int FUNC_2 (struct net*,int ) ;
 int VAR_8 ;
 union sctp_arg FUNC_3 () ;
 union sctp_arg FUNC_4 () ;
 union sctp_arg FUNC_5 (size_t) ;
 int FUNC_6 (struct sctp_cmd_seq*,int ,union sctp_arg) ;
 int FUNC_7 (struct sctp_chunk*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sctp_association const*,struct sctp_chunk*,struct sctp_cmd_seq*) ;
 int FUNC_11 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,struct sctp_chunk*,struct sctp_cmd_seq*,int *,int ) ;
 int FUNC_12 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_13 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_14 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_15(struct net *VAR_9,
        const struct sctp_endpoint *VAR_10,
        const struct sctp_association *VAR_11,
        const union sctp_subtype VAR_12,
        void *VAR_13,
        struct sctp_cmd_seq *VAR_14)
{
 union sctp_arg VAR_15 = FUNC_3();
 struct sctp_chunk *VAR_16 = VAR_13;
 int VAR_17;

 if (!FUNC_14(VAR_16, VAR_11)) {
  FUNC_6(VAR_14, VAR_1,
    FUNC_4());
  return FUNC_12(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
 }

 if (!FUNC_7(VAR_16, FUNC_8(&VAR_11->stream)))
  return FUNC_13(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_14);

 VAR_17 = FUNC_10(VAR_11, VAR_16, VAR_14);
 switch (VAR_17) {
 case 129:
  break;
 case 132:
 case 134:
  FUNC_2(VAR_9, VAR_8);
  goto discard_noforce;
 case 133:
 case 131:
  FUNC_2(VAR_9, VAR_8);
  goto discard_force;
 case 130:
  return VAR_4;
 case 128:
  return FUNC_11(VAR_9, VAR_10, VAR_11, VAR_16, VAR_14,
            (u8 *)VAR_16->subh.data_hdr,
            FUNC_9(&VAR_11->stream));
 default:
  FUNC_0();
 }

 if (VAR_16->chunk_hdr->flags & VAR_3)
  VAR_15 = FUNC_1();

 if (VAR_11->timeouts[VAR_7]) {
  FUNC_6(VAR_14, VAR_2,
    FUNC_5(VAR_7));
 }
 if (VAR_16->end_of_packet)
  FUNC_6(VAR_14, VAR_0, VAR_15);

 return VAR_5;

discard_force:
 if (VAR_16->end_of_packet)
  FUNC_6(VAR_14, VAR_0, FUNC_1());
 return VAR_6;

discard_noforce:
 if (VAR_16->end_of_packet)
  FUNC_6(VAR_14, VAR_0, VAR_15);

 return VAR_6;
}
