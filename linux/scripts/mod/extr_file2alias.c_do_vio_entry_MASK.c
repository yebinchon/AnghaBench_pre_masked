
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int ,char**) ;
 int FUNC_1 (char*) ;
 char** VAR_0 ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 char** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, void *VAR_4,
  char *VAR_5)
{
 char *VAR_6;
 FUNC_0(VAR_4, VAR_2, VAR_1);
 FUNC_0(VAR_4, VAR_2, VAR_0);

 FUNC_3(VAR_5, "vio:T%sS%s", (*VAR_1)[0] ? *VAR_1 : "*",
   (*VAR_0)[0] ? *VAR_0 : "*");


 for (VAR_6 = VAR_5; VAR_6 && *VAR_6; VAR_6++)
  if (FUNC_2 (*VAR_6))
   *VAR_6 = '_';

 FUNC_1(VAR_5);
 return 1;
}
