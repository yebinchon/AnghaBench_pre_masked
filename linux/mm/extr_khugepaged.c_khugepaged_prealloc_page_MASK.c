
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 struct page* FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct page **VAR_0, bool *VAR_1)
{
 if (!*VAR_0)
  *VAR_0 = FUNC_0(VAR_1);

 if (FUNC_1(!*VAR_0))
  return 0;

 return 1;
}
