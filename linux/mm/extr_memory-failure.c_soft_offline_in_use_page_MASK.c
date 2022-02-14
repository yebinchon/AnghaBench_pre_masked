
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int) ;
 struct page* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*,int) ;
 int FUNC_11 (struct page*,int) ;
 int FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static int FUNC_15(struct page *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct page *VAR_6 = FUNC_4(VAR_2);

 if (!FUNC_1(VAR_2) && FUNC_2(VAR_6)) {
  FUNC_6(VAR_2);
  if (!FUNC_0(VAR_2) || FUNC_13(FUNC_12(VAR_2))) {
   FUNC_14(VAR_2);
   if (!FUNC_0(VAR_2))
    FUNC_8("soft offline: %#lx: non anonymous thp\n", FUNC_7(VAR_2));
   else
    FUNC_8("soft offline: %#lx: thp split failed\n", FUNC_7(VAR_2));
   FUNC_9(VAR_2);
   return -VAR_0;
  }
  FUNC_14(VAR_2);
 }
 VAR_5 = FUNC_5(VAR_2);
 FUNC_10(VAR_2, VAR_1);
 if (FUNC_1(VAR_2))
  VAR_4 = FUNC_11(VAR_2, VAR_3);
 else
  VAR_4 = FUNC_3(VAR_2, VAR_3);
 FUNC_10(VAR_2, VAR_5);
 return VAR_4;
}
