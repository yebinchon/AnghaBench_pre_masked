
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_node {int dummy; } ;
struct kmem_cache {struct kmem_cache_node** node; } ;



__attribute__((used)) static inline struct kmem_cache_node *FUNC_0(struct kmem_cache *VAR_0, int VAR_1)
{
 return VAR_0->node[VAR_1];
}
