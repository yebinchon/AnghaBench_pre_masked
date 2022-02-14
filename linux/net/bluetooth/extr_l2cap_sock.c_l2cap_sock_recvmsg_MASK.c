
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {scalar_t__ type; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_rcvbuf; int sk_rmem_alloc; } ;
struct msghdr {int dummy; } ;
struct l2cap_pinfo {TYPE_1__* chan; int * rx_busy_skb; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ mode; int conn_state; void* state; int src_type; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sock*,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct socket*,struct msghdr*,size_t,int) ;
 int FUNC_7 (struct socket*,struct msghdr*,size_t,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 struct l2cap_pinfo* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct socket *VAR_7, struct msghdr *VAR_8,
         size_t VAR_9, int VAR_10)
{
 struct sock *VAR_11 = VAR_7->sk;
 struct l2cap_pinfo *VAR_12 = FUNC_9(VAR_11);
 int VAR_13;

 FUNC_10(VAR_11);

 if (VAR_11->sk_state == VAR_1 && FUNC_12(VAR_3,
          &FUNC_5(VAR_11)->flags)) {
  if (FUNC_4(VAR_12->chan->src_type)) {
   VAR_11->sk_state = VAR_2;
   VAR_12->chan->state = VAR_2;
   FUNC_1(VAR_12->chan);
  } else {
   VAR_11->sk_state = VAR_0;
   VAR_12->chan->state = VAR_0;
   FUNC_0(VAR_12->chan);
  }

  VAR_13 = 0;
  goto done;
 }

 FUNC_11(VAR_11);

 if (VAR_7->type == VAR_6)
  VAR_13 = FUNC_7(VAR_7, VAR_8, VAR_9, VAR_10);
 else
  VAR_13 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10);

 if (VAR_12->chan->mode != VAR_5)
  return VAR_13;



 FUNC_10(VAR_11);

 if (!FUNC_12(VAR_4, &VAR_12->chan->conn_state))
  goto done;

 if (VAR_12->rx_busy_skb) {
  if (!FUNC_2(VAR_11, VAR_12->rx_busy_skb))
   VAR_12->rx_busy_skb = ((void*)0);
  else
   goto done;
 }





 if (FUNC_3(&VAR_11->sk_rmem_alloc) <= VAR_11->sk_rcvbuf >> 1)
  FUNC_8(VAR_12->chan, 0);

done:
 FUNC_11(VAR_11);
 return VAR_13;
}
