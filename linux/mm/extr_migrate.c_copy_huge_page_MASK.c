
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,struct page*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct page*,struct page*) ;
 int FUNC_6 (struct page*) ;
 struct hstate* FUNC_7 (struct page*) ;
 int FUNC_8 (struct hstate*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct page *VAR_1, struct page *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (FUNC_1(VAR_2)) {

  struct hstate *VAR_5 = FUNC_7(VAR_2);
  VAR_4 = FUNC_8(VAR_5);

  if (FUNC_9(VAR_4 > VAR_0)) {
   FUNC_3(VAR_1, VAR_2, VAR_4);
   return;
  }
 } else {

  FUNC_0(!FUNC_2(VAR_2));
  VAR_4 = FUNC_6(VAR_2);
 }

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  FUNC_4();
  FUNC_5(VAR_1 + VAR_3, VAR_2 + VAR_3);
 }
}
