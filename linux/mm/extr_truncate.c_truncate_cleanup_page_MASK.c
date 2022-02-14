
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ,int ) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct address_space*,int ,int,int) ;

__attribute__((used)) static void
FUNC_7(struct address_space *VAR_2, struct page *VAR_3)
{
 if (FUNC_5(VAR_3)) {
  pgoff_t VAR_4 = FUNC_1(VAR_3) ? VAR_0 : 1;
  FUNC_6(VAR_2, VAR_3->index, VAR_4, 0);
 }

 if (FUNC_4(VAR_3))
  FUNC_3(VAR_3, 0, VAR_1);






 FUNC_2(VAR_3);
 FUNC_0(VAR_3);
}
