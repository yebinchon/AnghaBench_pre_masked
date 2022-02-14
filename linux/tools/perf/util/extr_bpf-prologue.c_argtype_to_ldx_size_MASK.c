
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_4)
{
 int VAR_5 = VAR_4 ? FUNC_0(&VAR_4[1]) : 64;

 switch (VAR_5) {
 case 8:
  return VAR_0;
 case 16:
  return VAR_2;
 case 32:
  return VAR_3;
 case 64:
 default:
  return VAR_1;
 }
}
