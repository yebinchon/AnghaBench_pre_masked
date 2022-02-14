
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {int lru; int free; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct lru_cache *VAR_0)
{
 if (!FUNC_0(&VAR_0->free))
  return 1;
 if (!FUNC_0(&VAR_0->lru))
  return 1;

 return 0;
}
