
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_binprm {int cred; } ;
struct aa_label {scalar_t__ proxy; } ;
struct TYPE_2__ {scalar_t__ pdeath_signal; int files; } ;


 int FUNC_0 (struct aa_label*,struct aa_label*) ;
 struct aa_label* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 struct aa_label* FUNC_3 (int ) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_4 (struct aa_label*) ;

__attribute__((used)) static void FUNC_5(struct linux_binprm *VAR_1)
{
 struct aa_label *VAR_2 = FUNC_1();
 struct aa_label *VAR_3 = FUNC_3(VAR_1->cred);


 if ((VAR_3->proxy == VAR_2->proxy) ||
     (FUNC_4(VAR_3)))
  return;

 FUNC_2(VAR_1->cred, VAR_0->files);

 VAR_0->pdeath_signal = 0;


 FUNC_0(VAR_2, VAR_3);
}
