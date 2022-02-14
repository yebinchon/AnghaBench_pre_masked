
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sctp_chunk {struct sk_buff* skb; } ;
struct TYPE_4__ {TYPE_1__* af; } ;
struct TYPE_3__ {int (* skb_iif ) (struct sk_buff*) ;} ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

int FUNC_2(const struct sctp_chunk *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->skb;

 return FUNC_0(VAR_1)->af->skb_iif(VAR_1);
}
