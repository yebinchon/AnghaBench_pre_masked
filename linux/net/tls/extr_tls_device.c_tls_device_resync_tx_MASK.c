
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int * rec_seq; } ;
struct tls_context {int flags; struct net_device* netdev; TYPE_1__ tx; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* tlsdev_ops; } ;
struct TYPE_6__ {int eor; } ;
struct TYPE_5__ {int (* tls_dev_resync ) (struct net_device*,struct sock*,int ,int *,int ) ;} ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,struct sock*,int ,int *,int ) ;
 struct sk_buff* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_3, struct tls_context *VAR_4,
     u32 VAR_5)
{
 struct net_device *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8 = 0;
 u8 *VAR_9;

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7)
  FUNC_0(VAR_7)->eor = 1;

 VAR_9 = VAR_4->tx.rec_seq;

 FUNC_2(&VAR_2);
 VAR_6 = VAR_4->netdev;
 if (VAR_6)
  VAR_8 = VAR_6->tlsdev_ops->tls_dev_resync(VAR_6, VAR_3, VAR_5,
        VAR_9,
        VAR_0);
 FUNC_5(&VAR_2);
 if (VAR_8)
  return;

 FUNC_1(VAR_1, &VAR_4->flags);
}
