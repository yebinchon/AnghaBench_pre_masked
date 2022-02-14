
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*,char*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, char **VAR_3)
{
 char *VAR_4;

 if (*VAR_3 == ((void*)0)) {
  *VAR_3 = FUNC_2(VAR_2, VAR_1);
  if (*VAR_3 == ((void*)0))
   return -VAR_0;
 } else {

  if (FUNC_3(*VAR_3, VAR_2))
   return 0;
  VAR_4 = FUNC_0(VAR_1, "%s,%s", *VAR_3, VAR_2);
  if (VAR_4 == ((void*)0))
   return -VAR_0;
  FUNC_1(*VAR_3);
  *VAR_3 = VAR_4;
 }
 return 0;
}
