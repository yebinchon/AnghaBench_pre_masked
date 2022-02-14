
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct neighbour {int dummy; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_2__ {struct neighbour* (* neigh_lookup ) (struct dst_entry const*,struct sk_buff*,void const*) ;} ;


 struct neighbour* FUNC_0 (struct dst_entry const*,struct sk_buff*,void const*) ;
 struct dst_entry* FUNC_1 (struct dst_entry const*) ;
 void* FUNC_2 (struct dst_entry const*,void const*) ;

__attribute__((used)) static struct neighbour *FUNC_3(const struct dst_entry *VAR_0,
        struct sk_buff *VAR_1,
        const void *VAR_2)
{
 const struct dst_entry *VAR_3 = FUNC_1(VAR_0);

 if (!VAR_1)
  VAR_2 = FUNC_2(VAR_0, VAR_2);
 return VAR_3->ops->neigh_lookup(VAR_3, VAR_1, VAR_2);
}
