
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _mapcount; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,struct page*) ;
 int FUNC_4 (int *) ;
 struct page* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,int) ;

int FUNC_9(struct page *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;


 FUNC_3(FUNC_1(VAR_1), VAR_1);

 if (FUNC_7(!FUNC_2(VAR_1))) {
  VAR_6 = FUNC_4(&VAR_1->_mapcount) + 1;
  if (VAR_2)
   *VAR_2 = VAR_6;
  return VAR_6;
 }

 VAR_1 = FUNC_5(VAR_1);

 VAR_5 = VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_6 = FUNC_4(&VAR_1[VAR_3]._mapcount) + 1;
  VAR_4 = FUNC_8(VAR_4, VAR_6);
  VAR_5 += VAR_6;
 }
 if (FUNC_0(VAR_1)) {
  VAR_4 -= 1;
  VAR_5 -= VAR_0;
 }
 VAR_6 = FUNC_6(VAR_1);
 VAR_4 += VAR_6;
 VAR_5 += VAR_6;
 if (VAR_2)
  *VAR_2 = VAR_5;
 return VAR_4;
}
