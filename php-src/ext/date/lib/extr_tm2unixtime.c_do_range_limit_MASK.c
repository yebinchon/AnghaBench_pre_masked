
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;



__attribute__((used)) static void FUNC_0(timelib_sll VAR_0, timelib_sll VAR_1, timelib_sll VAR_2, timelib_sll *VAR_3, timelib_sll *VAR_4)
{
 if (*VAR_3 < VAR_0) {
  *VAR_4 -= (VAR_0 - *VAR_3 - 1) / VAR_2 + 1;
  *VAR_3 += VAR_2 * ((VAR_0 - *VAR_3 - 1) / VAR_2 + 1);
 }
 if (*VAR_3 >= VAR_1) {
  *VAR_4 += *VAR_3 / VAR_2;
  *VAR_3 -= VAR_2 * (*VAR_3 / VAR_2);
 }
}
