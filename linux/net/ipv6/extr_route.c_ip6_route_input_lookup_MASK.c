
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct net {int dummy; } ;
struct flowi6 {int daddr; } ;
struct dst_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct dst_entry* FUNC_0 (struct net*,struct flowi6*,struct sk_buff const*,int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;

struct dst_entry *FUNC_2(struct net *VAR_3,
      struct net_device *VAR_4,
      struct flowi6 *VAR_5,
      const struct sk_buff *VAR_6,
      int VAR_7)
{
 if (FUNC_1(&VAR_5->daddr) && VAR_4->type != VAR_0)
  VAR_7 |= VAR_1;

 return FUNC_0(VAR_3, VAR_5, VAR_6, VAR_7, VAR_2);
}
