
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

char *FUNC_1(uint32_t VAR_3)
{
 if (VAR_3 & VAR_2) {
  return "public";
 } else if (VAR_3 & VAR_0) {
  return "private";
 } else {
  FUNC_0(VAR_3 & VAR_1);
  return "protected";
 }
}
