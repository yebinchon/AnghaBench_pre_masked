
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct address_space*,int) ;
 struct address_space* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

void FUNC_7(struct page *VAR_0, bool VAR_1, int VAR_2)
{
 if (!VAR_1) {
  if (!VAR_2) {
   FUNC_2(VAR_0);
  } else {
   FUNC_0(VAR_0);
   FUNC_1(VAR_0);
  }
  FUNC_6(VAR_0);
 } else {
  if (VAR_2) {
   struct address_space *VAR_3;

   FUNC_1(VAR_0);
   VAR_3 = FUNC_5(VAR_0);
   if (VAR_3)
    FUNC_4(VAR_3, VAR_2);
  }
  FUNC_3(VAR_0);
 }
}
