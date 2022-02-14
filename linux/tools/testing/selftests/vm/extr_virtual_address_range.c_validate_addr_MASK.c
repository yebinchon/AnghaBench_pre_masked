
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (char*,unsigned long) ;

__attribute__((used)) static int FUNC_1(char *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = (unsigned long) VAR_1;

 if (VAR_2) {
  if (VAR_3 < VAR_0) {
   FUNC_0("Bad address %lx\n", VAR_3);
   return 1;
  }
  return 0;
 }

 if (VAR_3 > VAR_0) {
  FUNC_0("Bad address %lx\n", VAR_3);
  return 1;
 }
 return 0;
}
