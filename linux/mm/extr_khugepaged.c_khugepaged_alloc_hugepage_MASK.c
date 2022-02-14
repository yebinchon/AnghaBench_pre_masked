
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct page *FUNC_6(bool *VAR_2)
{
 struct page *VAR_3;

 do {
  VAR_3 = FUNC_0();
  if (!VAR_3) {
   FUNC_1(VAR_1);
   if (!*VAR_2)
    return ((void*)0);

   *VAR_2 = 0;
   FUNC_2();
  } else
   FUNC_1(VAR_0);
 } while (FUNC_5(!VAR_3) && FUNC_4(FUNC_3()));

 return VAR_3;
}
