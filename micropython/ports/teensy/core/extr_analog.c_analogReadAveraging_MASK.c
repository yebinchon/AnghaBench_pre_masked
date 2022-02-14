
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;

void FUNC_2(unsigned int VAR_4)
{

 if (VAR_3) FUNC_1();
 if (VAR_4 <= 1) {
  VAR_4 = 0;
  VAR_0 = 0;
 } else if (VAR_4 <= 4) {
  VAR_4 = 4;
  VAR_0 = VAR_1 + FUNC_0(0);
 } else if (VAR_4 <= 8) {
  VAR_4 = 8;
  VAR_0 = VAR_1 + FUNC_0(1);
 } else if (VAR_4 <= 16) {
  VAR_4 = 16;
  VAR_0 = VAR_1 + FUNC_0(2);
 } else {
  VAR_4 = 32;
  VAR_0 = VAR_1 + FUNC_0(3);
 }
 VAR_2 = VAR_4;
}
