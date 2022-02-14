
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1(unsigned int VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4 >= 13) {
  if (VAR_4 > 16) VAR_4 = 16;
  VAR_5 = 16;
 } else if (VAR_4 >= 11) {
  VAR_5 = 12;
 } else if (VAR_4 >= 9) {
  VAR_5 = 10;
 } else {
  VAR_5 = 8;
 }
 VAR_2 = VAR_5 - VAR_4;
 if (VAR_5 != VAR_1) {
  VAR_1 = VAR_5;
  if (VAR_3) VAR_0 = 0;
  FUNC_0();
 }
}
