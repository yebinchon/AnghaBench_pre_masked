
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct vport {TYPE_2__* ops; TYPE_3__* dev; } ;
struct sk_buff {TYPE_3__* dev; int protocol; } ;
struct TYPE_4__ {int tx_errors; } ;
struct TYPE_6__ {int mtu; int type; TYPE_1__ stats; int name; } ;
struct TYPE_5__ {int (* send ) (struct sk_buff*) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,int ,int,int) ;
 int FUNC_4 (struct sk_buff*,TYPE_3__*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct vport *VAR_3, struct sk_buff *VAR_4, u8 VAR_5)
{
 int VAR_6 = VAR_3->dev->mtu;

 switch (VAR_3->dev->type) {
 case 128:
  if (VAR_5 == VAR_1) {
   FUNC_7(VAR_4);
   FUNC_6(VAR_4);
   VAR_4->protocol = FUNC_1(VAR_0);
  } else if (VAR_5 != VAR_2) {
   FUNC_0(1);
   goto drop;
  }
  break;
 case 129:
  if (VAR_5 != VAR_1)
   goto drop;
  break;
 default:
  goto drop;
 }

 if (FUNC_9(FUNC_4(VAR_4, VAR_3->dev) > VAR_6 &&
       !FUNC_5(VAR_4))) {
  FUNC_3("%s: dropped over-mtu packet: %d > %d\n",
         VAR_3->dev->name,
         FUNC_4(VAR_4, VAR_3->dev), VAR_6);
  VAR_3->dev->stats.tx_errors++;
  goto drop;
 }

 VAR_4->dev = VAR_3->dev;
 VAR_3->ops->send(VAR_4);
 return;

drop:
 FUNC_2(VAR_4);
}
