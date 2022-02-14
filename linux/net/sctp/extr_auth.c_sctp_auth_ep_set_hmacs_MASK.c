
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_paramhdr {int dummy; } ;
struct sctp_hmacalgo {int shmac_num_idents; size_t* shmac_idents; } ;
struct sctp_endpoint {TYPE_2__* auth_hmacs_list; } ;
typedef size_t __u16 ;
struct TYPE_6__ {int hmac_name; } ;
struct TYPE_4__ {void* length; } ;
struct TYPE_5__ {TYPE_1__ param_hdr; void** hmac_ids; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_0 (int) ;
 TYPE_3__* VAR_4 ;

int FUNC_1(struct sctp_endpoint *VAR_5,
      struct sctp_hmacalgo *VAR_6)
{
 int VAR_7 = 0;
 __u16 VAR_8;
 int VAR_9;




 for (VAR_9 = 0; VAR_9 < VAR_6->shmac_num_idents; VAR_9++) {
  VAR_8 = VAR_6->shmac_idents[VAR_9];

  if (VAR_8 > VAR_2)
   return -VAR_1;

  if (VAR_3 == VAR_8)
   VAR_7 = 1;

  if (!VAR_4[VAR_8].hmac_name)
   return -VAR_1;
 }

 if (!VAR_7)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_6->shmac_num_idents; VAR_9++)
  VAR_5->auth_hmacs_list->hmac_ids[VAR_9] =
    FUNC_0(VAR_6->shmac_idents[VAR_9]);
 VAR_5->auth_hmacs_list->param_hdr.length =
   FUNC_0(sizeof(struct sctp_paramhdr) +
   VAR_6->shmac_num_idents * sizeof(__u16));
 return 0;
}
