
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char*,char const*) ;

int FUNC_4(char *VAR_1, size_t VAR_2)
{
 char VAR_3[10 * VAR_0];
 char *VAR_4, *VAR_5, *VAR_6;
 const char VAR_7[] = "\n\t ";

 if (FUNC_0("/proc/self/mounts", VAR_3, sizeof(VAR_3)) <= 0)
  return -1;





 for (VAR_4 = FUNC_3(VAR_3, VAR_7); VAR_4; VAR_4 = FUNC_3(((void*)0), VAR_7)) {
  VAR_5 = FUNC_3(((void*)0), VAR_7);
  VAR_6 = FUNC_3(((void*)0), VAR_7);
  FUNC_3(((void*)0), VAR_7);
  FUNC_3(((void*)0), VAR_7);
  FUNC_3(((void*)0), VAR_7);

  if (FUNC_1(VAR_6, "cgroup2") == 0) {
   FUNC_2(VAR_1, VAR_5, VAR_2);
   return 0;
  }
 }

 return -1;
}
