
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int error; } ;
struct rt6_info {TYPE_4__ dst; } ;
struct TYPE_7__ {struct rt6_info* ip6_null_entry; struct rt6_info* ip6_prohibit_entry; struct rt6_info* ip6_blk_hole_entry; } ;
struct net {TYPE_2__ ipv6; } ;
struct flowi6 {int dummy; } ;
struct TYPE_6__ {struct flowi6 ip6; } ;
struct flowi {TYPE_1__ u; } ;
struct fib_rule {int action; struct net* fr_net; } ;
struct fib_lookup_arg {int lookup_data; struct rt6_info* (* lookup_ptr ) (struct net*,struct fib6_table*,struct flowi6*,int ,int) ;struct fib6_result* result; } ;
struct fib6_table {int dummy; } ;
struct fib6_result {struct rt6_info* rt6; } ;
typedef struct rt6_info* (* pol_lookup_t ) (struct net*,struct fib6_table*,struct flowi6*,int ,int) ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 struct fib6_table* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net*,struct fib_rule*,int,struct flowi6*,int ) ;
 int FUNC_3 (struct fib_rule*,struct fib_lookup_arg*) ;
 TYPE_3__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct rt6_info*,int) ;

__attribute__((used)) static int FUNC_6(struct fib_rule *VAR_5, struct flowi *VAR_6,
         int VAR_7, struct fib_lookup_arg *VAR_8)
{
 struct fib6_result *VAR_9 = VAR_8->result;
 struct flowi6 *VAR_10 = &VAR_6->u.ip6;
 struct rt6_info *VAR_11 = ((void*)0);
 struct fib6_table *VAR_12;
 struct net *VAR_13 = VAR_5->fr_net;
 pol_lookup_t VAR_14 = VAR_8->lookup_ptr;
 int VAR_15 = 0;
 u32 VAR_16;

 switch (VAR_5->action) {
 case 129:
  break;
 case 128:
  VAR_15 = -VAR_3;
  VAR_11 = VAR_13->ipv6.ip6_null_entry;
  goto discard_pkt;
 default:
 case 131:
  VAR_15 = -VAR_2;
  VAR_11 = VAR_13->ipv6.ip6_blk_hole_entry;
  goto discard_pkt;
 case 130:
  VAR_15 = -VAR_0;
  VAR_11 = VAR_13->ipv6.ip6_prohibit_entry;
  goto discard_pkt;
 }

 VAR_16 = FUNC_3(VAR_5, VAR_8);
 VAR_12 = FUNC_1(VAR_13, VAR_16);
 if (!VAR_12) {
  VAR_15 = -VAR_1;
  goto out;
 }

 VAR_11 = VAR_14(VAR_13, VAR_12, VAR_10, VAR_8->lookup_data, VAR_7);
 if (VAR_11 != VAR_13->ipv6.ip6_null_entry) {
  VAR_15 = FUNC_2(VAR_13, VAR_5, VAR_7, VAR_10,
          FUNC_4(&VAR_11->dst)->dev);

  if (VAR_15 == -VAR_1)
   goto again;

  VAR_15 = VAR_11->dst.error;
  if (VAR_15 != -VAR_1)
   goto out;
 }
again:
 FUNC_5(VAR_11, VAR_7);
 VAR_15 = -VAR_1;
 VAR_11 = ((void*)0);
 goto out;

discard_pkt:
 if (!(VAR_7 & VAR_4))
  FUNC_0(&VAR_11->dst);
out:
 VAR_9->rt6 = VAR_11;
 return VAR_15;
}
