
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page**,unsigned long) ;
 int FUNC_4 (struct page*) ;

void FUNC_5(struct page **VAR_0, unsigned long VAR_1,
          bool VAR_2)
{
 unsigned long VAR_3;







 if (!VAR_2) {
  FUNC_3(VAR_0, VAR_1);
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct page *VAR_4 = FUNC_1(VAR_0[VAR_3]);
  if (!FUNC_0(VAR_4))
   FUNC_4(VAR_4);
  FUNC_2(VAR_4);
 }
}
