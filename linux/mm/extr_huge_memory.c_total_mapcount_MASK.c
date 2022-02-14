
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _mapcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct page *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 FUNC_5(FUNC_4(VAR_1), VAR_1);

 if (FUNC_8(!FUNC_1(VAR_1)))
  return FUNC_6(&VAR_1->_mapcount) + 1;

 VAR_3 = FUNC_7(VAR_1);
 if (FUNC_3(VAR_1))
  return VAR_3;
 VAR_4 = VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_4 += FUNC_6(&VAR_1[VAR_2]._mapcount) + 1;

 if (!FUNC_0(VAR_1))
  return VAR_4 - VAR_3 * VAR_0;
 if (FUNC_2(VAR_1))
  VAR_4 -= VAR_0;
 return VAR_4;
}
