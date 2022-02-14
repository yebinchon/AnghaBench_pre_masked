
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; struct net_device* dev; } ;
struct net_device {int dn_ptr; } ;
struct dn_neigh {int dummy; } ;
struct dn_ifaddr {int ifa_local; } ;
struct TYPE_2__ {int forwarding; scalar_t__ t3; int priority; } ;
struct dn_dev {TYPE_1__ parms; scalar_t__ router; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int *,size_t,int ) ;
 scalar_t__ FUNC_2 (struct dn_neigh*,struct dn_dev*,struct dn_ifaddr*) ;
 int FUNC_3 (unsigned char*,int ) ;
 int FUNC_4 (struct net_device*,unsigned char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct sk_buff*,int ,char*) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 int FUNC_7 (struct net_device*) ;
 struct dn_dev* FUNC_8 (int ) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 int * FUNC_10 (struct sk_buff*,int) ;
 unsigned char* FUNC_11 (struct sk_buff*,size_t) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_8, struct dn_ifaddr *VAR_9)
{
 int VAR_10;
 struct dn_dev *VAR_11 = FUNC_8(VAR_8->dn_ptr);
 struct dn_neigh *VAR_12 = (struct dn_neigh *)VAR_11->router;
 struct sk_buff *VAR_13;
 size_t VAR_14;
 unsigned char *VAR_15;
 unsigned char *VAR_16, *VAR_17;
 __le16 *VAR_18;
 char *VAR_19;

 if (FUNC_7(VAR_8) < (26 + 7))
  return;

 VAR_10 = FUNC_7(VAR_8) - 26;
 VAR_10 /= 7;

 if (VAR_10 > 32)
  VAR_10 = 32;

 VAR_14 = 2 + 26 + 7 * VAR_10;

 if ((VAR_13 = FUNC_1(((void*)0), VAR_14, VAR_5)) == ((void*)0))
  return;

 VAR_13->dev = VAR_8;
 VAR_15 = FUNC_11(VAR_13, VAR_14);

 *VAR_15++ = VAR_2 | VAR_3;
 *VAR_15++ = 2;
 *VAR_15++ = 0;
 *VAR_15++ = 0;
 FUNC_3(VAR_15, VAR_9->ifa_local);
 VAR_19 = VAR_15;
 VAR_15 += VAR_4;
 *VAR_15++ = VAR_11->parms.forwarding == 1 ?
   VAR_0 : VAR_1;
 *((__le16 *)VAR_15) = FUNC_0(FUNC_7(VAR_8));
 VAR_15 += 2;
 *VAR_15++ = VAR_11->parms.priority;
 *VAR_15++ = 0;
 *((__le16 *)VAR_15) = FUNC_0((unsigned short)VAR_11->parms.t3);
 VAR_15 += 2;
 *VAR_15++ = 0;
 VAR_16 = VAR_15++;
 FUNC_6(VAR_15, 0, 7);
 VAR_15 += 7;
 VAR_17 = VAR_15++;

 VAR_10 = FUNC_4(VAR_8, VAR_15, VAR_10);

 *VAR_17 = 7 * VAR_10;
 *VAR_16 = 8 + *VAR_17;

 FUNC_13(VAR_13, (27 + *VAR_17));

 VAR_18 = FUNC_10(VAR_13, 2);
 *VAR_18 = FUNC_0(VAR_13->len - 2);

 FUNC_12(VAR_13);

 if (FUNC_2(VAR_12, VAR_11, VAR_9)) {
  struct sk_buff *VAR_20 = FUNC_9(VAR_13, VAR_5);
  if (VAR_20) {
   FUNC_5(VAR_20, VAR_6, VAR_19);
  }
 }

 FUNC_5(VAR_13, VAR_7, VAR_19);
}
