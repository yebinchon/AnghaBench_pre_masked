
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char**,size_t*) ;

int FUNC_2(const char *VAR_0, bool *VAR_1)
{
 char *VAR_2;
 size_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, &VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 switch (VAR_2[0]) {
 case '1':
 case 'y':
 case 'Y':
  *VAR_1 = 1;
  break;
 case '0':
 case 'n':
 case 'N':
  *VAR_1 = 0;
  break;
 default:
  VAR_4 = -1;
 }

 FUNC_0(VAR_2);

 return VAR_4;
}
