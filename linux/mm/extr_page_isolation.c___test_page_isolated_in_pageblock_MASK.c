
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_5(unsigned long VAR_0, unsigned long VAR_1,
      bool VAR_2)
{
 struct page *VAR_3;

 while (VAR_0 < VAR_1) {
  if (!FUNC_4(VAR_0)) {
   VAR_0++;
   continue;
  }
  VAR_3 = FUNC_3(VAR_0);
  if (FUNC_0(VAR_3))





   VAR_0 += 1 << FUNC_2(VAR_3);
  else if (VAR_2 && FUNC_1(VAR_3))

   VAR_0++;
  else
   break;
 }

 return VAR_0;
}
