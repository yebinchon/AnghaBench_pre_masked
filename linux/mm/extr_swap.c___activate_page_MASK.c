
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct lruvec {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct page*,struct lruvec*,int) ;
 int FUNC_6 (struct page*,struct lruvec*,int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct lruvec*,int,int) ;

__attribute__((used)) static void FUNC_11(struct page *VAR_2, struct lruvec *VAR_3,
       void *VAR_4)
{
 if (FUNC_1(VAR_2) && !FUNC_0(VAR_2) && !FUNC_2(VAR_2)) {
  int VAR_5 = FUNC_7(VAR_2);
  int VAR_6 = FUNC_8(VAR_2);

  FUNC_6(VAR_2, VAR_3, VAR_6);
  FUNC_3(VAR_2);
  VAR_6 += VAR_0;
  FUNC_5(VAR_2, VAR_3, VAR_6);
  FUNC_9(VAR_2);

  FUNC_4(VAR_1);
  FUNC_10(VAR_3, VAR_5, 1);
 }
}
