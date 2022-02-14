
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int,char const*) ;
 int FUNC_1 (char*,int*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, const char *VAR_2, int *VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_0(VAR_4, VAR_0,
  "devices/system/cpu/cpu%d/topology/%s", VAR_1, VAR_2);

 return FUNC_1(VAR_4, VAR_3);
}
