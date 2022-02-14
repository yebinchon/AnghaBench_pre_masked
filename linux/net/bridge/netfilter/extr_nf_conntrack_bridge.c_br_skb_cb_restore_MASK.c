
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int cb; } ;
struct br_input_skb_cb {int dummy; } ;
struct TYPE_2__ {int frag_max_size; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct br_input_skb_cb const*,int) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0,
         const struct br_input_skb_cb *VAR_1,
         u16 VAR_2)
{
 FUNC_1(VAR_0->cb, VAR_1, sizeof(*VAR_1));
 FUNC_0(VAR_0)->frag_max_size = VAR_2;
}
