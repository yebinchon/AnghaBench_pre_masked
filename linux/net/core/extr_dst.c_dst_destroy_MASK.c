
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_dst {struct dst_entry* child; } ;
struct metadata_dst {int dummy; } ;
struct dst_entry {int flags; TYPE_1__* ops; int lwtstate; scalar_t__ dev; scalar_t__ xfrm; } ;
struct TYPE_2__ {int kmem_cachep; int (* destroy ) (struct dst_entry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (int ,struct dst_entry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct metadata_dst*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct dst_entry*) ;

struct dst_entry *FUNC_8(struct dst_entry * VAR_2)
{
 struct dst_entry *VAR_3 = ((void*)0);

 FUNC_6();
 if (!(VAR_2->flags & VAR_1))
  FUNC_1(VAR_2->ops, -1);

 if (VAR_2->ops->destroy)
  VAR_2->ops->destroy(VAR_2);
 if (VAR_2->dev)
  FUNC_0(VAR_2->dev);

 FUNC_4(VAR_2->lwtstate);

 if (VAR_2->flags & VAR_0)
  FUNC_5((struct metadata_dst *)VAR_2);
 else
  FUNC_3(VAR_2->ops->kmem_cachep, VAR_2);

 VAR_2 = VAR_3;
 if (VAR_2)
  FUNC_2(VAR_2);
 return ((void*)0);
}
