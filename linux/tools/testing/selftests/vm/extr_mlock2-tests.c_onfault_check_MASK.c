
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_3)
{
 unsigned long VAR_4 = FUNC_2();
 uint64_t VAR_5, VAR_6;

 VAR_5 = FUNC_1((unsigned long)VAR_3);
 VAR_6 = FUNC_1((unsigned long)VAR_3 + VAR_4);


 if ((VAR_5 & VAR_1) || (VAR_6 & VAR_1)) {
  FUNC_4("Pages were made present by MLOCK_ONFAULT\n");
  return 1;
 }

 *VAR_3 = 'a';
 VAR_5 = FUNC_1((unsigned long)VAR_3);
 VAR_6 = FUNC_1((unsigned long)VAR_3 + VAR_4);


 if ((VAR_5 & VAR_1) == 0) {
  FUNC_4("Page 1 is not present after fault\n");
  return 1;
 } else if (VAR_6 & VAR_1) {
  FUNC_4("Page 2 was made present\n");
  return 1;
 }

 VAR_5 = FUNC_0(VAR_5 & VAR_0);


 if ((VAR_5 & VAR_2) == 0) {
  FUNC_4("Failed to make faulted page unevictable\n");
  return 1;
 }

 if (!FUNC_3((unsigned long)VAR_3)) {
  FUNC_4("VMA is not marked for lock on fault\n");
  return 1;
 }

 if (!FUNC_3((unsigned long)VAR_3 + VAR_4)) {
  FUNC_4("VMA is not marked for lock on fault\n");
  return 1;
 }

 return 0;
}
