
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; scalar_t__ refcount; scalar_t__ usersize; scalar_t__ ctor; } ;


 int VAR_0 ;
 int FUNC_0 (struct kmem_cache*) ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct kmem_cache *VAR_2)
{
 if (VAR_1 || (VAR_2->flags & VAR_0))
  return 1;

 if (!FUNC_0(VAR_2))
  return 1;

 if (VAR_2->ctor)
  return 1;

 if (VAR_2->usersize)
  return 1;




 if (VAR_2->refcount < 0)
  return 1;

 return 0;
}
