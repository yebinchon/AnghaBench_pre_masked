
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

bool FUNC_4(struct page *VAR_1, int *VAR_2)
{
 int VAR_3;


 if (FUNC_0(VAR_1))
  VAR_3 = FUNC_1(VAR_1) ? VAR_0 : 0;
 else
  VAR_3 = VAR_0;
 if (VAR_2)
  *VAR_2 = VAR_3;
 return FUNC_3(VAR_1) == FUNC_2(VAR_1) - VAR_3 - 1;
}
