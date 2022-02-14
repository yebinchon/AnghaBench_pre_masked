
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Rune ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_0(char *VAR_7, const Rune *VAR_8)
{
 int VAR_9;





 VAR_9 = *VAR_8;
 if(VAR_9 <= VAR_2) {
  VAR_7[0] = VAR_9;
  return 1;
 }





 if(VAR_9 <= VAR_3) {
  VAR_7[0] = VAR_4 | (VAR_9 >> 1*VAR_0);
  VAR_7[1] = VAR_6 | (VAR_9 & VAR_1);
  return 2;
 }





 VAR_7[0] = VAR_5 | (VAR_9 >> 2*VAR_0);
 VAR_7[1] = VAR_6 | ((VAR_9 >> 1*VAR_0) & VAR_1);
 VAR_7[2] = VAR_6 | (VAR_9 & VAR_1);
 return 3;
}
