
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rt6_info {int rt6i_src; int rt6i_dst; } ;
struct ipv6_pinfo {int saddr_cache; int daddr_cache; } ;
struct flowi6 {int flowi6_flags; scalar_t__ flowi6_oif; int saddr; int daddr; } ;
struct dst_entry {TYPE_2__* dev; TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ ifindex; } ;
struct TYPE_3__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dst_entry*) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static struct dst_entry *FUNC_3(struct sock *VAR_2,
       struct dst_entry *VAR_3,
       const struct flowi6 *VAR_4)
{
 struct ipv6_pinfo *VAR_5 = FUNC_1(VAR_2);
 struct rt6_info *VAR_6;

 if (!VAR_3)
  goto out;

 if (VAR_3->ops->family != VAR_0) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_6 = (struct rt6_info *)VAR_3;
 if (FUNC_2(&VAR_6->rt6i_dst, &VAR_4->daddr, VAR_5->daddr_cache) ||



    (!(VAR_4->flowi6_flags & VAR_1) &&
       (VAR_4->flowi6_oif && VAR_4->flowi6_oif != VAR_3->dev->ifindex))) {
  FUNC_0(VAR_3);
  VAR_3 = ((void*)0);
 }

out:
 return VAR_3;
}
