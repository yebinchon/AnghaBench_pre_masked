
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_cache {int lock; struct cache_ops const* ops; int head; } ;
struct cache_ops {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(
    struct idmap_cache *VAR_0,
    const struct cache_ops *VAR_1)
{
    FUNC_1(&VAR_0->head);
    VAR_0->ops = VAR_1;
    FUNC_0(&VAR_0->lock);
}
