
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; struct page** cache; } ;
struct page_pool {TYPE_1__ alloc; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page_pool*) ;
 int FUNC_1 (struct page_pool*,struct page*) ;
 int FUNC_2 (struct page_pool*) ;

bool FUNC_3(struct page_pool *VAR_0)
{
 struct page *VAR_1;





 while (VAR_0->alloc.count) {
  VAR_1 = VAR_0->alloc.cache[--VAR_0->alloc.count];
  FUNC_1(VAR_0, VAR_1);
 }




 FUNC_0(VAR_0);

 return FUNC_2(VAR_0);
}
