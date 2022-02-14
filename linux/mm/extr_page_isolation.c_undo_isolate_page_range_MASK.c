
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 struct page* FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct page*,unsigned int) ;

void FUNC_5(unsigned long VAR_1, unsigned long VAR_2,
       unsigned VAR_3)
{
 unsigned long VAR_4;
 struct page *VAR_5;

 FUNC_0(!FUNC_1(VAR_1, VAR_0));
 FUNC_0(!FUNC_1(VAR_2, VAR_0));

 for (VAR_4 = VAR_1;
      VAR_4 < VAR_2;
      VAR_4 += VAR_0) {
  VAR_5 = FUNC_2(VAR_4, VAR_0);
  if (!VAR_5 || !FUNC_3(VAR_5))
   continue;
  FUNC_4(VAR_5, VAR_3);
 }
}
