
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int pf; } ;
struct nf_queue_entry {TYPE_1__ state; } ;
struct nf_ipv6_ops {int (* reroute ) (struct sk_buff*,struct nf_queue_entry*) ;} ;




 int FUNC_0 (struct sk_buff*,struct nf_queue_entry*) ;
 int VAR_0 ;
 struct nf_ipv6_ops* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct nf_queue_entry*) ;

int FUNC_3(struct sk_buff *VAR_1, struct nf_queue_entry *VAR_2)
{
 const struct nf_ipv6_ops *VAR_3;
 int VAR_4 = 0;

 switch (VAR_2->state.pf) {
 case 129:
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3)
   VAR_4 = VAR_3->reroute(VAR_1, VAR_2);
  break;
 }
 return VAR_4;
}
