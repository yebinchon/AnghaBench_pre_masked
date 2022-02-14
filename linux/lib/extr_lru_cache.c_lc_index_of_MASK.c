
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {int dummy; } ;
struct lc_element {unsigned int lc_index; } ;


 int FUNC_0 (struct lru_cache*,struct lc_element*) ;

unsigned int FUNC_1(struct lru_cache *VAR_0, struct lc_element *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 return VAR_1->lc_index;
}
