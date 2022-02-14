
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;

void FUNC_2(timelib_sll VAR_2, timelib_sll VAR_3, timelib_sll VAR_4, timelib_sll *VAR_5, timelib_sll *VAR_6, timelib_sll *VAR_7)
{
 timelib_sll VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4) + 1;
 int *VAR_9;
 bool VAR_10;


 *VAR_5 = VAR_2;
 VAR_10 = FUNC_1(*VAR_5);


 while (VAR_8 <= 0) {
  *VAR_5 -= 1;
  VAR_8 += (VAR_10 = FUNC_1(*VAR_5)) ? 366 : 365;
 }


 while (VAR_8 > (VAR_10 ? 366 : 365)) {
  VAR_8 -= VAR_10 ? 366 : 365;
  *VAR_5 += 1;
  VAR_10 = FUNC_1(*VAR_5);
 }

 VAR_9 = VAR_10 ? VAR_1 : VAR_0;


 *VAR_6 = 1;
 while (VAR_8 > VAR_9[*VAR_6]) {
  VAR_8 -= VAR_9[*VAR_6];
  *VAR_6 += 1;
 }

 *VAR_7 = VAR_8;
}
