
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_pages_count; TYPE_2__* user_pages; } ;
struct task_struct {TYPE_1__ mm; } ;
struct TYPE_4__ {int virt_addr; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct task_struct*,int ) ;
 struct task_struct* VAR_1 ;
 int FUNC_1 (int ,unsigned long,int ) ;

int FUNC_2(struct task_struct *VAR_2) {
 struct task_struct* VAR_3 = VAR_1;
 for (int VAR_4 = 0; VAR_4 < VAR_3->mm.user_pages_count; VAR_4++) {
  unsigned long VAR_5 = FUNC_0(VAR_2, VAR_3->mm.user_pages[VAR_4].virt_addr);
  if( VAR_5 == 0) {
   return -1;
  }
  FUNC_1(VAR_3->mm.user_pages[VAR_4].virt_addr, VAR_5, VAR_0);
 }
 return 0;
}
