
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; int red_left_pad; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kmem_cache*) ;

void *FUNC_1(struct kmem_cache *VAR_1, void *VAR_2)
{
 if (FUNC_0(VAR_1) && VAR_1->flags & VAR_0)
  VAR_2 += VAR_1->red_left_pad;

 return VAR_2;
}
