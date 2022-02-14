
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dev_addr_genid; } ;
struct net {TYPE_2__ ipv6; } ;
struct inet6_ifaddr {struct fib6_info* rt; TYPE_5__* idev; int peer_addr; int addr; } ;
struct fib6_info {int fib6_node; } ;
struct TYPE_7__ {int forwarding; } ;
struct TYPE_10__ {TYPE_3__* dev; TYPE_1__ cnf; } ;
struct TYPE_9__ {int flags; int name; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;


 struct fib6_info* FUNC_1 (int *,int,TYPE_3__*,int ,int ,int) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 int FUNC_3 (struct inet6_ifaddr*) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (int *,int,int ,TYPE_3__*,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 struct net* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int,struct inet6_ifaddr*) ;
 int FUNC_9 (struct net*,struct fib6_info*) ;
 int FUNC_10 (struct net*,struct fib6_info*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct net*) ;

__attribute__((used)) static void FUNC_15(int VAR_2, struct inet6_ifaddr *VAR_3)
{
 struct net *VAR_4 = FUNC_7(VAR_3->idev->dev);

 if (VAR_2)
  FUNC_0();

 FUNC_8(VAR_2 ? : 128, VAR_3);

 switch (VAR_2) {
 case 128:
  if (VAR_3->rt && !FUNC_13(VAR_3->rt->fib6_node)) {
   FUNC_10(VAR_4, VAR_3->rt);
  } else if (!VAR_3->rt && (VAR_3->idev->dev->flags & VAR_1)) {
   FUNC_12("BUG: Address %pI6c on device %s is missing its host route.\n",
    &VAR_3->addr, VAR_3->idev->dev->name);
  }

  if (VAR_3->idev->cnf.forwarding)
   FUNC_2(VAR_3);
  if (!FUNC_11(&VAR_3->peer_addr))
   FUNC_5(&VAR_3->peer_addr, 128, 0,
           VAR_3->idev->dev, 0, 0,
           VAR_0);
  break;
 case 129:
  if (VAR_3->idev->cnf.forwarding)
   FUNC_3(VAR_3);
  FUNC_4(VAR_3->idev, &VAR_3->addr);
  if (!FUNC_11(&VAR_3->peer_addr)) {
   struct fib6_info *VAR_5;

   VAR_5 = FUNC_1(&VAR_3->peer_addr, 128,
             VAR_3->idev->dev, 0, 0,
             0);
   if (VAR_5)
    FUNC_9(VAR_4, VAR_5);
  }
  if (VAR_3->rt) {
   FUNC_9(VAR_4, VAR_3->rt);
   VAR_3->rt = ((void*)0);
  }
  FUNC_14(VAR_4);
  break;
 }
 FUNC_6(&VAR_4->ipv6.dev_addr_genid);
}
