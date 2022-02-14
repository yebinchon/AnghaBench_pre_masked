
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*,char*,unsigned int*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static unsigned int FUNC_10(void)
{
 FILE *VAR_2;
 char VAR_3[VAR_0];
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;

 VAR_2 = FUNC_4("/proc/stat", "r");
 if (!VAR_2) {
  FUNC_5(FUNC_0("Couldn't count the number of CPUs (%s: %s), assuming 1\n"), "/proc/stat", FUNC_7(VAR_1));
  return 1;
 }

 while (!FUNC_2(VAR_2)) {
  if (!FUNC_3(VAR_3, VAR_0, VAR_2))
   continue;
  VAR_3[VAR_0 - 1] = '\0';
  if (FUNC_8(VAR_3) < (VAR_0 - 2))
   continue;
  if (FUNC_9(VAR_3, "cpu "))
   continue;
  if (FUNC_6(VAR_3, "cpu%d ", &VAR_5) != 1)
   continue;
  if (VAR_5 > VAR_4)
   VAR_4 = VAR_5;
 }
 FUNC_1(VAR_2);


 return VAR_4 + 1;
}
