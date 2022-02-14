
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct net_device {int ifindex; } ;
struct canfd_frame {int dummy; } ;
struct can_skb_priv {int dummy; } ;
struct bcm_op {int cfsiz; int currframe; int nframes; int frames_abs; int sk; int ifindex; struct canfd_frame* frames; } ;
struct TYPE_2__ {scalar_t__ skbcnt; int ifindex; } ;


 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 struct net_device* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,struct canfd_frame*,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct bcm_op *VAR_0)
{
 struct sk_buff *VAR_1;
 struct net_device *VAR_2;
 struct canfd_frame *VAR_3 = VAR_0->frames + VAR_0->cfsiz * VAR_0->currframe;


 if (!VAR_0->ifindex)
  return;

 VAR_2 = FUNC_5(FUNC_9(VAR_0->sk), VAR_0->ifindex);
 if (!VAR_2) {

  return;
 }

 VAR_1 = FUNC_0(VAR_0->cfsiz + sizeof(struct can_skb_priv), FUNC_7());
 if (!VAR_1)
  goto out;

 FUNC_3(VAR_1);
 FUNC_2(VAR_1)->ifindex = VAR_2->ifindex;
 FUNC_2(VAR_1)->skbcnt = 0;

 FUNC_8(VAR_1, VAR_3, VAR_0->cfsiz);


 VAR_1->dev = VAR_2;
 FUNC_4(VAR_1, VAR_0->sk);
 FUNC_1(VAR_1, 1);


 VAR_0->currframe++;
 VAR_0->frames_abs++;


 if (VAR_0->currframe >= VAR_0->nframes)
  VAR_0->currframe = 0;
out:
 FUNC_6(VAR_2);
}
