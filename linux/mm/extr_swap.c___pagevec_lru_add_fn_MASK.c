
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct lruvec {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,struct page*) ;
 int FUNC_7 (struct page*,struct lruvec*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct page*,int) ;
 int FUNC_14 (struct lruvec*,int ,int ) ;

__attribute__((used)) static void FUNC_15(struct page *VAR_3, struct lruvec *VAR_4,
     void *VAR_5)
{
 enum lru_list VAR_6;
 int VAR_7 = FUNC_5(VAR_3);

 FUNC_6(FUNC_2(VAR_3), VAR_3);

 FUNC_3(VAR_3);
 FUNC_12();

 if (FUNC_9(VAR_3)) {
  VAR_6 = FUNC_11(VAR_3);
  FUNC_14(VAR_4, FUNC_10(VAR_3),
      FUNC_1(VAR_3));
  if (VAR_7)
   FUNC_8(VAR_2);
 } else {
  VAR_6 = VAR_0;
  FUNC_0(VAR_3);
  FUNC_4(VAR_3);
  if (!VAR_7)
   FUNC_8(VAR_1);
 }

 FUNC_7(VAR_3, VAR_4, VAR_6);
 FUNC_13(VAR_3, VAR_6);
}
