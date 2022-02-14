
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,char*) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;

bool
FUNC_2(const char *VAR_1)
{
 char VAR_2[VAR_0];
 struct stat VAR_3;

 FUNC_0(VAR_2, VAR_1, ".ready");
 if (FUNC_1(VAR_2, &VAR_3) == 0)
  return 1;

 return 0;
}
