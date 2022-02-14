
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_paramhdr {int dummy; } ;
struct TYPE_2__ {int length; } ;
struct sctp_hmac_algo_param {int * hmac_ids; TYPE_1__ param_hdr; } ;
struct sctp_endpoint {scalar_t__* auth_hmacs; } ;
struct sctp_association {int default_hmac_id; struct sctp_endpoint* ep; } ;
typedef size_t __u16 ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;

void FUNC_1(struct sctp_association *VAR_1,
         struct sctp_hmac_algo_param *VAR_2)
{
 struct sctp_endpoint *VAR_3;
 __u16 VAR_4;
 int VAR_5;
 int VAR_6;


 if (VAR_1->default_hmac_id)
  return;

 VAR_6 = (FUNC_0(VAR_2->param_hdr.length) -
      sizeof(struct sctp_paramhdr)) >> 1;
 VAR_3 = VAR_1->ep;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = FUNC_0(VAR_2->hmac_ids[VAR_5]);


  if (VAR_4 > VAR_0)
   continue;


  if (VAR_3->auth_hmacs[VAR_4]) {
   VAR_1->default_hmac_id = VAR_4;
   break;
  }
 }
}
