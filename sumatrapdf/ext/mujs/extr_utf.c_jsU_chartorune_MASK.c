
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int Rune ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int
FUNC_0(Rune *VAR_10, const char *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 int VAR_15;





 VAR_12 = *(uchar*)VAR_11;
 if(VAR_12 < VAR_9) {
  *VAR_10 = VAR_12;
  return 1;
 }





 VAR_13 = *(uchar*)(VAR_11+1) ^ VAR_9;
 if(VAR_13 & VAR_8)
  goto bad;
 if(VAR_12 < VAR_6) {
  if(VAR_12 < VAR_5)
   goto bad;
  VAR_15 = ((VAR_12 << VAR_1) | VAR_13) & VAR_3;
  if(VAR_15 <= VAR_2)
   goto bad;
  *VAR_10 = VAR_15;
  return 2;
 }





 VAR_14 = *(uchar*)(VAR_11+2) ^ VAR_9;
 if(VAR_14 & VAR_8)
  goto bad;
 if(VAR_12 < VAR_7) {
  VAR_15 = ((((VAR_12 << VAR_1) | VAR_13) << VAR_1) | VAR_14) & VAR_4;
  if(VAR_15 <= VAR_3)
   goto bad;
  *VAR_10 = VAR_15;
  return 3;
 }




bad:
 *VAR_10 = VAR_0;
 return 1;
}
