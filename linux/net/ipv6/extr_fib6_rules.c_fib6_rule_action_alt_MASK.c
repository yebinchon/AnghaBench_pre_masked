
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ fib6_null_entry; } ;
struct net {TYPE_2__ ipv6; } ;
struct flowi6 {int dummy; } ;
struct TYPE_4__ {struct flowi6 ip6; } ;
struct flowi {TYPE_1__ u; } ;
struct fib_rule {int action; struct net* fr_net; } ;
struct fib_lookup_arg {scalar_t__ lookup_data; struct fib6_result* result; } ;
struct fib6_table {int dummy; } ;
struct fib6_result {scalar_t__ f6i; TYPE_3__* nh; } ;
struct TYPE_6__ {int fib_nh_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 struct fib6_table* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*,struct fib_rule*,int,struct flowi6*,int ) ;
 int FUNC_2 (struct net*,struct fib6_table*,int,struct flowi6*,struct fib6_result*,int) ;
 int FUNC_3 (struct fib_rule*,struct fib_lookup_arg*) ;

__attribute__((used)) static int FUNC_4(struct fib_rule *VAR_4, struct flowi *VAR_5,
    int VAR_6, struct fib_lookup_arg *VAR_7)
{
 struct fib6_result *VAR_8 = VAR_7->result;
 struct flowi6 *VAR_9 = &VAR_5->u.ip6;
 struct net *VAR_10 = VAR_4->fr_net;
 struct fib6_table *VAR_11;
 int VAR_12, *VAR_13;
 u32 VAR_14;

 switch (VAR_4->action) {
 case 129:
  break;
 case 128:
  return -VAR_3;
 case 130:
  return -VAR_0;
 case 131:
 default:
  return -VAR_2;
 }

 VAR_14 = FUNC_3(VAR_4, VAR_7);
 VAR_11 = FUNC_0(VAR_10, VAR_14);
 if (!VAR_11)
  return -VAR_1;

 VAR_13 = (int *)VAR_7->lookup_data;
 VAR_12 = FUNC_2(VAR_10, VAR_11, *VAR_13, VAR_9, VAR_8, VAR_6);
 if (!VAR_12 && VAR_8->f6i != VAR_10->ipv6.fib6_null_entry)
  VAR_12 = FUNC_1(VAR_10, VAR_4, VAR_6, VAR_9,
          VAR_8->nh->fib_nh_dev);
 else
  VAR_12 = -VAR_1;

 return VAR_12;
}
