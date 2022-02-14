
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ pkt_type; int protocol; struct net_device* dev; scalar_t__ priority; } ;
struct phonethdr {void* pn_sobj; void* pn_robj; int pn_length; scalar_t__ pn_res; void* pn_sdev; void* pn_rdev; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int ,int *,int *,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 struct phonethdr* FUNC_12 (struct sk_buff*) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct sk_buff *VAR_7, struct net_device *VAR_8,
   u16 VAR_9, u16 VAR_10, u8 VAR_11, u8 VAR_12)
{
 struct phonethdr *VAR_13;
 int VAR_14;

 if (VAR_7->len + 2 > 0xffff ||
     VAR_7->len + sizeof(struct phonethdr) > VAR_8->mtu) {
  VAR_14 = -VAR_1;
  goto drop;
 }


 if (FUNC_10(VAR_9) == VAR_6) {
  VAR_14 = -VAR_3;
  goto drop;
 }

 FUNC_19(VAR_7);
 FUNC_0(FUNC_14(VAR_7) & 1);
 FUNC_16(VAR_7, sizeof(struct phonethdr));
 FUNC_18(VAR_7);
 VAR_13 = FUNC_12(VAR_7);
 VAR_13->pn_rdev = FUNC_11(VAR_9);
 VAR_13->pn_sdev = FUNC_11(VAR_10);
 VAR_13->pn_res = VAR_11;
 VAR_13->pn_length = FUNC_1(VAR_7->len + 2 - sizeof(*VAR_13));
 VAR_13->pn_robj = FUNC_13(VAR_9);
 VAR_13->pn_sobj = FUNC_13(VAR_10);

 VAR_7->protocol = FUNC_4(VAR_4);
 VAR_7->priority = 0;
 VAR_7->dev = VAR_8;

 if (VAR_7->pkt_type == VAR_5) {
  FUNC_17(VAR_7);
  FUNC_15(VAR_7);
  VAR_14 = (VAR_12 ? FUNC_7(VAR_7) : FUNC_8(VAR_7)) ? -VAR_2 : 0;
 } else {
  VAR_14 = FUNC_2(VAR_7, VAR_8, FUNC_9(VAR_7->protocol),
     ((void*)0), ((void*)0), VAR_7->len);
  if (VAR_14 < 0) {
   VAR_14 = -VAR_0;
   goto drop;
  }
  VAR_14 = FUNC_3(VAR_7);
  if (FUNC_20(VAR_14 > 0))
   VAR_14 = FUNC_6(VAR_14);
 }

 return VAR_14;
drop:
 FUNC_5(VAR_7);
 return VAR_14;
}
