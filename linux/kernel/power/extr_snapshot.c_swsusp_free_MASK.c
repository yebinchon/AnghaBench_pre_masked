
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct page*) ;
 struct page* FUNC_7 (unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long) ;
 int * VAR_8 ;

void FUNC_9(void)
{
 unsigned long VAR_9, VAR_10;

 if (!VAR_4 || !VAR_5)
  goto out;

 FUNC_5(VAR_4);
 FUNC_5(VAR_5);

loop:
 VAR_10 = FUNC_4(VAR_5);
 VAR_9 = FUNC_4(VAR_4);





 do {
  if (VAR_9 < VAR_10)
   VAR_9 = FUNC_4(VAR_4);
  if (VAR_10 < VAR_9)
   VAR_10 = FUNC_4(VAR_5);
 } while (VAR_9 != VAR_10);

 if (VAR_10 != VAR_0 && FUNC_8(VAR_10)) {
  struct page *VAR_11 = FUNC_7(VAR_10);

  FUNC_3(VAR_4);
  FUNC_3(VAR_5);
  FUNC_2(FUNC_6(VAR_11));
  FUNC_0(VAR_11);
  goto loop;
 }

out:
 VAR_6 = 0;
 VAR_7 = 0;
 VAR_8 = ((void*)0);
 VAR_3 = ((void*)0);
 VAR_2 = 0;
 VAR_1 = 0;
 FUNC_1();
}
