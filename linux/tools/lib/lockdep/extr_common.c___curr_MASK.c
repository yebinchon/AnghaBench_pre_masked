
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

struct task_struct *FUNC_2(void)
{
 if (VAR_2.pid == 0) {

  FUNC_0(VAR_0, VAR_2.comm);
  VAR_2.pid = FUNC_1(VAR_1);
 }

 return &VAR_2;
}
