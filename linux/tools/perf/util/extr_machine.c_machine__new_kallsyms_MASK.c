
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int dummy; } ;


 int FUNC_0 (struct machine*) ;
 scalar_t__ FUNC_1 (struct machine*,char*) ;
 struct machine* FUNC_2 () ;

struct machine *FUNC_3(void)
{
 struct machine *VAR_0 = FUNC_2();






 if (VAR_0 && FUNC_1(VAR_0, "/proc/kallsyms") <= 0) {
  FUNC_0(VAR_0);
  VAR_0 = ((void*)0);
 }

 return VAR_0;
}
