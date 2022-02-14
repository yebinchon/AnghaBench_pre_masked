
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 struct aa_label* FUNC_0 () ;
 int FUNC_1 (struct aa_label*) ;
 struct aa_label* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct aa_label*,struct aa_label*,int ) ;
 int FUNC_4 (struct aa_label*) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_1)
{
 struct aa_label *VAR_2, *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0();
 VAR_2 = FUNC_2(VAR_1);
 VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_0);
 FUNC_4(VAR_2);
 FUNC_1(VAR_3);

 return VAR_4;
}
