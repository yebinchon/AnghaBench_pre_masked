
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct nf_hook_state {int net; } ;
struct nf_conn {int dummy; } ;
struct inet6_skb_parm {int dummy; } ;
struct br_input_skb_cb {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_2__ {int frag_max_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (struct sk_buff*,struct br_input_skb_cb*,int ) ;
 int FUNC_3 (struct sk_buff*,struct br_input_skb_cb*,int) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 int FUNC_5 (struct nf_conn const*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct sk_buff*,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_8(struct sk_buff *VAR_6,
         const struct nf_hook_state *VAR_7)
{
 u16 VAR_8 = VAR_3;
 enum ip_conntrack_info VAR_9;
 struct br_input_skb_cb VAR_10;
 const struct nf_conn *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_6, &VAR_9);
 if (VAR_11)
  VAR_8 = FUNC_6(FUNC_5(VAR_11), FUNC_0(VAR_9));

 FUNC_3(VAR_6, &VAR_10, sizeof(struct inet6_skb_parm));

 VAR_12 = FUNC_7(VAR_7->net, VAR_6,
    VAR_1 + VAR_8);

 if (VAR_12 == -VAR_0)
  return VAR_5;

 FUNC_2(VAR_6, &VAR_10, FUNC_1(VAR_6)->frag_max_size);
 return VAR_12 == 0 ? VAR_2 : VAR_4;
}
