
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int slab_cache; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 void const* VAR_0 ;
 size_t FUNC_3 (struct page*) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 struct page* FUNC_6 (void const*) ;

size_t FUNC_7(const void *VAR_1)
{
 struct page *VAR_2;

 if (FUNC_5(VAR_1 == VAR_0))
  return 0;

 VAR_2 = FUNC_6(VAR_1);

 if (FUNC_5(!FUNC_1(VAR_2))) {
  FUNC_2(!FUNC_0(VAR_2));
  return FUNC_3(VAR_2);
 }

 return FUNC_4(VAR_2->slab_cache);
}
