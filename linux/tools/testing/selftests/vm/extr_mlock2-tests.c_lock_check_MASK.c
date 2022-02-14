
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long,char*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(char *VAR_4)
{
 unsigned long VAR_5 = FUNC_2();
 uint64_t VAR_6, VAR_7;

 VAR_6 = FUNC_1((unsigned long)VAR_4);
 VAR_7 = FUNC_1((unsigned long)VAR_4 + VAR_5);


 if (((VAR_6 & VAR_2) == 0) ||
     ((VAR_7 & VAR_2) == 0)) {
  FUNC_4("Failed to make both pages present\n");
  return 1;
 }

 VAR_6 = FUNC_0(VAR_6 & VAR_1);
 VAR_7 = FUNC_0(VAR_7 & VAR_1);


 if (((VAR_6 & VAR_3) == 0) ||
     ((VAR_7 & VAR_3) == 0)) {
  FUNC_4("Failed to make both pages unevictable\n");
  return 1;
 }

 if (!FUNC_3((unsigned long)VAR_4, VAR_0)) {
  FUNC_4("VMA flag %s is missing on page 1\n", VAR_0);
  return 1;
 }

 if (!FUNC_3((unsigned long)VAR_4 + VAR_5, VAR_0)) {
  FUNC_4("VMA flag %s is missing on page 2\n", VAR_0);
  return 1;
 }

 return 0;
}
