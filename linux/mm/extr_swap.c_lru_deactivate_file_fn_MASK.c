
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct lruvec {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct page*,struct lruvec*,int) ;
 int FUNC_10 (struct page*,struct lruvec*,int) ;
 int FUNC_11 (struct page*,struct lruvec*,int) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (struct page*) ;
 int FUNC_15 (struct lruvec*,int,int ) ;

__attribute__((used)) static void FUNC_16(struct page *VAR_2, struct lruvec *VAR_3,
         void *VAR_4)
{
 int VAR_5, VAR_6;
 bool VAR_7;

 if (!FUNC_4(VAR_2))
  return;

 if (FUNC_5(VAR_2))
  return;


 if (FUNC_14(VAR_2))
  return;

 VAR_7 = FUNC_2(VAR_2);
 VAR_6 = FUNC_12(VAR_2);
 VAR_5 = FUNC_13(VAR_2);

 FUNC_11(VAR_2, VAR_3, VAR_5 + VAR_7);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);

 if (FUNC_6(VAR_2) || FUNC_3(VAR_2)) {





  FUNC_9(VAR_2, VAR_3, VAR_5);
  FUNC_7(VAR_2);
 } else {




  FUNC_10(VAR_2, VAR_3, VAR_5);
  FUNC_8(VAR_1);
 }

 if (VAR_7)
  FUNC_8(VAR_0);
 FUNC_15(VAR_3, VAR_6, 0);
}
