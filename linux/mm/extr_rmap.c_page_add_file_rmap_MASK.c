
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _mapcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,struct page*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct page*,int ) ;
 int FUNC_9 (struct page*,int ,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct page*) ;
 int * FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;

void FUNC_17(struct page *VAR_4, bool VAR_5)
{
 int VAR_6, VAR_7 = 1;

 FUNC_6(VAR_5 && !FUNC_4(VAR_4), VAR_4);
 FUNC_14(VAR_4);
 if (VAR_5 && FUNC_4(VAR_4)) {
  for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (FUNC_10(&VAR_4[VAR_6]._mapcount))
    VAR_7++;
  }
  if (!FUNC_10(FUNC_13(VAR_4)))
   goto out;
  if (FUNC_2(VAR_4))
   FUNC_8(VAR_4, VAR_3);
  else
   FUNC_8(VAR_4, VAR_2);
 } else {
  if (FUNC_3(VAR_4) && FUNC_15(VAR_4)) {
   FUNC_7(!FUNC_0(VAR_4));

   FUNC_5(FUNC_12(VAR_4));
   if (FUNC_1(VAR_4))
    FUNC_11(FUNC_12(VAR_4));
  }
  if (!FUNC_10(&VAR_4->_mapcount))
   goto out;
 }
 FUNC_9(VAR_4, VAR_1, VAR_7);
out:
 FUNC_16(VAR_4);
}
