
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; int version; int tot_len; } ;
struct inet_skb_parm {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int *,int) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_4, struct sk_buff *VAR_5)
{
 const struct iphdr *VAR_6;
 u32 VAR_7;

 if (!FUNC_6(VAR_5, sizeof(struct iphdr)))
  goto inhdr_error;

 VAR_6 = FUNC_3(VAR_5);


 if (VAR_6->ihl < 5 || VAR_6->version != 4)
  goto inhdr_error;

 if (!FUNC_6(VAR_5, VAR_6->ihl*4))
  goto inhdr_error;

 VAR_6 = FUNC_3(VAR_5);
 if (FUNC_8(FUNC_2((u8 *)VAR_6, VAR_6->ihl)))
  goto csum_error;

 VAR_7 = FUNC_5(VAR_6->tot_len);
 if (VAR_5->len < VAR_7) {
  FUNC_1(VAR_4, VAR_3);
  goto drop;
 } else if (VAR_7 < (VAR_6->ihl*4))
  goto inhdr_error;

 if (FUNC_7(VAR_5, VAR_7)) {
  FUNC_1(VAR_4, VAR_1);
  goto drop;
 }

 FUNC_4(FUNC_0(VAR_5), 0, sizeof(struct inet_skb_parm));





 return 0;

csum_error:
 FUNC_1(VAR_4, VAR_0);
inhdr_error:
 FUNC_1(VAR_4, VAR_2);
drop:
 return -1;
}
