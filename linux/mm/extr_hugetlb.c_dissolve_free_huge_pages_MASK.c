
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct page* FUNC_2 (unsigned long) ;

int FUNC_3(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 struct page *VAR_4;
 int VAR_5 = 0;

 if (!FUNC_1())
  return VAR_5;

 for (VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3 += 1 << VAR_0) {
  VAR_4 = FUNC_2(VAR_3);
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5)
   break;
 }

 return VAR_5;
}
