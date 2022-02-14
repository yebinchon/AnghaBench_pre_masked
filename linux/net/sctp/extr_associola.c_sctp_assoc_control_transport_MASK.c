
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_transport {TYPE_1__* af_specific; int ipaddr; int state; int cwnd; } ;
struct TYPE_6__ {TYPE_2__* si; } ;
struct sctp_association {int ulpq; TYPE_3__ stream; int pathmtu; } ;
typedef int sctp_sn_error_t ;
typedef enum sctp_transport_cmd { ____Placeholder_sctp_transport_cmd } sctp_transport_cmd ;
struct TYPE_5__ {int (* enqueue_event ) (int *,struct sctp_ulpevent*) ;} ;
struct TYPE_4__ {int sockaddr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int FUNC_0 (struct sockaddr_storage*,int *,int ) ;
 int FUNC_1 (struct sockaddr_storage*,int ,int) ;
 int FUNC_2 (struct sctp_association*) ;
 int FUNC_3 (struct sctp_transport*) ;
 struct sctp_ulpevent* FUNC_4 (struct sctp_association*,struct sockaddr_storage*,int ,int,int ,int ) ;
 int FUNC_5 (int *,struct sctp_ulpevent*) ;

void FUNC_6(struct sctp_association *VAR_9,
      struct sctp_transport *VAR_10,
      enum sctp_transport_cmd VAR_11,
      sctp_sn_error_t VAR_12)
{
 struct sctp_ulpevent *VAR_13;
 struct sockaddr_storage VAR_14;
 int VAR_15 = 0;
 bool VAR_16 = 1;


 switch (VAR_11) {
 case 128:




  if (VAR_8 == VAR_10->state &&
      VAR_5 == VAR_12)
   VAR_15 = VAR_3;
  else
   VAR_15 = VAR_2;




  if (VAR_10->state == VAR_7) {
   VAR_16 = 0;
   VAR_10->cwnd = VAR_9->pathmtu;
  }
  VAR_10->state = VAR_1;
  break;

 case 130:




  if (VAR_10->state != VAR_8)
   VAR_10->state = VAR_6;
  else {
   FUNC_3(VAR_10);
   VAR_16 = 0;
  }

  VAR_15 = VAR_4;
  break;

 case 129:
  VAR_10->state = VAR_7;
  VAR_16 = 0;
  break;

 default:
  return;
 }




 if (VAR_16) {
  FUNC_1(&VAR_14, 0, sizeof(struct sockaddr_storage));
  FUNC_0(&VAR_14, &VAR_10->ipaddr,
         VAR_10->af_specific->sockaddr_len);

  VAR_13 = FUNC_4(VAR_9, &VAR_14,
     0, VAR_15, VAR_12, VAR_0);
  if (VAR_13)
   VAR_9->stream.si->enqueue_event(&VAR_9->ulpq, VAR_13);
 }


 FUNC_2(VAR_9);
}
