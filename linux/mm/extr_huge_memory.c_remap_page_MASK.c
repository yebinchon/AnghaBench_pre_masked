
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,struct page*,int) ;

__attribute__((used)) static void FUNC_2(struct page *VAR_1)
{
 int VAR_2;
 if (FUNC_0(VAR_1)) {
  FUNC_1(VAR_1, VAR_1, 1);
 } else {
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   FUNC_1(VAR_1 + VAR_2, VAR_1 + VAR_2, 1);
 }
}
