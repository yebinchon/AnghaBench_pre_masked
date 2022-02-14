
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rt6_info {int rt6i_uncached; } ;
struct TYPE_4__ {TYPE_1__* ip6_null_entry; } ;
struct net {TYPE_2__ ipv6; } ;
struct flowi6 {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_3__ {struct dst_entry dst; } ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* FUNC_2 (struct net*,struct sock const*,struct flowi6*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

struct dst_entry *FUNC_6(struct net *VAR_0,
      const struct sock *VAR_1,
      struct flowi6 *VAR_2,
      int VAR_3)
{
        struct dst_entry *VAR_4;
        struct rt6_info *VAR_5;

        FUNC_4();
        VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
        VAR_5 = (struct rt6_info *)VAR_4;

        if (FUNC_3(&VAR_5->rt6i_uncached) && !FUNC_1(VAR_4)) {
                VAR_4 = &VAR_0->ipv6.ip6_null_entry->dst;
                FUNC_0(VAR_4);
        }
        FUNC_5();

        return VAR_4;
}
