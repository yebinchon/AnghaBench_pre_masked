
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int nr_to_write; int sync_mode; } ;
struct page {struct address_space* mapping; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* writepage ) (struct page*,struct writeback_control*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,struct writeback_control*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

int FUNC_9(struct page *VAR_1)
{
 struct address_space *VAR_2 = VAR_1->mapping;
 int VAR_3 = 0;
 struct writeback_control VAR_4 = {
  .sync_mode = VAR_0,
  .nr_to_write = 1,
 };

 FUNC_0(!FUNC_1(VAR_1));

 FUNC_8(VAR_1);

 if (FUNC_2(VAR_1)) {
  FUNC_4(VAR_1);
  VAR_3 = VAR_2->a_ops->writepage(VAR_1, &VAR_4);
  if (VAR_3 == 0)
   FUNC_8(VAR_1);
  FUNC_5(VAR_1);
 } else {
  FUNC_7(VAR_1);
 }

 if (!VAR_3)
  VAR_3 = FUNC_3(VAR_2);
 return VAR_3;
}
