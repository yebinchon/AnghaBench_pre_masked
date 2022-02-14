
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_bound_dev_if; } ;
struct net_device {scalar_t__ ifindex; } ;
struct ip_mreqn {scalar_t__ imr_ifindex; int imr_multiaddr; } ;
struct in_addr {int dummy; } ;
typedef int mreq ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct ip_mreqn*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,struct in_addr*,int) ;
 int FUNC_3 (struct ip_mreqn*,int ,int) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int
FUNC_5(struct sock *VAR_1, struct in_addr *VAR_2, struct net_device *VAR_3)
{
 struct ip_mreqn VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(&VAR_4.imr_multiaddr, VAR_2, sizeof(struct in_addr));

 if (VAR_1->sk_bound_dev_if && VAR_3->ifindex != VAR_1->sk_bound_dev_if)
  return -VAR_0;

 VAR_4.imr_ifindex = VAR_3->ifindex;

 FUNC_1(VAR_1);
 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 FUNC_4(VAR_1);

 return VAR_5;
}
