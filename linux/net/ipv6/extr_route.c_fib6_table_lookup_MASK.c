
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fib6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct flowi6 {int flowi6_flags; int saddr; int daddr; } ;
struct fib6_table {int tb6_root; } ;
struct fib6_result {scalar_t__ f6i; } ;
struct fib6_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fib6_node* FUNC_0 (struct fib6_node*,int *) ;
 struct fib6_node* FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (struct net*,struct fib6_node*,int,struct fib6_result*,int) ;
 int FUNC_3 (struct net*,struct fib6_result*,struct fib6_table*,struct flowi6*) ;

int FUNC_4(struct net *VAR_2, struct fib6_table *VAR_3, int VAR_4,
        struct flowi6 *VAR_5, struct fib6_result *VAR_6, int VAR_7)
{
 struct fib6_node *VAR_8, *VAR_9;

 VAR_8 = FUNC_1(&VAR_3->tb6_root, &VAR_5->daddr, &VAR_5->saddr);
 VAR_9 = VAR_8;

 if (VAR_5->flowi6_flags & VAR_0)
  VAR_4 = 0;

redo_rt6_select:
 FUNC_2(VAR_2, VAR_8, VAR_4, VAR_6, VAR_7);
 if (VAR_6->f6i == VAR_2->ipv6.fib6_null_entry) {
  VAR_8 = FUNC_0(VAR_8, &VAR_5->saddr);
  if (VAR_8)
   goto redo_rt6_select;
  else if (VAR_7 & VAR_1) {

   VAR_7 &= ~VAR_1;
   VAR_8 = VAR_9;
   goto redo_rt6_select;
  }
 }

 FUNC_3(VAR_2, VAR_6, VAR_3, VAR_5);

 return 0;
}
