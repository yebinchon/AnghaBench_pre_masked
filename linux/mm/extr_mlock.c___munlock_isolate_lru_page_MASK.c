
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct lruvec {int dummy; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,struct lruvec*,int ) ;
 int FUNC_3 (struct page*) ;
 struct lruvec* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static bool FUNC_7(struct page *VAR_0, bool VAR_1)
{
 if (FUNC_1(VAR_0)) {
  struct lruvec *VAR_2;

  VAR_2 = FUNC_4(VAR_0, FUNC_6(VAR_0));
  if (VAR_1)
   FUNC_3(VAR_0);
  FUNC_0(VAR_0);
  FUNC_2(VAR_0, VAR_2, FUNC_5(VAR_0));
  return 1;
 }

 return 0;
}
