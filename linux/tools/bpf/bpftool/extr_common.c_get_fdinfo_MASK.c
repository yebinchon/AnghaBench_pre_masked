
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int path ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int,char*,int) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*) ;

char *FUNC_9(int VAR_1, const char *VAR_2)
{
 char VAR_3[VAR_0];
 char *VAR_4 = ((void*)0);
 size_t VAR_5 = 0;
 ssize_t VAR_6;
 FILE *VAR_7;

 FUNC_5(VAR_3, sizeof(VAR_3), "/proc/self/fdinfo/%d", VAR_1);

 VAR_7 = FUNC_1(VAR_3, "r");
 if (!VAR_7)
  return ((void*)0);

 while ((VAR_6 = FUNC_3(&VAR_4, &VAR_5, VAR_7)) > 0) {
  char *VAR_8;
  int VAR_9;

  if (!FUNC_8(VAR_4, VAR_2))
   continue;

  FUNC_0(VAR_7);

  VAR_8 = FUNC_6(VAR_4, '\t');
  if (!VAR_8 || !VAR_8[1]) {
   FUNC_2(VAR_4);
   return ((void*)0);
  }
  VAR_8++;

  VAR_9 = FUNC_7(VAR_8);
  FUNC_4(VAR_4, VAR_8, VAR_9);
  VAR_4[VAR_9 - 1] = '\0';

  return VAR_4;
 }

 FUNC_2(VAR_4);
 FUNC_0(VAR_7);
 return ((void*)0);
}
