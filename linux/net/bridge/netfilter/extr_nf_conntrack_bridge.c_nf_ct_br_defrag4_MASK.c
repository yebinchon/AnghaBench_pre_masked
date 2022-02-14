
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int ignore_df; } ;
struct nf_hook_state {int net; } ;
struct nf_conn {int dummy; } ;
struct inet_skb_parm {int dummy; } ;
struct br_input_skb_cb {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_2__ {int frag_max_size; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct sk_buff*,struct br_input_skb_cb*,int ) ;
 int FUNC_3 (struct sk_buff*,struct br_input_skb_cb*,int) ;
 int FUNC_4 (int ,struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct nf_conn* FUNC_9 (struct sk_buff*,int*) ;
 int FUNC_10 (struct nf_conn const*) ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static unsigned int FUNC_12(struct sk_buff *VAR_4,
         const struct nf_hook_state *VAR_5)
{
 u16 VAR_6 = VAR_2;
 enum ip_conntrack_info VAR_7;
 struct br_input_skb_cb VAR_8;
 const struct nf_conn *VAR_9;
 int VAR_10;

 if (!FUNC_6(FUNC_5(VAR_4)))
  return VAR_1;

 VAR_9 = FUNC_9(VAR_4, &VAR_7);
 if (VAR_9)
  VAR_6 = FUNC_11(FUNC_10(VAR_9), FUNC_0(VAR_7));

 FUNC_3(VAR_4, &VAR_8, sizeof(struct inet_skb_parm));
 FUNC_7();
 VAR_10 = FUNC_4(VAR_5->net, VAR_4,
   VAR_0 + VAR_6);
 FUNC_8();
 if (!VAR_10) {
  FUNC_2(VAR_4, &VAR_8, FUNC_1(VAR_4)->frag_max_size);
  VAR_4->ignore_df = 1;
  return VAR_1;
 }

 return VAR_3;
}
