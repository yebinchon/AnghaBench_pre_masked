
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_8__ {int plen; struct in6_addr addr; } ;
struct TYPE_6__ {int plen; struct in6_addr addr; } ;
struct TYPE_5__ {int flags; } ;
struct rt6_info {TYPE_4__ rt6i_src; int rt6i_flags; TYPE_2__ rt6i_dst; TYPE_1__ dst; } ;
struct net_device {int dummy; } ;
struct fib6_result {struct fib6_info* f6i; } ;
struct TYPE_7__ {int plen; int addr; } ;
struct fib6_info {TYPE_3__ fib6_dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct fib6_info*) ;
 int FUNC_2 (struct fib6_info*) ;
 struct rt6_info* FUNC_3 (int ,struct net_device*,int ) ;
 int FUNC_4 (struct rt6_info*,struct fib6_result const*) ;
 struct net_device* FUNC_5 (struct fib6_result const*) ;
 scalar_t__ FUNC_6 (int *,struct in6_addr const*) ;
 int FUNC_7 (struct fib6_result const*) ;

__attribute__((used)) static struct rt6_info *FUNC_8(const struct fib6_result *VAR_3,
        const struct in6_addr *VAR_4,
        const struct in6_addr *VAR_5)
{
 struct fib6_info *VAR_6 = VAR_3->f6i;
 struct net_device *VAR_7;
 struct rt6_info *VAR_8;





 if (!FUNC_1(VAR_6))
  return ((void*)0);

 VAR_7 = FUNC_5(VAR_3);
 VAR_8 = FUNC_3(FUNC_0(VAR_7), VAR_7, 0);
 if (!VAR_8) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 FUNC_4(VAR_8, VAR_3);
 VAR_8->rt6i_flags |= VAR_2;
 VAR_8->dst.flags |= VAR_0;
 VAR_8->rt6i_dst.addr = *VAR_4;
 VAR_8->rt6i_dst.plen = 128;

 if (!FUNC_7(VAR_3)) {
  if (VAR_6->fib6_dst.plen != 128 &&
      FUNC_6(&VAR_6->fib6_dst.addr, VAR_4))
   VAR_8->rt6i_flags |= VAR_1;






 }

 return VAR_8;
}
