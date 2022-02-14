
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,unsigned long,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct page*) ;
 unsigned long FUNC_4 (struct page*) ;
 int FUNC_5 (char*,unsigned long) ;
 int FUNC_6 (char*,unsigned long) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,int) ;

int FUNC_12(struct page *VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6 = FUNC_4(VAR_3);

 if (FUNC_3(VAR_3)) {
  FUNC_5("soft_offline: %#lx page is device page\n",
    VAR_6);
  if (VAR_4 & VAR_2)
   FUNC_9(VAR_3);
  return -VAR_1;
 }

 if (FUNC_0(VAR_3)) {
  FUNC_6("soft offline: %#lx page already poisoned\n", VAR_6);
  if (VAR_4 & VAR_2)
   FUNC_7(VAR_3);
  return -VAR_0;
 }

 FUNC_2();
 VAR_5 = FUNC_1(VAR_3, VAR_6, VAR_4);
 FUNC_8();

 if (VAR_5 > 0)
  VAR_5 = FUNC_11(VAR_3, VAR_4);
 else if (VAR_5 == 0)
  VAR_5 = FUNC_10(VAR_3);

 return VAR_5;
}
