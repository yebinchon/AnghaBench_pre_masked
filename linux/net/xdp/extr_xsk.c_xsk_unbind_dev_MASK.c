
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_sock {scalar_t__ state; struct net_device* dev; int umem; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct xdp_sock*) ;

__attribute__((used)) static void FUNC_4(struct xdp_sock *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;

 if (VAR_2->state != VAR_0)
  return;
 FUNC_0(VAR_2->state, VAR_1);


 FUNC_3(VAR_2->umem, VAR_2);
 VAR_2->dev = ((void*)0);
 FUNC_2();
 FUNC_1(VAR_3);
}
