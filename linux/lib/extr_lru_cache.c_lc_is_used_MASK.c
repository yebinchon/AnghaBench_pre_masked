
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {int dummy; } ;
struct lc_element {scalar_t__ refcnt; } ;


 struct lc_element* FUNC_0 (struct lru_cache*,unsigned int,int) ;

bool FUNC_1(struct lru_cache *VAR_0, unsigned int VAR_1)
{
 struct lc_element *VAR_2 = FUNC_0(VAR_0, VAR_1, 1);
 return VAR_2 && VAR_2->refcnt;
}
