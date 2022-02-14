
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* vifi_t ;
struct sock {int dummy; } ;
struct sk_buff {int network_header; int transport_header; scalar_t__ len; int data; } ;
struct mr_table {int mroute_sk; void* mroute_reg_vif_num; } ;
struct iphdr {int dummy; } ;
struct igmpmsg {int im_msgtype; void* im_vif; scalar_t__ im_mbz; } ;
struct igmphdr {int type; scalar_t__ code; } ;
struct TYPE_2__ {int ihl; void* tot_len; scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mr_table*,struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct igmpmsg*,scalar_t__,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (void*) ;
 struct sock* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct sk_buff*,int ,int const) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int) ;
 struct igmphdr* FUNC_18 (struct sk_buff*,int const) ;
 struct sk_buff* FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,scalar_t__) ;
 int FUNC_23 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_24(struct mr_table *VAR_5,
        struct sk_buff *VAR_6, vifi_t VAR_7, int VAR_8)
{
 const int VAR_9 = FUNC_5(VAR_6);
 struct sock *VAR_10;
 struct igmphdr *VAR_11;
 struct igmpmsg *VAR_12;
 struct sk_buff *VAR_13;
 int VAR_14;

 if (VAR_8 == VAR_3 || VAR_8 == VAR_4)
  VAR_13 = FUNC_19(VAR_6, sizeof(struct iphdr));
 else
  VAR_13 = FUNC_0(128, VAR_2);

 if (!VAR_13)
  return -VAR_1;

 if (VAR_8 == VAR_3 || VAR_8 == VAR_4) {





  FUNC_17(VAR_13, sizeof(struct iphdr));
  FUNC_20(VAR_13);
  FUNC_21(VAR_13);
  VAR_12 = (struct igmpmsg *)FUNC_16(VAR_13);
  FUNC_7(VAR_12, FUNC_16(VAR_6), sizeof(struct iphdr));
  VAR_12->im_msgtype = VAR_8;
  VAR_12->im_mbz = 0;
  if (VAR_8 == VAR_4)
   VAR_12->im_vif = VAR_7;
  else
   VAR_12->im_vif = VAR_5->mroute_reg_vif_num;
  FUNC_4(VAR_13)->ihl = sizeof(struct iphdr) >> 2;
  FUNC_4(VAR_13)->tot_len = FUNC_2(FUNC_9(FUNC_4(VAR_6)->tot_len) +
          sizeof(struct iphdr));
 } else {

  FUNC_22(VAR_13, VAR_13->len);
  FUNC_18(VAR_13, VAR_9);
  FUNC_13(VAR_13, VAR_6->data, VAR_9);

  FUNC_4(VAR_13)->protocol = 0;
  VAR_12 = (struct igmpmsg *)FUNC_16(VAR_13);
  VAR_12->im_vif = VAR_7;
  FUNC_15(VAR_13, FUNC_1(FUNC_14(VAR_6)));

  VAR_11 = FUNC_18(VAR_13, sizeof(struct igmphdr));
  VAR_11->type = VAR_8;
  VAR_12->im_msgtype = VAR_8;
  VAR_11->code = 0;
  FUNC_4(VAR_13)->tot_len = FUNC_2(VAR_13->len);
  VAR_13->transport_header = VAR_13->network_header;
 }

 FUNC_11();
 VAR_10 = FUNC_10(VAR_5->mroute_sk);
 if (!VAR_10) {
  FUNC_12();
  FUNC_6(VAR_13);
  return -VAR_0;
 }

 FUNC_3(VAR_5, VAR_13);


 VAR_14 = FUNC_23(VAR_10, VAR_13);
 FUNC_12();
 if (VAR_14 < 0) {
  FUNC_8("mroute: pending queue full, dropping entries\n");
  FUNC_6(VAR_13);
 }

 return VAR_14;
}
