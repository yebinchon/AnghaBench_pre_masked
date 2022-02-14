
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _mapcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int,int *) ;
 int FUNC_7 (struct page*) ;
 int * FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct page *VAR_4)
{
 int VAR_5, VAR_6;

 if (!FUNC_6(-1, FUNC_8(VAR_4)))
  return;


 if (FUNC_11(FUNC_1(VAR_4)))
  return;

 if (!FUNC_0(VAR_0))
  return;

 FUNC_4(VAR_4, VAR_3);

 if (FUNC_3(VAR_4)) {




  for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_1; VAR_5++) {
   if (FUNC_6(-1, &VAR_4[VAR_5]._mapcount))
    VAR_6++;
  }
 } else {
  VAR_6 = VAR_1;
 }

 if (FUNC_11(FUNC_2(VAR_4)))
  FUNC_7(VAR_4);

 if (VAR_6) {
  FUNC_5(FUNC_10(VAR_4), VAR_2, -VAR_6);
  FUNC_9(VAR_4);
 }
}
