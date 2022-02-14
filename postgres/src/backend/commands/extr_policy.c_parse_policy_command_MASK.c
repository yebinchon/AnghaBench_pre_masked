
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static char
FUNC_2(const char *VAR_5)
{
 char VAR_6;

 if (!VAR_5)
  FUNC_0(VAR_4, "unrecognized policy command");

 if (FUNC_1(VAR_5, "all") == 0)
  VAR_6 = '*';
 else if (FUNC_1(VAR_5, "select") == 0)
  VAR_6 = VAR_2;
 else if (FUNC_1(VAR_5, "insert") == 0)
  VAR_6 = VAR_1;
 else if (FUNC_1(VAR_5, "update") == 0)
  VAR_6 = VAR_3;
 else if (FUNC_1(VAR_5, "delete") == 0)
  VAR_6 = VAR_0;
 else
  FUNC_0(VAR_4, "unrecognized policy command");

 return VAR_6;
}
