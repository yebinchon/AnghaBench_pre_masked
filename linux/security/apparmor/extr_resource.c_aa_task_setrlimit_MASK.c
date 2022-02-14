
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rlimit {int rlim_max; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct aa_label*,int ,int ) ;
 struct aa_label* FUNC_2 (int ) ;
 int FUNC_3 (struct aa_label*) ;
 int FUNC_4 (struct aa_profile*,unsigned int,int ,struct aa_label*,char*,int ) ;
 int FUNC_5 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_6 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_7 (struct aa_profile*,unsigned int,struct rlimit*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

int FUNC_10(struct aa_label *VAR_3, struct task_struct *VAR_4,
        unsigned int VAR_5, struct rlimit *VAR_6)
{
 struct aa_profile *VAR_7;
 struct aa_label *VAR_8;
 int VAR_9 = 0;

 FUNC_8();
 VAR_8 = FUNC_2(FUNC_0(VAR_4));
 FUNC_9();
 if (VAR_3 != VAR_8 &&
     FUNC_1(VAR_3, VAR_1, VAR_0) != 0)
  VAR_9 = FUNC_5(VAR_3, VAR_7,
    FUNC_4(VAR_7, VAR_5,
            VAR_6->rlim_max, VAR_8,
            "cap_sys_resource", -VAR_2));
 else
  VAR_9 = FUNC_6(VAR_3, VAR_7,
    FUNC_7(VAR_7, VAR_5, VAR_6));
 FUNC_3(VAR_8);

 return VAR_9;
}
