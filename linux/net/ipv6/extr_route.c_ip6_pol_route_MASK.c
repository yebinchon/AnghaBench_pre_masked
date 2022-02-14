
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rt6_info {int dummy; } ;
struct TYPE_8__ {scalar_t__ fib6_null_entry; struct rt6_info* ip6_null_entry; TYPE_3__* rt6_stats; TYPE_1__* devconf_all; } ;
struct net {TYPE_4__ ipv6; } ;
struct flowi6 {int flowi6_flags; int daddr; int saddr; } ;
struct fib6_table {int dummy; } ;
struct fib6_result {scalar_t__ f6i; TYPE_2__* nh; } ;
struct TYPE_7__ {int fib_rt_uncache; } ;
struct TYPE_6__ {int fib_nh_gw_family; } ;
struct TYPE_5__ {scalar_t__ forwarding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net*,struct fib6_result*,struct flowi6*,int,int,struct sk_buff const*,int) ;
 int FUNC_3 (struct net*,struct fib6_table*,int,struct flowi6*,struct fib6_result*,int) ;
 int FUNC_4 (struct net*,struct rt6_info**) ;
 struct rt6_info* FUNC_5 (struct fib6_result*,int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 struct rt6_info* FUNC_11 (struct fib6_result*,int *,int *) ;
 struct rt6_info* FUNC_12 (struct fib6_result*) ;
 struct rt6_info* FUNC_13 (struct net*,struct fib6_result*) ;
 int FUNC_14 (struct rt6_info*) ;
 scalar_t__ FUNC_15 (int) ;

struct rt6_info *FUNC_16(struct net *VAR_5, struct fib6_table *VAR_6,
          int VAR_7, struct flowi6 *VAR_8,
          const struct sk_buff *VAR_9, int VAR_10)
{
 struct fib6_result VAR_11 = {};
 struct rt6_info *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 FUNC_0((VAR_10 & VAR_1) &&
       !FUNC_9());

 VAR_13 |= VAR_10 & VAR_2;
 VAR_13 |= VAR_10 & VAR_3;
 if (VAR_5->ipv6.devconf_all->forwarding == 0)
  VAR_13 |= VAR_4;

 FUNC_8();

 FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_11, VAR_13);
 if (VAR_11.f6i == VAR_5->ipv6.fib6_null_entry)
  goto out;

 FUNC_2(VAR_5, &VAR_11, VAR_8, VAR_7, 0, VAR_9, VAR_13);


 VAR_12 = FUNC_11(&VAR_11, &VAR_8->daddr, &VAR_8->saddr);
 if (VAR_12) {
  goto out;
 } else if (FUNC_15((VAR_8->flowi6_flags & VAR_0) &&
       !VAR_11.nh->fib_nh_gw_family)) {





  VAR_12 = FUNC_5(&VAR_11, &VAR_8->daddr, ((void*)0));

  if (VAR_12) {





   FUNC_14(VAR_12);
   FUNC_1(&VAR_5->ipv6.rt6_stats->fib_rt_uncache);
   FUNC_10();

   return VAR_12;
  }
 } else {

  FUNC_6();
  VAR_12 = FUNC_12(&VAR_11);

  if (!VAR_12)
   VAR_12 = FUNC_13(VAR_5, &VAR_11);

  FUNC_7();
 }
out:
 if (!VAR_12)
  VAR_12 = VAR_5->ipv6.ip6_null_entry;
 if (!(VAR_10 & VAR_1))
  FUNC_4(VAR_5, &VAR_12);
 FUNC_10();

 return VAR_12;
}
