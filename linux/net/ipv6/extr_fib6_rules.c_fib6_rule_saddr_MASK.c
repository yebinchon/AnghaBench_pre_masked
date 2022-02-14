
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {struct in6_addr saddr; int daddr; } ;
struct fib_rule {int flags; } ;
struct TYPE_2__ {scalar_t__ plen; int addr; } ;
struct fib6_rule {TYPE_1__ src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net*,struct net_device const*,int *,int ,struct in6_addr*) ;
 int FUNC_1 (struct in6_addr*,int *,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_3, struct fib_rule *VAR_4, int VAR_5,
      struct flowi6 *VAR_6, const struct net_device *VAR_7)
{
 struct fib6_rule *VAR_8 = (struct fib6_rule *)VAR_4;




 if ((VAR_4->flags & VAR_1) &&
     VAR_8->src.plen && !(VAR_5 & VAR_2)) {
  struct in6_addr VAR_9;

  if (FUNC_0(VAR_3, VAR_7, &VAR_6->daddr,
           FUNC_2(VAR_5), &VAR_9))
   return -VAR_0;

  if (!FUNC_1(&VAR_9, &VAR_8->src.addr, VAR_8->src.plen))
   return -VAR_0;

  VAR_6->saddr = VAR_9;
 }

 return 0;
}
