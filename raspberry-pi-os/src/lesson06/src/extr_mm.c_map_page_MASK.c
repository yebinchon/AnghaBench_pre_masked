
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_page {unsigned long member_0; unsigned long member_1; } ;
struct TYPE_2__ {unsigned long pgd; unsigned long* kernel_pages; size_t kernel_pages_count; int user_pages_count; struct user_page* user_pages; } ;
struct task_struct {TYPE_1__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 (unsigned long*,int ,unsigned long,int*) ;
 int FUNC_2 (unsigned long*,unsigned long,unsigned long) ;

void FUNC_3(struct task_struct *VAR_4, unsigned long VAR_5, unsigned long VAR_6){
 unsigned long VAR_7;
 if (!VAR_4->mm.pgd) {
  VAR_4->mm.pgd = FUNC_0();
  VAR_4->mm.kernel_pages[++VAR_4->mm.kernel_pages_count] = VAR_4->mm.pgd;
 }
 VAR_7 = VAR_4->mm.pgd;
 int VAR_8;
 unsigned long VAR_9 = FUNC_1((unsigned long *)(VAR_7 + VAR_3), VAR_0, VAR_5, &VAR_8);
 if (VAR_8) {
  VAR_4->mm.kernel_pages[++VAR_4->mm.kernel_pages_count] = VAR_9;
 }
 unsigned long VAR_10 = FUNC_1((unsigned long *)(VAR_9 + VAR_3) , VAR_2, VAR_5, &VAR_8);
 if (VAR_8) {
  VAR_4->mm.kernel_pages[++VAR_4->mm.kernel_pages_count] = VAR_10;
 }
 unsigned long VAR_11 = FUNC_1((unsigned long *)(VAR_10 + VAR_3), VAR_1, VAR_5, &VAR_8);
 if (VAR_8) {
  VAR_4->mm.kernel_pages[++VAR_4->mm.kernel_pages_count] = VAR_11;
 }
 FUNC_2((unsigned long *)(VAR_11 + VAR_3), VAR_5, VAR_6);
 struct user_page VAR_12 = {VAR_6, VAR_5};
 VAR_4->mm.user_pages[VAR_4->mm.user_pages_count++] = VAR_12;
}
