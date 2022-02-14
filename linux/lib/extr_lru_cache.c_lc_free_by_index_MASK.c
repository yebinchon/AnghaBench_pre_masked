
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {int lc_cache; int element_off; void** lc_element; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static void FUNC_2(struct lru_cache *VAR_0, unsigned VAR_1)
{
 void *VAR_2 = VAR_0->lc_element[VAR_1];
 FUNC_0(!VAR_2);
 if (VAR_2) {
  VAR_2 -= VAR_0->element_off;
  FUNC_1(VAR_0->lc_cache, VAR_2);
 }
}
