
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 unsigned long FUNC_2 () ;
 unsigned long FUNC_3 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3;

 VAR_2 = FUNC_2();
 VAR_3 = FUNC_3();

 if (VAR_2 != VAR_1) {
  FUNC_1(VAR_0, "Parent DSCR %ld was not inherited "
    "over exec (kernel value)\n", VAR_1);
  FUNC_0(1);
 }

 if (VAR_3 != VAR_1) {
  FUNC_1(VAR_0, "Parent DSCR %ld was not inherited "
    "over exec (user value)\n", VAR_1);
  FUNC_0(1);
 }
 FUNC_0(0);
}
