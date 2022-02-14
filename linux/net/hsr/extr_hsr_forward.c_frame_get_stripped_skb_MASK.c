
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hsr_port {int dummy; } ;
struct hsr_frame_info {scalar_t__ skb_std; int skb_hsr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct hsr_frame_info*) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct hsr_frame_info *VAR_1,
           struct hsr_port *VAR_2)
{
 if (!VAR_1->skb_std)
  VAR_1->skb_std = FUNC_0(VAR_1->skb_hsr, VAR_1);
 return FUNC_1(VAR_1->skb_std, VAR_0);
}
