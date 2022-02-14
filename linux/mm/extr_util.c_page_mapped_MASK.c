
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _mapcount; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct page* FUNC_3 (struct page*) ;
 int * FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (int) ;

bool FUNC_7(struct page *VAR_0)
{
 int VAR_1;

 if (FUNC_6(!FUNC_0(VAR_0)))
  return FUNC_2(&VAR_0->_mapcount) >= 0;
 VAR_0 = FUNC_3(VAR_0);
 if (FUNC_2(FUNC_4(VAR_0)) >= 0)
  return 1;
 if (FUNC_1(VAR_0))
  return 0;
 for (VAR_1 = 0; VAR_1 < FUNC_5(VAR_0); VAR_1++) {
  if (FUNC_2(&VAR_0[VAR_1]._mapcount) >= 0)
   return 1;
 }
 return 0;
}
