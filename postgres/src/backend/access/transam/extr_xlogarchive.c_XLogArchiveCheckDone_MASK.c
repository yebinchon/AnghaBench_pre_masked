
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char const*,char*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;

bool
FUNC_6(const char *VAR_1)
{
 char VAR_2[VAR_0];
 struct stat VAR_3;
 bool VAR_4 = FUNC_0();







 if (!((FUNC_3() && !VAR_4) ||
    (FUNC_4() && VAR_4)))
  return 1;


 FUNC_1(VAR_2, VAR_1, ".done");
 if (FUNC_5(VAR_2, &VAR_3) == 0)
  return 1;


 FUNC_1(VAR_2, VAR_1, ".ready");
 if (FUNC_5(VAR_2, &VAR_3) == 0)
  return 0;


 FUNC_1(VAR_2, VAR_1, ".done");
 if (FUNC_5(VAR_2, &VAR_3) == 0)
  return 1;


 FUNC_2(VAR_1);
 return 0;
}
