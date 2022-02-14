
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef unsigned long pgoff_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct page*) ;
 unsigned long FUNC_2 (struct page*) ;
 unsigned long FUNC_3 (struct page*) ;
 unsigned long FUNC_4 (struct page*) ;

pgoff_t FUNC_5(struct page *VAR_1)
{
 struct page *VAR_2 = FUNC_1(VAR_1);
 pgoff_t VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4;

 if (!FUNC_0(VAR_2))
  return FUNC_3(VAR_1);

 if (FUNC_2(VAR_2) >= VAR_0)
  VAR_4 = FUNC_4(VAR_1) - FUNC_4(VAR_2);
 else
  VAR_4 = VAR_1 - VAR_2;

 return (VAR_3 << FUNC_2(VAR_2)) + VAR_4;
}
