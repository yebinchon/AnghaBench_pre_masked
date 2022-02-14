
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,char const*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,char*,char*,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 if (FUNC_0(&VAR_2, "%s %s", VAR_0, VAR_1) > 0) {
  FUNC_2("/bin/sh", "sh", "-c", VAR_2, ((void*)0));
  FUNC_3(VAR_2);
 }
 FUNC_1(VAR_0);
}
