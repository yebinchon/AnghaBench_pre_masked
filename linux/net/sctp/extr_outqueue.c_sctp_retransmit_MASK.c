
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


struct sctp_transport {TYPE_6__* asoc; } ;
struct sctp_outq {int fast_rtx; TYPE_5__* asoc; } ;
struct net {int dummy; } ;
typedef enum sctp_retransmit_reason { ____Placeholder_sctp_retransmit_reason } sctp_retransmit_reason ;
struct TYPE_8__ {struct sctp_transport* retran_path; } ;
struct TYPE_12__ {int init_retries; int unack_data; int rtx_data_chunks; TYPE_2__ peer; } ;
struct TYPE_10__ {TYPE_3__* si; } ;
struct TYPE_7__ {int sk; } ;
struct TYPE_11__ {int ctsn_ack_point; TYPE_4__ stream; TYPE_1__ base; } ;
struct TYPE_9__ {int (* generate_ftsn ) (struct sctp_outq*,int ) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (struct sctp_outq*,int,int ) ;
 int FUNC_4 (struct sctp_outq*,struct sctp_transport*,int) ;
 int FUNC_5 (struct sctp_transport*,int ) ;
 struct net* FUNC_6 (int ) ;
 int FUNC_7 (struct sctp_outq*,int ) ;

void FUNC_8(struct sctp_outq *VAR_7, struct sctp_transport *VAR_8,
       enum sctp_retransmit_reason VAR_9)
{
 struct net *VAR_10 = FUNC_6(VAR_7->asoc->base.sk);

 switch (VAR_9) {
 case 128:
  FUNC_1(VAR_10, VAR_6);
  FUNC_5(VAR_8, VAR_2);



  if (VAR_8 == VAR_8->asoc->peer.retran_path)
   FUNC_2(VAR_8->asoc);
  VAR_8->asoc->rtx_data_chunks +=
   VAR_8->asoc->unack_data;
  break;
 case 131:
  FUNC_1(VAR_10, VAR_3);
  FUNC_5(VAR_8, VAR_1);
  VAR_7->fast_rtx = 1;
  break;
 case 130:
  FUNC_1(VAR_10, VAR_4);
  break;
 case 129:
  FUNC_1(VAR_10, VAR_5);
  VAR_8->asoc->init_retries++;
  break;
 default:
  FUNC_0();
 }

 FUNC_4(VAR_7, VAR_8, VAR_9);





 if (VAR_9 == 128)
  VAR_7->asoc->stream.si->generate_ftsn(VAR_7, VAR_7->asoc->ctsn_ack_point);





 if (VAR_9 != 131)
  FUNC_3(VAR_7, 1, VAR_0);
}
