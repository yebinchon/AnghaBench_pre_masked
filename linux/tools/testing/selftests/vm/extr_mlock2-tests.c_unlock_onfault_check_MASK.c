
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2)
{
 unsigned long VAR_3 = FUNC_2();
 uint64_t VAR_4;

 VAR_4 = FUNC_1((unsigned long)VAR_2);
 VAR_4 = FUNC_0(VAR_4 & VAR_0);

 if (VAR_4 & VAR_1) {
  FUNC_4("Page 1 is still marked unevictable after unlock\n");
  return 1;
 }

 if (FUNC_3((unsigned long)VAR_2) ||
     FUNC_3((unsigned long)VAR_2 + VAR_3)) {
  FUNC_4("VMA is still lock on fault after unlock\n");
  return 1;
 }

 return 0;
}
