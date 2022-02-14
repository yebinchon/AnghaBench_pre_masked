
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;

int
FUNC_0(char *VAR_11, int VAR_12)
{

 unsigned int VAR_13 = (unsigned int)VAR_12;





 if(VAR_13 <= VAR_2) {
  VAR_11[0] = VAR_13;
  return 1;
 }





 if(VAR_13 <= VAR_3) {
  VAR_11[0] = VAR_7 | (VAR_13 >> 1*VAR_0);
  VAR_11[1] = VAR_10 | (VAR_13 & VAR_1);
  return 2;
 }







 if (VAR_13 > VAR_6)
  VAR_13 = VAR_5;





 if (VAR_13 <= VAR_4) {
  VAR_11[0] = VAR_8 | (VAR_13 >> 2*VAR_0);
  VAR_11[1] = VAR_10 | ((VAR_13 >> 1*VAR_0) & VAR_1);
  VAR_11[2] = VAR_10 | (VAR_13 & VAR_1);
  return 3;
 }





 VAR_11[0] = VAR_9 | (VAR_13 >> 3*VAR_0);
 VAR_11[1] = VAR_10 | ((VAR_13 >> 2*VAR_0) & VAR_1);
 VAR_11[2] = VAR_10 | ((VAR_13 >> 1*VAR_0) & VAR_1);
 VAR_11[3] = VAR_10 | (VAR_13 & VAR_1);
 return 4;
}
