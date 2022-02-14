
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tomoyo_task {int domain_info; int old_domain_info; } ;
struct linux_binprm {TYPE_1__* file; } ;
struct TYPE_2__ {int f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct linux_binprm*) ;
 int FUNC_2 () ;
 int FUNC_3 (int const) ;
 struct tomoyo_task* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct linux_binprm *VAR_2)
{
 struct tomoyo_task *VAR_3 = FUNC_4(VAR_1);





 if (!VAR_3->old_domain_info) {
  const int VAR_4 = FUNC_2();
  const int VAR_5 = FUNC_1(VAR_2);

  FUNC_3(VAR_4);
  return VAR_5;
 }



 return FUNC_0(VAR_3->domain_info,
         &VAR_2->file->f_path, VAR_0);
}
