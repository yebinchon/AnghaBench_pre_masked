
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _mapcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ) ;
 void FUNC_8 (struct page*) ;
 void FUNC_9 (struct page*,int) ;
 scalar_t__ FUNC_10 (int ) ;

void FUNC_11(struct page *VAR_1, bool VAR_2)
{
 if (!FUNC_0(VAR_1))
  return FUNC_9(VAR_1, VAR_2);

 if (VAR_2)
  return FUNC_8(VAR_1);


 if (!FUNC_4(-1, &VAR_1->_mapcount))
  return;






 FUNC_3(VAR_1, VAR_0);

 if (FUNC_10(FUNC_1(VAR_1)))
  FUNC_5(VAR_1);

 if (FUNC_2(VAR_1))
  FUNC_7(FUNC_6(VAR_1));
}
