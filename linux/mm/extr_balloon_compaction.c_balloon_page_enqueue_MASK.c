
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct balloon_dev_info {int pages_lock; } ;


 int FUNC_0 (struct balloon_dev_info*,struct page*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct balloon_dev_info *VAR_0,
     struct page *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->pages_lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->pages_lock, VAR_2);
}
