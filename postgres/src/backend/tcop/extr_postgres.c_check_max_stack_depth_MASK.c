
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int FUNC_0 (char*,long) ;
 int FUNC_1 (char*) ;
 long VAR_0 ;
 long FUNC_2 () ;

bool
FUNC_3(int *VAR_1, void **VAR_2, GucSource VAR_3)
{
 long VAR_4 = *VAR_1 * 1024L;
 long VAR_5 = FUNC_2();

 if (VAR_5 > 0 && VAR_4 > VAR_5 - VAR_0)
 {
  FUNC_0("\"max_stack_depth\" must not exceed %ldkB.",
       (VAR_5 - VAR_0) / 1024L);
  FUNC_1("Increase the platform's stack depth limit via \"ulimit -s\" or local equivalent.");
  return 0;
 }
 return 1;
}
