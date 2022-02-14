
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; scalar_t__ ctor; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(gfp_t VAR_4, struct kmem_cache *VAR_5)
{
 if (FUNC_0(&VAR_3)) {
  if (VAR_5->ctor)
   return 0;
  if (VAR_5->flags & (VAR_1 | VAR_0))
   return VAR_4 & VAR_2;
  return 1;
 }
 return VAR_4 & VAR_2;
}
