
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; struct net_device* dev; } ;
struct net_device {int dn_ptr; } ;
struct endnode_hello_message {int msgflg; int area; int mpd; int datalen; int id; int data; void* timer; int neighbor; int seed; void* blksize; int iinfo; int tiver; } ;
struct dn_neigh {int addr; } ;
struct dn_ifaddr {int ifa_local; } ;
struct TYPE_2__ {scalar_t__ t3; } ;
struct dn_dev {TYPE_1__ parms; scalar_t__ router; } ;
typedef void* __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct net_device*) ;
 struct dn_dev* FUNC_7 (int ) ;
 void** FUNC_8 (struct sk_buff*,int) ;
 struct endnode_hello_message* FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_6, struct dn_ifaddr *VAR_7)
{
 struct endnode_hello_message *VAR_8;
 struct sk_buff *VAR_9 = ((void*)0);
 __le16 *VAR_10;
 struct dn_dev *VAR_11 = FUNC_7(VAR_6->dn_ptr);

 if ((VAR_9 = FUNC_1(((void*)0), sizeof(*VAR_8), VAR_2)) == ((void*)0))
  return;

 VAR_9->dev = VAR_6;

 VAR_8 = FUNC_9(VAR_9, sizeof(*VAR_8));

 VAR_8->msgflg = 0x0D;
 FUNC_4(VAR_8->tiver, VAR_3, 3);
 FUNC_2(VAR_8->id, VAR_7->ifa_local);
 VAR_8->iinfo = VAR_0;
 VAR_8->blksize = FUNC_0(FUNC_6(VAR_6));
 VAR_8->area = 0x00;
 FUNC_5(VAR_8->seed, 0, 8);
 FUNC_4(VAR_8->neighbor, VAR_4, VAR_1);

 if (VAR_11->router) {
  struct dn_neigh *VAR_12 = (struct dn_neigh *)VAR_11->router;
  FUNC_2(VAR_8->neighbor, VAR_12->addr);
 }

 VAR_8->timer = FUNC_0((unsigned short)VAR_11->parms.t3);
 VAR_8->mpd = 0x00;
 VAR_8->datalen = 0x02;
 FUNC_5(VAR_8->data, 0xAA, 2);

 VAR_10 = FUNC_8(VAR_9, 2);
 *VAR_10 = FUNC_0(VAR_9->len - 2);

 FUNC_10(VAR_9);

 FUNC_3(VAR_9, VAR_5, VAR_8->id);
}
