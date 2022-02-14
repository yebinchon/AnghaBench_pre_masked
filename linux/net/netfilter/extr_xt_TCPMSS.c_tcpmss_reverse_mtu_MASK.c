
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u_int32_t ;
struct sk_buff {int dummy; } ;
struct rtable {int dst; } ;
struct net {int dummy; } ;
struct flowi6 {int daddr; } ;
struct flowi4 {int daddr; } ;
struct TYPE_4__ {struct flowi6 ip6; struct flowi6 ip4; } ;
struct flowi {TYPE_1__ u; } ;
struct dst_entry {int dummy; } ;
struct TYPE_6__ {int saddr; } ;
struct TYPE_5__ {int saddr; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (struct sk_buff const*) ;
 TYPE_2__* FUNC_3 (struct sk_buff const*) ;
 int FUNC_4 (struct flowi6*,int ,int) ;
 int FUNC_5 (struct net*,struct dst_entry**,struct flowi*,int,unsigned int) ;

__attribute__((used)) static u_int32_t FUNC_6(struct net *VAR_1,
        const struct sk_buff *VAR_2,
        unsigned int VAR_3)
{
 struct flowi VAR_4;
 struct rtable *VAR_5 = ((void*)0);
 u_int32_t VAR_6 = ~0U;

 if (VAR_3 == VAR_0) {
  struct flowi4 *VAR_7 = &VAR_4.u.ip4;
  FUNC_4(VAR_7, 0, sizeof(*VAR_7));
  VAR_7->daddr = FUNC_2(VAR_2)->saddr;
 } else {
  struct flowi6 *VAR_8 = &VAR_4.u.ip6;

  FUNC_4(VAR_8, 0, sizeof(*VAR_8));
  VAR_8->daddr = FUNC_3(VAR_2)->saddr;
 }

 FUNC_5(VAR_1, (struct dst_entry **)&VAR_5, &VAR_4, 0, VAR_3);
 if (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_0(&VAR_5->dst);
  FUNC_1(&VAR_5->dst);
 }
 return VAR_6;
}
