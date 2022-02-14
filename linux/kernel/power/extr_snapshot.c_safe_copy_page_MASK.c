
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (struct page*,int,int) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, struct page *VAR_1)
{
 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_0, FUNC_3(VAR_1));
 } else {
  FUNC_1(VAR_1, 1, 1);
  FUNC_0(VAR_0, FUNC_3(VAR_1));
  FUNC_1(VAR_1, 1, 0);
 }
}
