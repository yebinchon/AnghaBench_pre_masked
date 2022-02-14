
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_2__ {int family; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dst_entry*) ;
 struct dst_entry* FUNC_3 (struct net*,int ,struct dst_entry*) ;
 struct dst_entry* FUNC_4 (struct net*,struct dst_entry*,struct flowi const*,struct sock const*,int) ;

struct dst_entry *FUNC_5(struct net *VAR_3, struct dst_entry *VAR_4,
        const struct flowi *VAR_5,
        const struct sock *VAR_6, int VAR_7)
{
 struct dst_entry *VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7 | VAR_2 |
         VAR_1);

 if (FUNC_0(VAR_8) && FUNC_1(VAR_8) == -VAR_0)
  return FUNC_3(VAR_3, VAR_4->ops->family, VAR_4);

 if (FUNC_0(VAR_8))
  FUNC_2(VAR_4);

 return VAR_8;
}
