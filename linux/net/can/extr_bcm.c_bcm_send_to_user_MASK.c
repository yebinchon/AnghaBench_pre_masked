
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_can {int can_ifindex; int can_family; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ cb; int tstamp; } ;
struct canfd_frame {unsigned int nframes; int flags; } ;
struct bcm_sock {int dropped_usr_msgs; } ;
struct bcm_op {unsigned int cfsiz; int rx_ifindex; int rx_stamp; struct sock* sk; } ;
struct bcm_msg_head {unsigned int nframes; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 struct bcm_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sockaddr_can*,int ,int) ;
 int FUNC_5 (struct sk_buff*,struct canfd_frame*,unsigned int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct bcm_op *VAR_2, struct bcm_msg_head *VAR_3,
        struct canfd_frame *VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;
 struct canfd_frame *VAR_7;
 struct sockaddr_can *VAR_8;
 struct sock *VAR_9 = VAR_2->sk;
 unsigned int VAR_10 = VAR_3->nframes * VAR_2->cfsiz;
 int VAR_11;

 VAR_6 = FUNC_0(sizeof(*VAR_3) + VAR_10, FUNC_2());
 if (!VAR_6)
  return;

 FUNC_5(VAR_6, VAR_3, sizeof(*VAR_3));

 if (VAR_3->nframes) {

  VAR_7 = (struct canfd_frame *)FUNC_6(VAR_6);

  FUNC_5(VAR_6, VAR_4, VAR_10);







  if (VAR_3->nframes == 1)
   VAR_7->flags &= VAR_1;
 }

 if (VAR_5) {

  VAR_6->tstamp = VAR_2->rx_stamp;
 }
 FUNC_8(sizeof(struct sockaddr_can));
 VAR_8 = (struct sockaddr_can *)VAR_6->cb;
 FUNC_4(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->can_family = VAR_0;
 VAR_8->can_ifindex = VAR_2->rx_ifindex;

 VAR_11 = FUNC_7(VAR_9, VAR_6);
 if (VAR_11 < 0) {
  struct bcm_sock *VAR_12 = FUNC_1(VAR_9);

  FUNC_3(VAR_6);

  VAR_12->dropped_usr_msgs++;
 }
}
