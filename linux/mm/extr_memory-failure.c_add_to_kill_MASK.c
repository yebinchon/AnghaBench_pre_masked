
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct to_kill {scalar_t__ size_shift; int nd; struct task_struct* tsk; int addr; } ;
struct task_struct {int comm; } ;
struct page {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct page*,struct vm_area_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct to_kill*) ;
 struct to_kill* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,struct list_head*) ;
 int FUNC_8 (struct page*,struct vm_area_struct*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_12(struct task_struct *VAR_3, struct page *VAR_4,
         struct vm_area_struct *VAR_5,
         struct list_head *VAR_6,
         struct to_kill **VAR_7)
{
 struct to_kill *VAR_8;

 if (*VAR_7) {
  VAR_8 = *VAR_7;
  *VAR_7 = ((void*)0);
 } else {
  VAR_8 = FUNC_6(sizeof(struct to_kill), VAR_1);
  if (!VAR_8) {
   FUNC_10("Memory failure: Out of memory while machine check handling\n");
   return;
  }
 }
 VAR_8->addr = FUNC_8(VAR_4, VAR_5);
 if (FUNC_4(VAR_4))
  VAR_8->size_shift = FUNC_2(VAR_4, VAR_5);
 else
  VAR_8->size_shift = FUNC_1(FUNC_0(VAR_4)) + VAR_2;
 if (VAR_8->addr == -VAR_0) {
  FUNC_11("Memory failure: Unable to find user space address %lx in %s\n",
   FUNC_9(VAR_4), VAR_3->comm);
 } else if (VAR_8->size_shift == 0) {
  FUNC_5(VAR_8);
  return;
 }
 FUNC_3(VAR_3);
 VAR_8->tsk = VAR_3;
 FUNC_7(&VAR_8->nd, VAR_6);
}
