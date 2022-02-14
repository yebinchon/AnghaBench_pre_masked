
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;

void FUNC_3(timelib_sll VAR_0, timelib_sll VAR_1, timelib_sll VAR_2, timelib_sll *VAR_3, timelib_sll *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5 = FUNC_2(VAR_0);
 VAR_6 = FUNC_2(VAR_0-1);
 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2) + 1;
 if (VAR_5 && VAR_1 > 2) {
  VAR_7++;
 }
 VAR_8 = FUNC_0(VAR_0, 1, 1);
 VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_9 == 0) VAR_9 = 7;
 if (VAR_8 == 0) VAR_8 = 7;

 if (VAR_7 <= (8 - VAR_8) && VAR_8 > 4) {
  *VAR_4 = VAR_0 - 1;
  if (VAR_8 == 5 || (VAR_8 == 6 && VAR_6)) {
   *VAR_3 = 53;
  } else {
   *VAR_3 = 52;
  }
 } else {
  *VAR_4 = VAR_0;
 }

 if (*VAR_4 == VAR_0) {
  int VAR_10;

  VAR_10 = VAR_5 ? 366 : 365;
  if ((VAR_10 - (VAR_7 - VAR_5)) < (4 - VAR_9)) {
   *VAR_4 = VAR_0 + 1;
   *VAR_3 = 1;
   return;
  }
 }

 if (*VAR_4 == VAR_0) {
  int VAR_11;

  VAR_11 = VAR_7 + (7 - VAR_9) + (VAR_8 - 1);
  *VAR_3 = VAR_11 / 7;
  if (VAR_8 > 4) {
   *VAR_3 -= 1;
  }
 }
}
