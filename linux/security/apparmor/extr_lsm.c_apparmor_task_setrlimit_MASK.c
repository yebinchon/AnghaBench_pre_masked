
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rlimit {int dummy; } ;
struct aa_label {int dummy; } ;


 struct aa_label* FUNC_0 () ;
 int FUNC_1 (struct aa_label*) ;
 int FUNC_2 (struct aa_label*,struct task_struct*,unsigned int,struct rlimit*) ;
 int FUNC_3 (struct aa_label*) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_0,
  unsigned int VAR_1, struct rlimit *VAR_2)
{
 struct aa_label *VAR_3 = FUNC_0();
 int VAR_4 = 0;

 if (!FUNC_3(VAR_3))
  VAR_4 = FUNC_2(VAR_3, VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_3);

 return VAR_4;
}
