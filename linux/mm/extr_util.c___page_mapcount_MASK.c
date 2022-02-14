
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _mapcount; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 struct page* FUNC_4 (struct page*) ;
 int * FUNC_5 (struct page*) ;

int FUNC_6(struct page *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(&VAR_0->_mapcount) + 1;




 if (!FUNC_0(VAR_0) && !FUNC_2(VAR_0))
  return VAR_1;
 VAR_0 = FUNC_4(VAR_0);
 VAR_1 += FUNC_3(FUNC_5(VAR_0)) + 1;
 if (FUNC_1(VAR_0))
  VAR_1--;
 return VAR_1;
}
