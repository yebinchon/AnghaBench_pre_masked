
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ fib6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {scalar_t__ flowi6_oif; int saddr; struct in6_addr const daddr; } ;
struct fib6_table {int dummy; } ;
struct fib6_result {scalar_t__ f6i; } ;
struct fib6_config {scalar_t__ fc_ifindex; int fc_prefsrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fib6_table* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*,struct fib6_result*,struct flowi6*,scalar_t__,int,int *,int) ;
 int FUNC_2 (struct net*,struct fib6_table*,scalar_t__,struct flowi6*,struct fib6_result*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_3, struct fib6_config *VAR_4,
          const struct in6_addr *VAR_5, u32 VAR_6,
          int VAR_7, struct fib6_result *VAR_8)
{
 struct flowi6 VAR_9 = {
  .flowi6_oif = VAR_4->fc_ifindex,
  .daddr = *VAR_5,
  .saddr = VAR_4->fc_prefsrc,
 };
 struct fib6_table *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_3, VAR_6);
 if (!VAR_10)
  return -VAR_0;

 if (!FUNC_3(&VAR_4->fc_prefsrc))
  VAR_7 |= VAR_1;

 VAR_7 |= VAR_2;

 VAR_11 = FUNC_2(VAR_3, VAR_10, VAR_4->fc_ifindex, &VAR_9, VAR_8, VAR_7);
 if (!VAR_11 && VAR_8->f6i != VAR_3->ipv6.fib6_null_entry)
  FUNC_1(VAR_3, VAR_8, &VAR_9, VAR_4->fc_ifindex,
     VAR_4->fc_ifindex != 0, ((void*)0), VAR_7);

 return VAR_11;
}
