
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct lruvec {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct page*,struct lruvec*,int ) ;
 int FUNC_11 (struct page*,int ) ;
 int FUNC_12 (struct page*,struct lruvec*,scalar_t__) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct lruvec*,int,int ) ;

__attribute__((used)) static void FUNC_15(struct page *VAR_3, struct lruvec *VAR_4,
       void *VAR_5)
{
 if (FUNC_5(VAR_3) && FUNC_4(VAR_3) && FUNC_6(VAR_3) &&
     !FUNC_7(VAR_3) && !FUNC_8(VAR_3)) {
  bool VAR_6 = FUNC_3(VAR_3);

  FUNC_12(VAR_3, VAR_4,
           VAR_0 + VAR_6);
  FUNC_0(VAR_3);
  FUNC_1(VAR_3);





  FUNC_2(VAR_3);
  FUNC_10(VAR_3, VAR_4, VAR_1);

  FUNC_9(VAR_2, FUNC_13(VAR_3));
  FUNC_11(VAR_3, VAR_2);
  FUNC_14(VAR_4, 1, 0);
 }
}
