
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct magic {int str_flags; } ;







 int VAR_0 ;
 int FUNC_0 () ;

size_t
FUNC_1(const struct magic *VAR_1)
{
 switch (VAR_1->str_flags & VAR_0) {
 case 132:
  return 1;
 case 130:
 case 131:
  return 2;
 case 128:
 case 129:
  return 4;
 default:
  FUNC_0();
  return 1;
 }
}
