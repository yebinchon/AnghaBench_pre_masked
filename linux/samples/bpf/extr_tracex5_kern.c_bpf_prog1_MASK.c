
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
typedef int fmt ;


 scalar_t__ FUNC_0 (struct pt_regs*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pt_regs*,int *,int) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_2 ;

int FUNC_3(struct pt_regs *VAR_3)
{
 int VAR_4 = (int)FUNC_0(VAR_3);


 FUNC_1(VAR_3, &VAR_2, VAR_4);


 if (VAR_4 >= VAR_1 && VAR_4 <= VAR_0) {
  char VAR_5[] = "syscall=%d (one of get/set uid/pid/gid)\n";
  FUNC_2(VAR_5, sizeof(VAR_5), VAR_4);
 }
 return 0;
}
