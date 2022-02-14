
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned long FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct page* FUNC_7 (unsigned long) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static unsigned long FUNC_10(void)
{
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_2();
 if (VAR_1 >= VAR_3) {
  VAR_4 = VAR_1 - VAR_3;
  VAR_3 = 0;
 } else {
  VAR_4 = 0;
  VAR_3 -= VAR_1;
 }
 VAR_3 += FUNC_3();
 if (VAR_0 >= VAR_3) {
  VAR_5 = VAR_0 - VAR_3;
 } else {
  VAR_5 = 0;
  VAR_3 -= VAR_0;
  if (VAR_4 > VAR_3)
   VAR_4 -= VAR_3;
  else
   VAR_4 = 0;
 }
 VAR_6 = VAR_4 + VAR_5;

 FUNC_6(&VAR_2);

 while (VAR_4 > 0 || VAR_5 > 0) {
  unsigned long VAR_7 = FUNC_5(&VAR_2);
  struct page *VAR_8 = FUNC_7(VAR_7);

  if (FUNC_0(VAR_8)) {
   if (!VAR_5)
    continue;
   VAR_5--;
   VAR_0--;
  } else {
   if (!VAR_4)
    continue;
   VAR_4--;
   VAR_1--;
  }
  FUNC_4(&VAR_2, VAR_7);
  FUNC_8(VAR_8);
  FUNC_9(VAR_8);
  FUNC_1(VAR_8);
 }

 return VAR_6;
}
