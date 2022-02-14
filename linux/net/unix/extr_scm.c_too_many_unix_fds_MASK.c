
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {scalar_t__ unix_inflight; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct user_struct* FUNC_1 () ;
 scalar_t__ FUNC_2 (struct task_struct*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline bool FUNC_4(struct task_struct *VAR_3)
{
 struct user_struct *VAR_4 = FUNC_1();

 if (FUNC_3(VAR_4->unix_inflight > FUNC_2(VAR_3, VAR_2)))
  return !FUNC_0(VAR_1) && !FUNC_0(VAR_0);
 return 0;
}
