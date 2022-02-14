
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int VAR_10 ;
 int VAR_11 ;

int
FUNC_0(int *VAR_12, const char *VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;





 VAR_14 = *(const unsigned char*)VAR_13;
 if(VAR_14 < VAR_11) {
  *VAR_12 = VAR_14;
  return 1;
 }





 VAR_15 = *(const unsigned char*)(VAR_13+1) ^ VAR_11;
 if(VAR_15 & VAR_10)
  goto bad;
 if(VAR_14 < VAR_7) {
  if(VAR_14 < VAR_6)
   goto bad;
  VAR_18 = ((VAR_14 << VAR_1) | VAR_15) & VAR_3;
  if(VAR_18 <= VAR_2)
   goto bad;
  *VAR_12 = VAR_18;
  return 2;
 }





 VAR_16 = *(const unsigned char*)(VAR_13+2) ^ VAR_11;
 if(VAR_16 & VAR_10)
  goto bad;
 if(VAR_14 < VAR_8) {
  VAR_18 = ((((VAR_14 << VAR_1) | VAR_15) << VAR_1) | VAR_16) & VAR_4;
  if(VAR_18 <= VAR_3)
   goto bad;
  *VAR_12 = VAR_18;
  return 3;
 }





 VAR_17 = *(const unsigned char*)(VAR_13+3) ^ VAR_11;
 if (VAR_17 & VAR_10)
  goto bad;
 if (VAR_14 < VAR_9) {
  VAR_18 = ((((((VAR_14 << VAR_1) | VAR_15) << VAR_1) | VAR_16) << VAR_1) | VAR_17) & VAR_5;
  if (VAR_18 <= VAR_4)
   goto bad;
  *VAR_12 = VAR_18;
  return 4;
 }
bad:
 *VAR_12 = VAR_0;
 return 1;
}
