
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rt6_info {int dst; } ;
struct TYPE_2__ {scalar_t__ fib6_null_entry; struct rt6_info* ip6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct flowi6 {int flowi6_flags; scalar_t__ flowi6_oif; int saddr; int daddr; } ;
struct fib6_table {int tb6_root; } ;
struct fib6_result {scalar_t__ f6i; int fib6_flags; } ;
struct fib6_node {int leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct fib6_node* FUNC_2 (struct fib6_node*,int *) ;
 struct fib6_node* FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (struct net*,struct fib6_result*,struct flowi6*,scalar_t__,int,struct sk_buff const*,int) ;
 struct rt6_info* FUNC_5 (struct fib6_result*) ;
 scalar_t__ FUNC_6 (struct net*,struct rt6_info**) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct net*,struct fib6_result*,int *,scalar_t__,int) ;
 struct rt6_info* FUNC_11 (struct fib6_result*,int *,int *) ;
 int FUNC_12 (struct net*,struct fib6_result*,struct fib6_table*,struct flowi6*) ;

__attribute__((used)) static struct rt6_info *FUNC_13(struct net *VAR_4,
          struct fib6_table *VAR_5,
          struct flowi6 *VAR_6,
          const struct sk_buff *VAR_7,
          int VAR_8)
{
 struct fib6_result VAR_9 = {};
 struct fib6_node *VAR_10;
 struct rt6_info *VAR_11;

 if (VAR_6->flowi6_flags & VAR_0)
  VAR_8 &= ~VAR_1;

 FUNC_8();
 VAR_10 = FUNC_3(&VAR_5->tb6_root, &VAR_6->daddr, &VAR_6->saddr);
restart:
 VAR_9.f6i = FUNC_7(VAR_10->leaf);
 if (!VAR_9.f6i)
  VAR_9.f6i = VAR_4->ipv6.fib6_null_entry;
 else
  FUNC_10(VAR_4, &VAR_9, &VAR_6->saddr, VAR_6->flowi6_oif,
     VAR_8);

 if (VAR_9.f6i == VAR_4->ipv6.fib6_null_entry) {
  VAR_10 = FUNC_2(VAR_10, &VAR_6->saddr);
  if (VAR_10)
   goto restart;

  VAR_11 = VAR_4->ipv6.ip6_null_entry;
  FUNC_0(&VAR_11->dst);
  goto out;
 } else if (VAR_9.fib6_flags & VAR_2) {
  goto do_create;
 }

 FUNC_4(VAR_4, &VAR_9, VAR_6, VAR_6->flowi6_oif,
    VAR_6->flowi6_oif != 0, VAR_7, VAR_8);


 VAR_11 = FUNC_11(&VAR_9, &VAR_6->daddr, &VAR_6->saddr);
 if (VAR_11) {
  if (FUNC_6(VAR_4, &VAR_11))
   FUNC_1(&VAR_11->dst, VAR_3);
 } else {
do_create:
  VAR_11 = FUNC_5(&VAR_9);
 }

out:
 FUNC_12(VAR_4, &VAR_9, VAR_5, VAR_6);

 FUNC_9();

 return VAR_11;
}
