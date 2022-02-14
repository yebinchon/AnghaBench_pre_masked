
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_detail {scalar_t__ last_close; int writers; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct cache_detail *VAR_0)
{
 if (FUNC_0(&VAR_0->writers))
  return 1;
 if (VAR_0->last_close == 0)

  return 0;
 if (VAR_0->last_close < FUNC_1() - 30)





   return 0;
 return 1;
}
