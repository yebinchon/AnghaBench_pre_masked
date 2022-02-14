
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int pgmap; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct page *VAR_0)
{
 if (FUNC_3(VAR_0)) {
  FUNC_4(VAR_0->pgmap);





  return;
 }

 if (FUNC_5(FUNC_0(VAR_0)))
  FUNC_1(VAR_0);
 else
  FUNC_2(VAR_0);
}
