
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_2__ src; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
struct TYPE_3__ {int tuple; } ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nf_conntrack_tuple*,int *) ;
 int FUNC_2 (struct sk_buff*,int ,struct nf_conntrack_tuple*,int) ;
 int FUNC_3 (struct sk_buff*,int ,struct nf_conntrack_tuple*,int) ;

unsigned int FUNC_4(struct sk_buff *VAR_2, struct nf_conn *VAR_3,
         enum nf_nat_manip_type VAR_4,
         enum ip_conntrack_dir VAR_5)
{
 struct nf_conntrack_tuple VAR_6;


 FUNC_1(&VAR_6, &VAR_3->tuplehash[!VAR_5].tuple);

 switch (VAR_6.src.l3num) {
 case 128:
  if (FUNC_3(VAR_2, 0, &VAR_6, VAR_4))
   return VAR_0;
  break;
 case 129:
  if (FUNC_2(VAR_2, 0, &VAR_6, VAR_4))
   return VAR_0;
  break;
 default:
  FUNC_0(1);
  break;
 }

 return VAR_1;
}
