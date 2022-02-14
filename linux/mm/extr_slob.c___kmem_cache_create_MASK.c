
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slob_rcu {int dummy; } ;
struct kmem_cache {int size; int flags; } ;
typedef int slab_flags_t ;


 int VAR_0 ;

int FUNC_0(struct kmem_cache *VAR_1, slab_flags_t VAR_2)
{
 if (VAR_2 & VAR_0) {

  VAR_1->size += sizeof(struct slob_rcu);
 }
 VAR_1->flags = VAR_2;
 return 0;
}
