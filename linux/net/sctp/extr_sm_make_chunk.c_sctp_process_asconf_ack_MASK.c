
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; } ;
union sctp_addr_param {TYPE_1__ p; } ;
struct sctp_chunk {int transmitted_list; TYPE_2__* skb; } ;
struct TYPE_8__ {int primary_path; int addip_disabled_mask; } ;
struct sctp_association {struct sctp_chunk* addip_last_asconf; TYPE_4__ peer; scalar_t__ src_out_of_asoc_ok; } ;
struct sctp_addiphdr {int dummy; } ;
struct TYPE_7__ {int length; int type; } ;
struct sctp_addip_param {TYPE_3__ param_hdr; } ;
struct sctp_addip_chunk {int dummy; } ;
typedef int __be16 ;
struct TYPE_6__ {int len; scalar_t__ data; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_association*,struct sctp_addip_param*) ;
 int FUNC_3 (struct sctp_chunk*) ;
 int FUNC_4 (struct sctp_chunk*,struct sctp_addip_param*,int) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct sctp_association *VAR_0,
       struct sctp_chunk *VAR_1)
{
 struct sctp_chunk *VAR_2 = VAR_0->addip_last_asconf;
 struct sctp_addip_param *VAR_3;
 __be16 VAR_4 = 131;
 union sctp_addr_param *VAR_5;
 int VAR_6 = VAR_2->skb->len;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 1;
 int VAR_10 = 0;




 VAR_8 = sizeof(struct sctp_addip_chunk);
 VAR_5 = (union sctp_addr_param *)(VAR_2->skb->data + VAR_8);
 VAR_6 -= VAR_8;




 VAR_8 = FUNC_1(VAR_5->p.length);
 VAR_3 = (void *)VAR_5 + VAR_8;
 VAR_6 -= VAR_8;






 if (VAR_1->skb->len == sizeof(struct sctp_addiphdr))
  VAR_7 = 1;


 while (VAR_6 > 0) {
  if (VAR_7)
   VAR_4 = 131;
  else {
   VAR_4 = FUNC_4(VAR_1,
           VAR_3,
           VAR_9);
   if (VAR_9 && (131 != VAR_4))
    VAR_9 = 0;
  }

  switch (VAR_4) {
  case 131:
   FUNC_2(VAR_0, VAR_3);
   break;

  case 129:
   VAR_10 = 1;
   break;

  case 128:



   VAR_0->peer.addip_disabled_mask |=
    VAR_3->param_hdr.type;
   break;

  case 130:
  case 133:
  case 132:
  default:
    break;
  }




  VAR_8 = FUNC_1(VAR_3->param_hdr.length);
  VAR_3 = (void *)VAR_3 + VAR_8;
  VAR_6 -= VAR_8;
 }

 if (VAR_9 && VAR_0->src_out_of_asoc_ok) {
  VAR_0->src_out_of_asoc_ok = 0;
  FUNC_5(VAR_0->peer.primary_path);
 }


 FUNC_0(&VAR_2->transmitted_list);
 FUNC_3(VAR_2);
 VAR_0->addip_last_asconf = ((void*)0);

 return VAR_10;
}
