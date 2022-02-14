
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,int *,int) ;

__attribute__((used)) static pid_t FUNC_7(pid_t VAR_0) {
 pid_t VAR_1 = -1;
 char VAR_2[100];
 char *VAR_3 = ((void*)0);
 const char *VAR_4 = " ";
 FILE *VAR_5 = ((void*)0);
 size_t VAR_6 = 0;

 FUNC_4(VAR_2, "/proc/%d/stat", VAR_0);

 if ((VAR_5 = FUNC_1(VAR_2, "r"))) {
  if (FUNC_3(&VAR_3, &VAR_6, VAR_5) != -1) {
   FUNC_5(VAR_3, VAR_4);
   FUNC_5(((void*)0), VAR_4);
   FUNC_5(((void*)0), VAR_4);
   char *VAR_7 = FUNC_5(((void*)0), VAR_4);
   VAR_1 = FUNC_6(VAR_7, ((void*)0), 10);
  }
  FUNC_2(VAR_3);
  FUNC_0(VAR_5);
 }

 if (VAR_1) {
  return (VAR_1 == VAR_0) ? -1 : VAR_1;
 }

 return -1;
}
