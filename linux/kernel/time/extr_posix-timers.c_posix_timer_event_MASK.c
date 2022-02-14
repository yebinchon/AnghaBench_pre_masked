
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct k_itimer {int it_sigev_notify; int it_pid; TYPE_2__* sigq; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;
struct TYPE_3__ {int si_sys_private; } ;
struct TYPE_4__ {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

int FUNC_1(struct k_itimer *VAR_3, int VAR_4)
{
 enum pid_type VAR_5;
 int VAR_6 = -1;
 VAR_3->sigq->info.si_sys_private = VAR_4;

 VAR_5 = !(VAR_3->it_sigev_notify & VAR_2) ? VAR_1 : VAR_0;
 VAR_6 = FUNC_0(VAR_3->sigq, VAR_3->it_pid, VAR_5);

 return VAR_6 > 0;
}
