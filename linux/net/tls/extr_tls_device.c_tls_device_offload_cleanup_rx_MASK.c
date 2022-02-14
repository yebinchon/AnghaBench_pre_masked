
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_context {scalar_t__ tx_conf; struct net_device* netdev; } ;
struct sock {int dummy; } ;
struct net_device {TYPE_1__* tlsdev_ops; } ;
struct TYPE_2__ {int (* tls_dev_del ) (struct net_device*,struct tls_context*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,struct tls_context*,int ) ;
 struct tls_context* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct sock *VAR_3)
{
 struct tls_context *VAR_4 = FUNC_3(VAR_3);
 struct net_device *VAR_5;

 FUNC_1(&VAR_2);
 VAR_5 = VAR_4->netdev;
 if (!VAR_5)
  goto out;

 VAR_5->tlsdev_ops->tls_dev_del(VAR_5, VAR_4,
     VAR_1);

 if (VAR_4->tx_conf != VAR_0) {
  FUNC_0(VAR_5);
  VAR_4->netdev = ((void*)0);
 }
out:
 FUNC_5(&VAR_2);
 FUNC_4(VAR_3);
}
