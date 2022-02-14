
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (int,char*,int) ;

int FUNC_4(const char *VAR_1, int *VAR_2)
{
 char VAR_3[64];
 int VAR_4 = FUNC_2(VAR_1, VAR_0), VAR_5 = -1;

 if (VAR_4 < 0)
  return -1;

 if (FUNC_3(VAR_4, VAR_3, sizeof(VAR_3)) > 0) {
  *VAR_2 = FUNC_0(VAR_3);
  VAR_5 = 0;
 }

 FUNC_1(VAR_4);
 return VAR_5;
}
