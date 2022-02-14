
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct selinux_state {TYPE_1__* ss; } ;
struct selinux_kernel_status {int deny_unknown; scalar_t__ policyload; int enforcing; scalar_t__ sequence; int version; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int status_lock; struct page* status_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct selinux_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct selinux_kernel_status* FUNC_4 (struct page*) ;
 int FUNC_5 (struct selinux_state*) ;

struct page *FUNC_6(struct selinux_state *VAR_3)
{
 struct selinux_kernel_status *VAR_4;
 struct page *VAR_5 = ((void*)0);

 FUNC_2(&VAR_3->ss->status_lock);
 if (!VAR_3->ss->status_page) {
  VAR_3->ss->status_page = FUNC_0(VAR_0|VAR_2);

  if (VAR_3->ss->status_page) {
   VAR_4 = FUNC_4(VAR_3->ss->status_page);

   VAR_4->version = VAR_1;
   VAR_4->sequence = 0;
   VAR_4->enforcing = FUNC_1(VAR_3);






   VAR_4->policyload = 0;
   VAR_4->deny_unknown =
    !FUNC_5(VAR_3);
  }
 }
 VAR_5 = VAR_3->ss->status_page;
 FUNC_3(&VAR_3->ss->status_lock);

 return VAR_5;
}
