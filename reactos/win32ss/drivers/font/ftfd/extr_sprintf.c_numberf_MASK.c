
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
 size_t FUNC_0 (long long*,int) ;

__attribute__((used)) static char *
FUNC_1(char * VAR_7, char * VAR_8, double VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 char VAR_14,VAR_15,VAR_16[66];
 const char *VAR_17;
 const char *VAR_18 = "0123456789abcdefghijklmnopqrstuvwxyz";
 const char *VAR_19 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 int VAR_20;
 long long VAR_21;





 VAR_17 = (VAR_13 & VAR_0) ? VAR_19 : VAR_18;
 if (VAR_13 & VAR_1)
  VAR_13 &= ~VAR_6;
 if (VAR_10 < 2 || VAR_10 > 36)
  return 0;
 VAR_14 = (VAR_13 & VAR_6) ? '0' : ' ';
 VAR_15 = 0;
 if (VAR_13 & VAR_3) {
  if (VAR_9 < 0) {
   VAR_15 = '-';
   VAR_9 = -VAR_9;
   VAR_11--;
  } else if (VAR_13 & VAR_2) {
   VAR_15 = '+';
   VAR_11--;
  } else if (VAR_13 & VAR_4) {
   VAR_15 = ' ';
   VAR_11--;
  }
 }
 if (VAR_13 & VAR_5) {
  if (VAR_10 == 16)
   VAR_11 -= 2;
  else if (VAR_10 == 8)
   VAR_11--;
 }
 VAR_20 = 0;
 if (VAR_9 == 0)
  VAR_16[VAR_20++] = '0';
 else while (VAR_9 != 0)
    {
        VAR_21 = VAR_9;
  VAR_16[VAR_20++] = VAR_17[FUNC_0(&VAR_21,VAR_10)];
  VAR_9=VAR_21;
    }
 if (VAR_20 > VAR_12)
  VAR_12 = VAR_20;
 VAR_11 -= VAR_12;
 if (!(VAR_13&(VAR_6+VAR_1))) {
  while(VAR_11-->0) {
   if (VAR_7 <= VAR_8)
    *VAR_7 = ' ';
   ++VAR_7;
  }
 }
 if (VAR_15) {
  if (VAR_7 <= VAR_8)
   *VAR_7 = VAR_15;
  ++VAR_7;
 }
 if (VAR_13 & VAR_5) {
  if (VAR_10==8) {
   if (VAR_7 <= VAR_8)
    *VAR_7 = '0';
   ++VAR_7;
  } else if (VAR_10==16) {
   if (VAR_7 <= VAR_8)
    *VAR_7 = '0';
   ++VAR_7;
   if (VAR_7 <= VAR_8)
    *VAR_7 = VAR_17[33];
   ++VAR_7;
  }
 }
 if (!(VAR_13 & VAR_1)) {
  while (VAR_11-- > 0) {
   if (VAR_7 <= VAR_8)
    *VAR_7 = VAR_14;
   ++VAR_7;
  }
 }
 while (VAR_20 < VAR_12--) {
  if (VAR_7 <= VAR_8)
   *VAR_7 = '0';
  ++VAR_7;
 }
 while (VAR_20-- > 0) {
  if (VAR_7 <= VAR_8)
   *VAR_7 = VAR_16[VAR_20];
  ++VAR_7;
 }
 while (VAR_11-- > 0) {
  if (VAR_7 <= VAR_8)
   *VAR_7 = ' ';
  ++VAR_7;
 }
 return VAR_7;
}
