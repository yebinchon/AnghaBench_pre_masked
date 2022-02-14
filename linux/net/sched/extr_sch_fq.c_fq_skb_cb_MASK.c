
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct fq_skb_cb {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline struct fq_skb_cb *FUNC_2(struct sk_buff *VAR_0)
{
 FUNC_0(VAR_0, sizeof(struct fq_skb_cb));
 return (struct fq_skb_cb *)FUNC_1(VAR_0)->data;
}
