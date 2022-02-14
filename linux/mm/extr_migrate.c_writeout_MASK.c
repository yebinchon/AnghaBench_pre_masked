
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int nr_to_write; int for_reclaim; int range_end; int range_start; int sync_mode; } ;
struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* writepage ) (struct page*,struct writeback_control*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,struct page*,int) ;
 int FUNC_3 (struct page*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_4(struct address_space *VAR_6, struct page *VAR_7)
{
 struct writeback_control VAR_8 = {
  .sync_mode = VAR_5,
  .nr_to_write = 1,
  .range_start = 0,
  .range_end = VAR_4,
  .for_reclaim = 1
 };
 int VAR_9;

 if (!VAR_6->a_ops->writepage)

  return -VAR_2;

 if (!FUNC_0(VAR_7))

  return -VAR_1;
 FUNC_2(VAR_7, VAR_7, 0);

 VAR_9 = VAR_6->a_ops->writepage(VAR_7, &VAR_8);

 if (VAR_9 != VAR_0)

  FUNC_1(VAR_7);

 return (VAR_9 < 0) ? -VAR_3 : -VAR_1;
}
