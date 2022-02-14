
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct aa_label {int secid; } ;


 struct aa_label* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct aa_label*) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0, u32 *VAR_1)
{
 struct aa_label *VAR_2 = FUNC_0(VAR_0);
 *VAR_1 = VAR_2->secid;
 FUNC_1(VAR_2);
}
