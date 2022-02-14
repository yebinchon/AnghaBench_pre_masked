
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {int prefix_len; int idev; int addr; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (int ,struct in6_addr*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (struct in6_addr*,int *,int) ;

__attribute__((used)) static void FUNC_3(struct inet6_ifaddr *VAR_0)
{
 struct in6_addr VAR_1;

 if (VAR_0->prefix_len >= 127)
  return;
 FUNC_2(&VAR_1, &VAR_0->addr, VAR_0->prefix_len);
 if (FUNC_1(&VAR_1))
  return;
 FUNC_0(VAR_0->idev, &VAR_1);
}
