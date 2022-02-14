
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bnep_session {TYPE_1__* sock; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {struct sock* sk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct bnep_session*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct bnep_session*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct bnep_session* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_2,
     struct net_device *VAR_3)
{
 struct bnep_session *VAR_4 = FUNC_4(VAR_3);
 struct sock *VAR_5 = VAR_4->sock->sk;

 FUNC_0("skb %p, dev %p", VAR_2, VAR_3);
 FUNC_6(VAR_3);
 FUNC_9(&VAR_5->sk_write_queue, VAR_2);
 FUNC_10(FUNC_7(VAR_5));

 if (FUNC_8(&VAR_5->sk_write_queue) >= VAR_0) {
  FUNC_0("tx queue is full");



  FUNC_5(VAR_3);
 }

 return VAR_1;
}
