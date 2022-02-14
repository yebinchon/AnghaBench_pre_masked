
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlist_node {int dummy; } ;
struct kmem_cache {int dummy; } ;
struct TYPE_2__ {struct kmem_cache* slab_cache; } ;


 TYPE_1__* FUNC_0 (struct qlist_node*) ;

__attribute__((used)) static struct kmem_cache *FUNC_1(struct qlist_node *VAR_0)
{
 return FUNC_0(VAR_0)->slab_cache;
}
