
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int jobctl; struct signal_struct* signal; } ;
struct signal_struct {scalar_t__ group_stop_count; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct signal_struct*,int) ;
 int FUNC_2 (struct task_struct*,int) ;

__attribute__((used)) static bool FUNC_3(struct task_struct *VAR_3)
{
 struct signal_struct *VAR_4 = VAR_3->signal;
 bool VAR_5 = VAR_3->jobctl & VAR_0;

 FUNC_0(!(VAR_3->jobctl & VAR_1));

 FUNC_2(VAR_3, VAR_1);

 if (!VAR_5)
  return 0;

 if (!FUNC_0(VAR_4->group_stop_count == 0))
  VAR_4->group_stop_count--;





 if (!VAR_4->group_stop_count && !(VAR_4->flags & VAR_2)) {
  FUNC_1(VAR_4, VAR_2);
  return 1;
 }
 return 0;
}
