
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct S TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int dummy; } ;
typedef int data ;
struct S {int pid; int cookie; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,int *,int ,TYPE_1__*,int) ;
 int VAR_0 ;

int FUNC_2(struct pt_regs *VAR_1)
{
 struct S {
  u64 pid;
  u64 cookie;
 } VAR_2;

 VAR_2.pid = FUNC_0();
 VAR_2.cookie = 0x12345678;

 FUNC_1(VAR_1, &VAR_0, 0, &VAR_2, sizeof(VAR_2));

 return 0;
}
