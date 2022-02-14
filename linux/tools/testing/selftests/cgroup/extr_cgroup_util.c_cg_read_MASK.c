
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,int,char*,char const*,char const*) ;

int FUNC_2(const char *VAR_1, const char *VAR_2, char *VAR_3, size_t VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_1(VAR_5, sizeof(VAR_5), "%s/%s", VAR_1, VAR_2);

 if (FUNC_0(VAR_5, VAR_3, VAR_4) >= 0)
  return 0;

 return -1;
}
