
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {unsigned long flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct lru_cache *VAR_2)
{
 unsigned long VAR_3;
 do {
  VAR_3 = FUNC_0(&VAR_2->flags, 0, VAR_0);
 } while (FUNC_1 (VAR_3 == VAR_1));

 return 0 == VAR_3;
}
