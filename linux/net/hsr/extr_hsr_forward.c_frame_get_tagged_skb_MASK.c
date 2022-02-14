
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hsr_port {scalar_t__ type; } ;
struct hsr_frame_info {int skb_std; scalar_t__ skb_hsr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 struct sk_buff* FUNC_1 (int ,struct hsr_frame_info*,struct hsr_port*) ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct hsr_frame_info *VAR_3,
         struct hsr_port *VAR_4)
{
 if (VAR_3->skb_hsr)
  return FUNC_2(VAR_3->skb_hsr, VAR_0);

 if (VAR_4->type != VAR_1 && VAR_4->type != VAR_2) {
  FUNC_0(1, "HSR: Bug: trying to create a tagged frame for a non-ring port");
  return ((void*)0);
 }

 return FUNC_1(VAR_3->skb_std, VAR_3, VAR_4);
}
