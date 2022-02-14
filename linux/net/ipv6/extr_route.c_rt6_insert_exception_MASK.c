
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int addr; } ;
struct TYPE_14__ {int dev; } ;
struct in6_addr {int dummy; } ;
struct TYPE_9__ {struct in6_addr addr; } ;
struct rt6_info {TYPE_3__ rt6i_dst; TYPE_7__ dst; TYPE_2__ rt6i_src; } ;
struct rt6_exception_bucket {scalar_t__ depth; int chain; } ;
struct rt6_exception {int hlist; int stamp; struct rt6_info* rt6i; } ;
struct TYPE_12__ {TYPE_4__* rt6_stats; } ;
struct net {TYPE_5__ ipv6; } ;
struct fib6_result {struct fib6_nh* nh; struct fib6_info* f6i; } ;
struct fib6_nh {int rt6i_exception_bucket; } ;
struct TYPE_8__ {scalar_t__ plen; } ;
struct fib6_info {TYPE_6__* fib6_table; TYPE_1__ fib6_src; } ;
struct TYPE_13__ {int tb6_lock; } ;
struct TYPE_11__ {int fib_rt_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rt6_exception* FUNC_0 (struct rt6_exception_bucket**,int *,struct in6_addr*) ;
 struct net* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (struct net*) ;
 scalar_t__ FUNC_4 (struct fib6_result const*) ;
 scalar_t__ FUNC_5 (struct rt6_exception_bucket*) ;
 int FUNC_6 (struct net*,struct fib6_info*) ;
 int FUNC_7 (int *,int *) ;
 int VAR_6 ;
 struct rt6_exception_bucket* FUNC_8 (int ,int,int ) ;
 struct rt6_exception* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct rt6_exception_bucket*) ;
 struct rt6_exception_bucket* FUNC_12 (int ,int ) ;
 int VAR_7 ;
 int FUNC_13 (struct rt6_exception_bucket*) ;
 int FUNC_14 (struct rt6_exception_bucket*,struct rt6_exception*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct rt6_info *VAR_8,
    const struct fib6_result *VAR_9)
{
 struct net *VAR_10 = FUNC_1(VAR_8->dst.dev);
 struct rt6_exception_bucket *VAR_11;
 struct fib6_info *VAR_12 = VAR_9->f6i;
 struct in6_addr *VAR_13 = ((void*)0);
 struct rt6_exception *VAR_14;
 struct fib6_nh *VAR_15 = VAR_9->nh;
 int VAR_16 = 0;

 FUNC_15(&VAR_7);

 VAR_11 = FUNC_12(VAR_15->rt6i_exception_bucket,
       FUNC_10(&VAR_7));
 if (!VAR_11) {
  VAR_11 = FUNC_8(VAR_2, sizeof(*VAR_11),
     VAR_4);
  if (!VAR_11) {
   VAR_16 = -VAR_1;
   goto out;
  }
  FUNC_11(VAR_15->rt6i_exception_bucket, VAR_11);
 } else if (FUNC_5(VAR_11)) {
  VAR_16 = -VAR_0;
  goto out;
 }
 if (FUNC_2(&VAR_8->dst, VAR_5) >= FUNC_4(VAR_9)) {
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_14 = FUNC_0(&VAR_11, &VAR_8->rt6i_dst.addr,
            VAR_13);
 if (VAR_14)
  FUNC_14(VAR_11, VAR_14);

 VAR_14 = FUNC_9(sizeof(*VAR_14), VAR_4);
 if (!VAR_14) {
  VAR_16 = -VAR_1;
  goto out;
 }
 VAR_14->rt6i = VAR_8;
 VAR_14->stamp = VAR_6;
 FUNC_7(&VAR_14->hlist, &VAR_11->chain);
 VAR_11->depth++;
 VAR_10->ipv6.rt6_stats->fib_rt_cache++;

 if (VAR_11->depth > VAR_3)
  FUNC_13(VAR_11);

out:
 FUNC_16(&VAR_7);


 if (!VAR_16) {
  FUNC_15(&VAR_12->fib6_table->tb6_lock);
  FUNC_6(VAR_10, VAR_12);
  FUNC_16(&VAR_12->fib6_table->tb6_lock);
  FUNC_3(VAR_10);
 }

 return VAR_16;
}
