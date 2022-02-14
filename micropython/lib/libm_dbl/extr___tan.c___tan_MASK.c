
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef double double_t ;


 int FUNC_0 (int,double) ;
 int FUNC_1 (double,int ) ;
 double* VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;

double FUNC_2(double VAR_3, double VAR_4, int VAR_5)
{
 double_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 double VAR_12, VAR_13;
 uint32_t VAR_14;
 int VAR_15, VAR_16;

 FUNC_0(VAR_14,VAR_3);
 VAR_15 = (VAR_14&0x7fffffff) >= 0x3FE59428;
 if (VAR_15) {
  VAR_16 = VAR_14>>31;
  if (VAR_16) {
   VAR_3 = -VAR_3;
   VAR_4 = -VAR_4;
  }
  VAR_3 = (VAR_1 - VAR_3) + (VAR_2 - VAR_4);
  VAR_4 = 0.0;
 }
 VAR_6 = VAR_3 * VAR_3;
 VAR_9 = VAR_6 * VAR_6;





 VAR_7 = VAR_0[1] + VAR_9*(VAR_0[3] + VAR_9*(VAR_0[5] + VAR_9*(VAR_0[7] + VAR_9*(VAR_0[9] + VAR_9*VAR_0[11]))));
 VAR_8 = VAR_6*(VAR_0[2] + VAR_9*(VAR_0[4] + VAR_9*(VAR_0[6] + VAR_9*(VAR_0[8] + VAR_9*(VAR_0[10] + VAR_9*VAR_0[12])))));
 VAR_10 = VAR_6 * VAR_3;
 VAR_7 = VAR_4 + VAR_6*(VAR_10*(VAR_7 + VAR_8) + VAR_4) + VAR_10*VAR_0[0];
 VAR_9 = VAR_3 + VAR_7;
 if (VAR_15) {
  VAR_10 = 1 - 2*VAR_5;
  VAR_8 = VAR_10 - 2.0 * (VAR_3 + (VAR_7 - VAR_9*VAR_9/(VAR_9 + VAR_10)));
  return VAR_16 ? -VAR_8 : VAR_8;
 }
 if (!VAR_5)
  return VAR_9;

 VAR_12 = VAR_9;
 FUNC_1(VAR_12, 0);
 VAR_8 = VAR_7 - (VAR_12 - VAR_3);
 VAR_13 = VAR_11 = -1.0 / VAR_9;
 FUNC_1(VAR_13, 0);
 return VAR_13 + VAR_11*(1.0 + VAR_13*VAR_12 + VAR_13*VAR_8);
}
