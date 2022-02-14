
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; scalar_t__ ctor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct kmem_cache *VAR_3)
{
 if (FUNC_0(&VAR_2))
  return !(VAR_3->ctor ||
    (VAR_3->flags & (VAR_1 | VAR_0)));
 return 0;
}
