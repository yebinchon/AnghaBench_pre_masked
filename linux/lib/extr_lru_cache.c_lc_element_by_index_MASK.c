
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {unsigned int nr_elements; struct lc_element** lc_element; } ;
struct lc_element {unsigned int lc_index; } ;


 int FUNC_0 (int) ;

struct lc_element *FUNC_1(struct lru_cache *VAR_0, unsigned VAR_1)
{
 FUNC_0(VAR_1 >= VAR_0->nr_elements);
 FUNC_0(VAR_0->lc_element[VAR_1] == ((void*)0));
 FUNC_0(VAR_0->lc_element[VAR_1]->lc_index != VAR_1);
 return VAR_0->lc_element[VAR_1];
}
