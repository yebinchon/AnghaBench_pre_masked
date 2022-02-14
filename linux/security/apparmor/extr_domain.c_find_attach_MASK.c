
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct linux_binprm {int dummy; } ;
struct aa_label {int dummy; } ;
struct aa_profile {struct aa_label label; } ;
struct aa_ns {int dummy; } ;


 int FUNC_0 (struct linux_binprm const*,char const*,struct list_head*,char const**) ;
 struct aa_profile* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct aa_label *FUNC_4(const struct linux_binprm *VAR_0,
        struct aa_ns *VAR_1, struct list_head *VAR_2,
        const char *VAR_3, const char **VAR_4)
{
 struct aa_profile *VAR_5;

 FUNC_2();
 VAR_5 = FUNC_1(FUNC_0(VAR_0, VAR_3, VAR_2, VAR_4));
 FUNC_3();

 return VAR_5 ? &VAR_5->label : ((void*)0);
}
