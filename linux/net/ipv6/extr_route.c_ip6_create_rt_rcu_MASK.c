
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rt6_info {int dst; } ;
struct net_device {int dummy; } ;
struct fib6_result {struct fib6_info* f6i; TYPE_2__* nh; } ;
struct fib6_info {int dummy; } ;
struct TYPE_5__ {struct rt6_info* ip6_null_entry; } ;
struct TYPE_7__ {TYPE_1__ ipv6; } ;
struct TYPE_6__ {struct net_device* fib_nh_dev; } ;


 TYPE_3__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct fib6_info*) ;
 int FUNC_3 (struct fib6_info*) ;
 int FUNC_4 (struct fib6_info*) ;
 struct rt6_info* FUNC_5 (TYPE_3__*,struct net_device*,unsigned short) ;
 int FUNC_6 (struct rt6_info*,struct fib6_result const*) ;

__attribute__((used)) static struct rt6_info *FUNC_7(const struct fib6_result *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->nh->fib_nh_dev;
 struct fib6_info *VAR_2 = VAR_0->f6i;
 unsigned short VAR_3;
 struct rt6_info *VAR_4;

 if (!FUNC_3(VAR_2))
  goto fallback;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_5(FUNC_0(VAR_1), VAR_1, VAR_3);
 if (!VAR_4) {
  FUNC_4(VAR_2);
  goto fallback;
 }

 FUNC_6(VAR_4, VAR_0);
 return VAR_4;

fallback:
 VAR_4 = FUNC_0(VAR_1)->ipv6.ip6_null_entry;
 FUNC_1(&VAR_4->dst);
 return VAR_4;
}
