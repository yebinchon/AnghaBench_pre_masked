
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*,char const*) ;
 int FUNC_3 (char*,char*,int) ;

char *FUNC_4(const char *VAR_1)
{
 char VAR_2[VAR_0];
 ssize_t VAR_3 = FUNC_3("/proc/self/exe", VAR_2, VAR_0);
 const char *VAR_4 = ((void*)0);
 struct dstr VAR_5;

 if (VAR_3 == -1) {
  return ((void*)0);
 }

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4) {
  return ((void*)0);
 }

 FUNC_2(&VAR_5, VAR_4);
 FUNC_1(&VAR_5, "/");

 if (VAR_1 && *VAR_1) {
  FUNC_1(&VAR_5, VAR_1);
 }

 return VAR_5.array;
}
