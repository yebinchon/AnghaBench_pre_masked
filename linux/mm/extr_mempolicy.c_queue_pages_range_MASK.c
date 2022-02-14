
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_pages {unsigned long flags; int * prev; int * nmask; struct list_head* pagelist; } ;
struct mm_struct {int dummy; } ;
struct list_head {int dummy; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,unsigned long,unsigned long,int *,struct queue_pages*) ;

__attribute__((used)) static int
FUNC_1(struct mm_struct *VAR_1, unsigned long VAR_2, unsigned long VAR_3,
  nodemask_t *VAR_4, unsigned long VAR_5,
  struct list_head *VAR_6)
{
 struct queue_pages VAR_7 = {
  .pagelist = VAR_6,
  .flags = VAR_5,
  .nmask = VAR_4,
  .prev = ((void*)0),
 };

 return FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_0, &VAR_7);
}
