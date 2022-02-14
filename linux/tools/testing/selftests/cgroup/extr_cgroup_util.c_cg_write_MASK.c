
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int path ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,scalar_t__) ;

int FUNC_3(const char *VAR_1, const char *VAR_2, char *VAR_3)
{
 char VAR_4[VAR_0];
 ssize_t VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_4, sizeof(VAR_4), "%s/%s", VAR_1, VAR_2);

 if (FUNC_2(VAR_4, VAR_3, VAR_5) == VAR_5)
  return 0;

 return -1;
}
