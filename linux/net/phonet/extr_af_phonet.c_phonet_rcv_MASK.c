
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sockaddr_pn {int spn_resource; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; scalar_t__ pkt_type; struct net_device* dev; } ;
struct phonethdr {int pn_length; } ;
struct packet_type {int dummy; } ;
struct net_device {int hard_header_len; int name; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct net_device*,int ,int *,int *,int) ;
 struct net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_9 (struct net*,scalar_t__) ;
 struct net_device* FUNC_10 (struct net*,scalar_t__) ;
 int FUNC_11 (struct net*,struct sk_buff*) ;
 struct sock* FUNC_12 (struct net*,int ) ;
 struct sock* FUNC_13 (struct net*,struct sockaddr_pn*) ;
 struct phonethdr* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,struct sockaddr_pn*) ;
 scalar_t__ FUNC_16 (struct sockaddr_pn*) ;
 scalar_t__ FUNC_17 (struct sockaddr_pn*) ;
 int FUNC_18 (struct sk_buff*,int) ;
 scalar_t__ FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sock*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_23 (struct sk_buff*,int ) ;
 int FUNC_24 (struct sk_buff*) ;
 struct sk_buff* FUNC_25 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_26 (int) ;

__attribute__((used)) static int FUNC_27(struct sk_buff *VAR_6, struct net_device *VAR_7,
   struct packet_type *VAR_8,
   struct net_device *VAR_9)
{
 struct net *VAR_10 = FUNC_3(VAR_7);
 struct phonethdr *VAR_11;
 struct sockaddr_pn VAR_12;
 u16 VAR_13;

 VAR_6 = FUNC_25(VAR_6, VAR_1);
 if (!VAR_6)
  return VAR_2;


 if (!FUNC_18(VAR_6, sizeof(struct phonethdr)))
  goto out;


 VAR_11 = FUNC_14(VAR_6);
 VAR_13 = FUNC_6(&VAR_11->pn_length);
 if (VAR_13 < 2)
  goto out;
 VAR_13 -= 2;
 if ((VAR_13 > VAR_6->len) || FUNC_19(VAR_6, VAR_13))
  goto out;
 FUNC_24(VAR_6);

 FUNC_15(VAR_6, &VAR_12);


 if (FUNC_16(&VAR_12) == VAR_5) {
  FUNC_11(VAR_10, VAR_6);
  goto out;
 }


 if (FUNC_17(&VAR_12) == 0) {
  struct sock *VAR_14 = FUNC_12(VAR_10, VAR_12.spn_resource);
  if (VAR_14)
   return FUNC_22(VAR_14, VAR_6, 0);
 }


 if (FUNC_9(VAR_10, FUNC_16(&VAR_12)) == 0) {

  struct sock *VAR_15 = FUNC_13(VAR_10, &VAR_12);

  if (VAR_15)
   return FUNC_22(VAR_15, VAR_6, 0);

  if (FUNC_1(VAR_6)) {
   FUNC_20(VAR_6);
   FUNC_21(VAR_6);
  }
 } else if (FUNC_26(VAR_6->pkt_type == VAR_4))
  goto out;
 else {

  struct net_device *VAR_16;

  VAR_16 = FUNC_10(VAR_10, FUNC_16(&VAR_12));
  if (!VAR_16) {
   FUNC_8("No Phonet route to %02X\n",
         FUNC_16(&VAR_12));
   goto out;
  }

  FUNC_0(VAR_6, sizeof(struct phonethdr));
  VAR_6->dev = VAR_16;
  if (VAR_16 == VAR_7) {
   FUNC_8("Phonet loop to %02X on %s\n",
         FUNC_16(&VAR_12),
         VAR_7->name);
   goto out_dev;
  }

  if (FUNC_23(VAR_6, VAR_16->hard_header_len))
   goto out_dev;

  if (FUNC_2(VAR_6, VAR_16, VAR_0, ((void*)0), ((void*)0),
     VAR_6->len) < 0)
   goto out_dev;
  FUNC_5(VAR_6);
  FUNC_4(VAR_16);
  return VAR_3;
out_dev:
  FUNC_4(VAR_16);
 }

out:
 FUNC_7(VAR_6);
 return VAR_2;
}
