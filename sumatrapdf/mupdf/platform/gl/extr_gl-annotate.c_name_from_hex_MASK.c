
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const** VAR_0 ;
 unsigned int* VAR_1 ;
 int FUNC_0 (char*,int,char*,unsigned int) ;
 scalar_t__ FUNC_1 (char const**) ;

__attribute__((used)) static const char *FUNC_2(unsigned int VAR_2)
{
 static char VAR_3[10];
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < (int)FUNC_1(VAR_0); ++VAR_4)
  if (VAR_1[VAR_4] == VAR_2)
   return VAR_0[VAR_4];
 FUNC_0(VAR_3, sizeof VAR_3, "#%06x", VAR_2 & 0xffffff);
 return VAR_3;
}
