
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char,char**,char*) ;
 int FUNC_1 (unsigned char,char**,char*) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char) ;

int FUNC_4(const char *VAR_0, size_t VAR_1, char *VAR_2,
     size_t VAR_3)
{
 char *VAR_4 = VAR_2;
 char *VAR_5 = VAR_4 + VAR_3;

 while (VAR_1--) {
  unsigned char VAR_6 = *VAR_0++;

  if (!FUNC_3(VAR_6) || !FUNC_2(VAR_6) || VAR_6 == '"' || VAR_6 == '\\')
   FUNC_0(VAR_6, &VAR_4, VAR_5);
  else
   FUNC_1(VAR_6, &VAR_4, VAR_5);
 }

 return VAR_4 - VAR_2;
}
