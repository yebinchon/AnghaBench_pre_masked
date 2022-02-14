
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (char*,int,unsigned long,unsigned long) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_0)
{
 unsigned long VAR_1, VAR_2;

 VAR_1 = FUNC_0();
 VAR_2 = FUNC_1();

 if (VAR_0 != VAR_1) {
  FUNC_2("[cpu %d] Kernel DSCR should be %ld but is %ld\n",
     FUNC_3(), VAR_0, VAR_1);
  return 1;
 }

 if (VAR_0 != VAR_2) {
  FUNC_2("[cpu %d] User DSCR should be %ld but is %ld\n",
     FUNC_3(), VAR_0, VAR_2);
  return 1;
 }
 return 0;
}
