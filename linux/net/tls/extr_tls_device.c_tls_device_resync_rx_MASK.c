
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tls_context {int flags; int netdev; } ;
struct sock {int dummy; } ;
struct net_device {TYPE_1__* tlsdev_ops; } ;
struct TYPE_2__ {int (* tls_dev_resync ) (struct net_device*,struct sock*,int ,int *,int ) ;} ;


 struct net_device* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct net_device*,struct sock*,int ,int *,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct tls_context *VAR_2,
     struct sock *VAR_3, u32 VAR_4, u8 *VAR_5)
{
 struct net_device *VAR_6;

 if (FUNC_1(FUNC_4(VAR_1, &VAR_2->flags)))
  return;
 VAR_6 = FUNC_0(VAR_2->netdev);
 if (VAR_6)
  VAR_6->tlsdev_ops->tls_dev_resync(VAR_6, VAR_3, VAR_4, VAR_5,
         VAR_0);
 FUNC_2(VAR_1, &VAR_2->flags);
}
