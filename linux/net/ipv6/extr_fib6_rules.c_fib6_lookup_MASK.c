
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fib6_null_entry; int fib6_main_tbl; int fib6_local_tbl; int fib6_rules_ops; scalar_t__ fib6_has_custom_rules; } ;
struct net {TYPE_1__ ipv6; } ;
struct flowi6 {int dummy; } ;
struct fib_lookup_arg {int (* lookup_ptr ) (struct net*,int ,int,struct flowi6*,struct fib6_result*,int) ;int* lookup_data; int flags; struct fib6_result* result; } ;
struct fib6_result {scalar_t__ f6i; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ,int,struct flowi6*,struct fib6_result*,int) ;
 int FUNC_1 (int ,int ,int,struct fib_lookup_arg*) ;
 int FUNC_2 (struct flowi6*) ;
 int FUNC_3 (struct net*,int ) ;

int FUNC_4(struct net *VAR_1, int VAR_2, struct flowi6 *VAR_3,
  struct fib6_result *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_1->ipv6.fib6_has_custom_rules) {
  struct fib_lookup_arg VAR_7 = {
   .lookup_ptr = FUNC_0,
   .lookup_data = &VAR_2,
   .result = VAR_4,
   .flags = VAR_0,
  };

  FUNC_3(VAR_1, FUNC_2(VAR_3));

  VAR_6 = FUNC_1(VAR_1->ipv6.fib6_rules_ops,
           FUNC_2(VAR_3), VAR_5, &VAR_7);
 } else {
  VAR_6 = FUNC_0(VAR_1, VAR_1->ipv6.fib6_local_tbl, VAR_2,
     VAR_3, VAR_4, VAR_5);
  if (VAR_6 || VAR_4->f6i == VAR_1->ipv6.fib6_null_entry)
   VAR_6 = FUNC_0(VAR_1, VAR_1->ipv6.fib6_main_tbl,
      VAR_2, VAR_3, VAR_4, VAR_5);
 }

 return VAR_6;
}
