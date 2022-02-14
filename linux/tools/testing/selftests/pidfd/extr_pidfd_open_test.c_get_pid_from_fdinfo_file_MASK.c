
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int path ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (char*,int*) ;
 int FUNC_5 (char*,int,char*,int) ;
 scalar_t__ FUNC_6 (char*,char const*,size_t) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static pid_t FUNC_8(int VAR_0, const char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 char VAR_4[512];
 FILE *VAR_5;
 size_t VAR_6 = 0;
 pid_t VAR_7 = -1;
 char *VAR_8 = ((void*)0);

 FUNC_5(VAR_4, sizeof(VAR_4), "/proc/self/fdinfo/%d", VAR_0);

 VAR_5 = FUNC_1(VAR_4, "re");
 if (!VAR_5)
  return -1;

 while (FUNC_3(&VAR_8, &VAR_6, VAR_5) != -1) {
  char *VAR_9;

  if (FUNC_6(VAR_8, VAR_1, VAR_2))
   continue;

  VAR_9 = FUNC_7(VAR_8 + 4);
  VAR_3 = FUNC_4(VAR_9, &VAR_7);
  if (VAR_3 < 0)
   goto out;

  break;
 }

out:
 FUNC_2(VAR_8);
 FUNC_0(VAR_5);
 return VAR_7;
}
