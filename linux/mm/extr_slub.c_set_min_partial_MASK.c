
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {unsigned long min_partial; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static void FUNC_0(struct kmem_cache *VAR_2, unsigned long VAR_3)
{
 if (VAR_3 < VAR_1)
  VAR_3 = VAR_1;
 else if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 VAR_2->min_partial = VAR_3;
}
