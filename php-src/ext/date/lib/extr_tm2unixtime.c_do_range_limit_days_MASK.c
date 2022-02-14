
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t timelib_sll ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_0 (int,int,int,size_t*,size_t*) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static int FUNC_2(timelib_sll *VAR_4, timelib_sll *VAR_5, timelib_sll *VAR_6)
{
 timelib_sll VAR_7;
 timelib_sll VAR_8;
 timelib_sll VAR_9, VAR_10;
 timelib_sll VAR_11;


 if (*VAR_6 >= VAR_0 || *VAR_6 <= -VAR_0) {
  *VAR_4 += VAR_1 * (*VAR_6 / VAR_0);
  *VAR_6 -= VAR_0 * (*VAR_6 / VAR_0);
 }

 FUNC_0(1, 13, 12, VAR_5, VAR_4);

 VAR_7 = FUNC_1(*VAR_4);
 VAR_8 = VAR_7 ? VAR_3[*VAR_5] : VAR_2[*VAR_5];
 VAR_9 = (*VAR_5) - 1;

 if (VAR_9 < 1) {
  VAR_9 += 12;
  VAR_10 = (*VAR_4) - 1;
 } else {
  VAR_10 = (*VAR_4);
 }
 VAR_7 = FUNC_1(VAR_10);
 VAR_11 = VAR_7 ? VAR_3[VAR_9] : VAR_2[VAR_9];

 if (*VAR_6 <= 0) {
  *VAR_6 += VAR_11;
  (*VAR_5)--;
  return 1;
 }
 if (*VAR_6 > VAR_8) {
  *VAR_6 -= VAR_8;
  (*VAR_5)++;
  return 1;
 }
 return 0;
}
