
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_can {int can_ifindex; int can_family; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; struct sock* sk; TYPE_1__* dev; scalar_t__ cb; } ;
struct raw_sock {int count; scalar_t__ join_filters; TYPE_3__* uniq; int fd_frames; int recv_own_msgs; } ;
struct TYPE_8__ {scalar_t__ skbcnt; } ;
struct TYPE_7__ {int join_rx_count; } ;
struct TYPE_6__ {scalar_t__ skbcnt; int join_rx_count; struct sk_buff* skb; } ;
struct TYPE_5__ {int ifindex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sockaddr_can*,int ,int) ;
 unsigned int* FUNC_3 (struct sk_buff*) ;
 struct raw_sock* FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 TYPE_2__* FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_10(struct sk_buff *VAR_5, void *VAR_6)
{
 struct sock *VAR_7 = (struct sock *)VAR_6;
 struct raw_sock *VAR_8 = FUNC_4(VAR_7);
 struct sockaddr_can *VAR_9;
 struct sk_buff *VAR_10;
 unsigned int *VAR_11;


 if (!VAR_8->recv_own_msgs && VAR_5->sk == VAR_7)
  return;


 if (!VAR_8->fd_frames && VAR_5->len != VAR_1)
  return;


 if (FUNC_9(VAR_8->uniq)->skb == VAR_5 &&
     FUNC_9(VAR_8->uniq)->skbcnt == FUNC_0(VAR_5)->skbcnt) {
  if (VAR_8->join_filters) {
   FUNC_8(VAR_8->uniq->join_rx_count);

   if (FUNC_9(VAR_8->uniq)->join_rx_count < VAR_8->count)
    return;
  } else {
   return;
  }
 } else {
  FUNC_9(VAR_8->uniq)->skb = VAR_5;
  FUNC_9(VAR_8->uniq)->skbcnt = FUNC_0(VAR_5)->skbcnt;
  FUNC_9(VAR_8->uniq)->join_rx_count = 1;

  if (VAR_8->join_filters && VAR_8->count > 1)
   return;
 }


 VAR_10 = FUNC_5(VAR_5, VAR_2);
 if (!VAR_10)
  return;







 FUNC_7(sizeof(struct sockaddr_can));
 VAR_9 = (struct sockaddr_can *)VAR_10->cb;
 FUNC_2(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->can_family = VAR_0;
 VAR_9->can_ifindex = VAR_10->dev->ifindex;


 VAR_11 = FUNC_3(VAR_10);
 *VAR_11 = 0;
 if (VAR_5->sk)
  *VAR_11 |= VAR_4;
 if (VAR_5->sk == VAR_7)
  *VAR_11 |= VAR_3;

 if (FUNC_6(VAR_7, VAR_10) < 0)
  FUNC_1(VAR_10);
}
