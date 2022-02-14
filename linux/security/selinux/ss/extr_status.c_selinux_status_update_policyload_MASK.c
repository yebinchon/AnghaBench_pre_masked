
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct selinux_state {TYPE_1__* ss; } ;
struct selinux_kernel_status {int policyload; int deny_unknown; int sequence; } ;
struct TYPE_2__ {int status_lock; scalar_t__ status_page; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct selinux_kernel_status* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct selinux_state*) ;
 int FUNC_4 () ;

void FUNC_5(struct selinux_state *VAR_0,
          int VAR_1)
{
 struct selinux_kernel_status *VAR_2;

 FUNC_0(&VAR_0->ss->status_lock);
 if (VAR_0->ss->status_page) {
  VAR_2 = FUNC_2(VAR_0->ss->status_page);

  VAR_2->sequence++;
  FUNC_4();

  VAR_2->policyload = VAR_1;
  VAR_2->deny_unknown = !FUNC_3(VAR_0);

  FUNC_4();
  VAR_2->sequence++;
 }
 FUNC_1(&VAR_0->ss->status_lock);
}
