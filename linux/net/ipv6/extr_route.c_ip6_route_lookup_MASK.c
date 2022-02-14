
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct flowi6 {int dummy; } ;
struct dst_entry {int dummy; } ;


 struct dst_entry* FUNC_0 (struct net*,struct flowi6*,struct sk_buff const*,int,int ) ;
 int VAR_0 ;

struct dst_entry *FUNC_1(struct net *VAR_1, struct flowi6 *VAR_2,
       const struct sk_buff *VAR_3, int VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0);
}
