
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_0)
{
 char *VAR_1;
 int VAR_2;

 FUNC_0(VAR_0 != ((void*)0));
 VAR_2 = FUNC_3(VAR_0)+1;
 VAR_1 = FUNC_2(VAR_2);
 if(!VAR_1)
  return ((void*)0);
 return FUNC_1(VAR_1, VAR_0, VAR_2);
}
