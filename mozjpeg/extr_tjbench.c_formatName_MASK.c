
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;
 char** VAR_4 ;

char *FUNC_1(int VAR_5, int VAR_6, char *VAR_7)
{
  if (VAR_6 == VAR_2)
    return (char *)VAR_4[VAR_5];
  else if (VAR_6 == VAR_1 || VAR_6 == VAR_0) {
    FUNC_0(VAR_7, 80, "%s %s", VAR_3[VAR_6], VAR_4[VAR_5]);
    return VAR_7;
  } else
    return (char *)VAR_3[VAR_6];
}
