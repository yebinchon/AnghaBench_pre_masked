
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct task_security_struct {scalar_t__ sid; scalar_t__ osid; } ;
struct rlimit {int rlim_cur; int rlim_max; } ;
struct linux_binprm {int cred; } ;
struct TYPE_11__ {TYPE_2__* signal; } ;
struct TYPE_10__ {TYPE_1__* signal; scalar_t__ pdeath_signal; int files; } ;
struct TYPE_9__ {struct rlimit* rlim; } ;
struct TYPE_8__ {struct rlimit* rlim; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ,int ,int *) ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (int ,int ) ;
 TYPE_6__ VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 struct task_security_struct* FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_9(struct linux_binprm *VAR_8)
{
 struct task_security_struct *VAR_9;
 struct rlimit *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = FUNC_5(VAR_8->cred);
 if (VAR_9->sid == VAR_9->osid)
  return;


 FUNC_2(VAR_8->cred, VAR_5->files);


 VAR_5->pdeath_signal = 0;
 VAR_12 = FUNC_1(&VAR_7,
     VAR_9->osid, VAR_9->sid, VAR_4,
     VAR_1, ((void*)0));
 if (VAR_12) {

  FUNC_6(VAR_5);
  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   VAR_10 = VAR_5->signal->rlim + VAR_13;
   VAR_11 = VAR_6.signal->rlim + VAR_13;
   VAR_10->rlim_cur = FUNC_3(VAR_10->rlim_max, VAR_11->rlim_cur);
  }
  FUNC_7(VAR_5);
  if (FUNC_0(VAR_0))
   FUNC_8(VAR_5, FUNC_4(VAR_2));
 }
}
