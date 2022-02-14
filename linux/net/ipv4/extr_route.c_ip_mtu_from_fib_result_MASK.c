
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int mtu; } ;
struct fib_result {struct fib_info* fi; struct fib_nh_common* nhc; } ;
struct fib_nh_exception {scalar_t__ fnhe_pmtu; int fnhe_expires; } ;
struct fib_nh_common {int nhc_lwtstate; struct net_device* nhc_dev; } ;
struct fib_info {scalar_t__ fib_mtu; TYPE_2__* fib_metrics; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ sysctl_ip_fwd_use_pmtu; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;
struct TYPE_5__ {int* metrics; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (struct net_device*) ;
 struct fib_nh_exception* FUNC_2 (struct fib_nh_common*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

u32 FUNC_7(struct fib_result *VAR_4, __be32 VAR_5)
{
 struct fib_nh_common *VAR_6 = VAR_4->nhc;
 struct net_device *VAR_7 = VAR_6->nhc_dev;
 struct fib_info *VAR_8 = VAR_4->fi;
 u32 VAR_9 = 0;

 if (FUNC_1(VAR_7)->ipv4.sysctl_ip_fwd_use_pmtu ||
     VAR_8->fib_metrics->metrics[VAR_1 - 1] & (1 << VAR_2))
  VAR_9 = VAR_8->fib_mtu;

 if (FUNC_3(!VAR_9)) {
  struct fib_nh_exception *VAR_10;

  VAR_10 = FUNC_2(VAR_6, VAR_5);
  if (VAR_10 && !FUNC_6(VAR_3, VAR_10->fnhe_expires))
   VAR_9 = VAR_10->fnhe_pmtu;
 }

 if (FUNC_3(!VAR_9))
  VAR_9 = FUNC_5(FUNC_0(VAR_7->mtu), VAR_0);

 return VAR_9 - FUNC_4(VAR_6->nhc_lwtstate, VAR_9);
}
