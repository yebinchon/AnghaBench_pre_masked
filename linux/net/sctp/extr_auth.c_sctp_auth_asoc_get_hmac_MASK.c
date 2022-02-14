
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_paramhdr {int dummy; } ;
struct TYPE_4__ {int length; } ;
struct sctp_hmac_algo_param {int * hmac_ids; TYPE_2__ param_hdr; } ;
struct sctp_hmac {int hmac_name; } ;
struct TYPE_3__ {struct sctp_hmac_algo_param* peer_hmacs; } ;
struct sctp_association {int default_hmac_id; TYPE_1__ peer; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct sctp_hmac* VAR_1 ;

struct sctp_hmac *FUNC_1(const struct sctp_association *VAR_2)
{
 struct sctp_hmac_algo_param *VAR_3;
 __u16 VAR_4;
 __u16 VAR_5 = 0;
 int VAR_6;


 if (VAR_2->default_hmac_id)
  return &VAR_1[VAR_2->default_hmac_id];




 VAR_3 = VAR_2->peer.peer_hmacs;
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = (FUNC_0(VAR_3->param_hdr.length) -
   sizeof(struct sctp_paramhdr)) >> 1;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_0(VAR_3->hmac_ids[VAR_6]);







  if (VAR_5 > VAR_0 ||
      !VAR_1[VAR_5].hmac_name) {
   VAR_5 = 0;
   continue;
  }

  break;
 }

 if (VAR_5 == 0)
  return ((void*)0);

 return &VAR_1[VAR_5];
}
