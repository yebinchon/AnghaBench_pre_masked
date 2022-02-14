
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ pid; int comm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(char *VAR_1, struct task_struct *VAR_2)
{
 if (!VAR_2->pid) {
  FUNC_1(VAR_1, "<idle>");
  return;
 }

 if (FUNC_0(VAR_2->pid < 0)) {
  FUNC_1(VAR_1, "<XXX>");
  return;
 }

 FUNC_2(VAR_1, VAR_2->comm, VAR_0);
}
