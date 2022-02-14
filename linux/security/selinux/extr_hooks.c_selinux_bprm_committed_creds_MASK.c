
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct task_security_struct {scalar_t__ osid; scalar_t__ sid; } ;
struct linux_binprm {int dummy; } ;
struct itimerval {int dummy; } ;
struct TYPE_9__ {int real_parent; TYPE_2__* sighand; int blocked; TYPE_1__* signal; int pending; } ;
struct TYPE_8__ {int siglock; } ;
struct TYPE_7__ {int shared_pending; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ,int ,int *) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int,struct itimerval*,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct itimerval*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 struct task_security_struct* FUNC_12 (int ) ;
 int VAR_4 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_16(struct linux_binprm *VAR_6)
{
 const struct task_security_struct *VAR_7 = FUNC_12(FUNC_3());
 struct itimerval VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = VAR_7->osid;
 VAR_10 = VAR_7->sid;

 if (VAR_10 == VAR_9)
  return;
 VAR_11 = FUNC_2(&VAR_4,
     VAR_9, VAR_10, VAR_2, VAR_1, ((void*)0));
 if (VAR_11) {
  if (FUNC_0(VAR_0)) {
   FUNC_8(&VAR_8, 0, sizeof VAR_8);
   for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
    FUNC_4(VAR_12, &VAR_8, ((void*)0));
  }
  FUNC_14(&VAR_3->sighand->siglock);
  if (!FUNC_5(VAR_3)) {
   FUNC_7(&VAR_3->pending);
   FUNC_7(&VAR_3->signal->shared_pending);
   FUNC_6(VAR_3, 1);
   FUNC_13(&VAR_3->blocked);
   FUNC_11();
  }
  FUNC_15(&VAR_3->sighand->siglock);
 }



 FUNC_9(&VAR_5);
 FUNC_1(VAR_3, VAR_3->real_parent);
 FUNC_10(&VAR_5);
}
