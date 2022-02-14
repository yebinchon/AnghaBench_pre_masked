
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_4__ {int s_addr; } ;
struct ip_mreqn {int imr_ifindex; TYPE_1__ imr_multiaddr; } ;
struct in_ifaddr {TYPE_3__* ifa_dev; int ifa_address; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct TYPE_5__ {int ifindex; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sock*,struct ip_mreqn*) ;
 int FUNC_2 (struct sock*,struct ip_mreqn*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_0, bool VAR_1, const struct in_ifaddr *VAR_2)
{
 struct ip_mreqn VAR_3 = {
  .imr_multiaddr.s_addr = VAR_2->ifa_address,
  .imr_ifindex = VAR_2->ifa_dev->dev->ifindex,
 };
 int VAR_4;

 FUNC_0();

 FUNC_3(VAR_0);
 if (VAR_1)
  VAR_4 = FUNC_1(VAR_0, &VAR_3);
 else
  VAR_4 = FUNC_2(VAR_0, &VAR_3);
 FUNC_4(VAR_0);

 return VAR_4;
}
