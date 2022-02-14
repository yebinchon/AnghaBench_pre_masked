
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int name; } ;
typedef int netdev_tx_t ;
typedef int bdaddr_t ;
struct TYPE_2__ {scalar_t__ chan; int addr; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (scalar_t__,struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct sk_buff*,struct net_device*,int *,int *) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 int VAR_5 = 0;
 bdaddr_t VAR_6;
 u8 VAR_7;




 VAR_3 = FUNC_7(VAR_3, VAR_1);
 if (!VAR_3)
  return VAR_2;






 VAR_5 = FUNC_6(VAR_3, VAR_4, &VAR_6, &VAR_7);
 if (VAR_5 < 0) {
  FUNC_2(VAR_3);
  return VAR_2;
 }

 if (VAR_5) {
  if (FUNC_3(VAR_3)->chan) {
   FUNC_0("xmit %s to %pMR type %d IP %pI6c chan %p",
          VAR_4->name, &VAR_6, VAR_7,
          &FUNC_3(VAR_3)->addr, FUNC_3(VAR_3)->chan);
   VAR_5 = FUNC_5(FUNC_3(VAR_3)->chan, VAR_3, VAR_4);
  } else {
   VAR_5 = -VAR_0;
  }
 } else {



  VAR_5 = FUNC_4(VAR_3, VAR_4);
 }

 FUNC_1(VAR_3);

 if (VAR_5)
  FUNC_0("ERROR: xmit failed (%d)", VAR_5);

 return VAR_5 < 0 ? VAR_2 : VAR_5;
}
