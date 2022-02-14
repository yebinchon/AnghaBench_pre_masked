
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct lruvec {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct page*,struct lruvec*,int) ;
 int FUNC_7 (struct page*,struct lruvec*,scalar_t__) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct lruvec*,int,int ) ;

__attribute__((used)) static void FUNC_12(struct page *VAR_2, struct lruvec *VAR_3,
       void *VAR_4)
{
 if (FUNC_3(VAR_2) && FUNC_2(VAR_2) && !FUNC_4(VAR_2)) {
  int VAR_5 = FUNC_9(VAR_2);
  int VAR_6 = FUNC_10(VAR_2);

  FUNC_7(VAR_2, VAR_3, VAR_6 + VAR_0);
  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
  FUNC_6(VAR_2, VAR_3, VAR_6);

  FUNC_5(VAR_1, FUNC_8(VAR_2));
  FUNC_11(VAR_3, VAR_5, 0);
 }
}
