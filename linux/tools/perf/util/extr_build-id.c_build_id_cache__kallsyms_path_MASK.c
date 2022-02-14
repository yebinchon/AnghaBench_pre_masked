
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 char* VAR_2 ;
 int FUNC_1 (char*,size_t,char*,char*,char*,char const*) ;

char *FUNC_2(const char *VAR_3, char *VAR_4,
        size_t VAR_5)
{
 bool VAR_6 = 1;

 FUNC_1(VAR_4, VAR_5, "%s/%s/%s/kallsyms",
   VAR_2, VAR_0, VAR_3);
retry:
 if (!FUNC_0(VAR_4, VAR_1))
  return VAR_4;
 if (VAR_6) {

  FUNC_1(VAR_4, VAR_5, "%s/%s/%s",
    VAR_2, VAR_0, VAR_3);
  VAR_6 = 0;
  goto retry;
 }

 return ((void*)0);
}
