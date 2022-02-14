
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {void* ip_summed; } ;
struct mrt6msg {int im6_msgtype; int im6_dst; int im6_src; scalar_t__ im6_pad; int im6_mif; scalar_t__ im6_mbz; } ;
struct mr_table {int mroute_sk; int mroute_reg_vif_num; } ;
struct ipv6hdr {int dummy; } ;
typedef int mifi_t ;
struct TYPE_3__ {int daddr; int saddr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct mr_table*,struct sk_buff*) ;
 int FUNC_5 (char*) ;
 struct sock* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sk_buff*,TYPE_1__*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_20(struct mr_table *VAR_5, struct sk_buff *VAR_6,
         mifi_t VAR_7, int VAR_8)
{
 struct sock *VAR_9;
 struct sk_buff *VAR_10;
 struct mrt6msg *VAR_11;
 int VAR_12;







  VAR_10 = FUNC_0(sizeof(struct ipv6hdr) + sizeof(*VAR_11), VAR_3);

 if (!VAR_10)
  return -VAR_2;




 VAR_10->ip_summed = VAR_0;
 {




 FUNC_14(VAR_10, sizeof(struct ipv6hdr));
 FUNC_16(VAR_10);
 FUNC_9(VAR_10, FUNC_2(VAR_6), sizeof(struct ipv6hdr));




 FUNC_14(VAR_10, sizeof(*VAR_11));
 FUNC_17(VAR_10);
 VAR_11 = (struct mrt6msg *)FUNC_18(VAR_10);

 VAR_11->im6_mbz = 0;
 VAR_11->im6_msgtype = VAR_8;
 VAR_11->im6_mif = VAR_7;
 VAR_11->im6_pad = 0;
 VAR_11->im6_src = FUNC_2(VAR_6)->saddr;
 VAR_11->im6_dst = FUNC_2(VAR_6)->daddr;

 FUNC_11(VAR_10, FUNC_1(FUNC_10(VAR_6)));
 VAR_10->ip_summed = VAR_0;
 }

 FUNC_7();
 VAR_9 = FUNC_6(VAR_5->mroute_sk);
 if (!VAR_9) {
  FUNC_8();
  FUNC_3(VAR_10);
  return -VAR_1;
 }

 FUNC_4(VAR_5, VAR_10);


 VAR_12 = FUNC_19(VAR_9, VAR_10);
 FUNC_8();
 if (VAR_12 < 0) {
  FUNC_5("mroute6: pending queue full, dropping entries\n");
  FUNC_3(VAR_10);
 }

 return VAR_12;
}
