
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
 size_t FUNC_0 (long long*,int) ;

__attribute__((used)) static char *
FUNC_1(char * VAR_8, char * VAR_9, long long VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 char VAR_15,VAR_16,VAR_17[66];
 const char *VAR_18;
 const char *VAR_19 = "0123456789abcdefghijklmnopqrstuvwxyz";
 const char *VAR_20 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 int VAR_21;

 VAR_18 = (VAR_14 & VAR_0) ? VAR_20 : VAR_19;
 if (VAR_14 & VAR_1)
  VAR_14 &= ~VAR_7;
 if (VAR_11 < 2 || VAR_11 > 36)
  return 0;
 VAR_15 = (VAR_14 & VAR_7) ? '0' : ' ';
 VAR_16 = 0;
 if (VAR_14 & VAR_4) {
  if (VAR_10 < 0) {
   VAR_16 = '-';
   VAR_10 = -VAR_10;
   VAR_12--;
  } else if (VAR_14 & VAR_2) {
   VAR_16 = '+';
   VAR_12--;
  } else if (VAR_14 & VAR_5) {
   VAR_16 = ' ';
   VAR_12--;
  }
 }

 if ((VAR_14 & VAR_6) && ((VAR_14 & VAR_3) == 0)) {
  if (VAR_11 == 16)
   VAR_12 -= 2;

 }
 VAR_21 = 0;
 if ((VAR_10 == 0) && (VAR_13 !=0))
  VAR_17[VAR_21++] = '0';
 else while (VAR_10 != 0)
  VAR_17[VAR_21++] = VAR_18[FUNC_0(&VAR_10,VAR_11)];
 if (VAR_21 > VAR_13)
  VAR_13 = VAR_21;
 VAR_12 -= VAR_13;
 if (!(VAR_14&(VAR_7+VAR_1))) {
  while(VAR_12-->0) {
   if (VAR_8 <= VAR_9)
    *VAR_8 = ' ';
   ++VAR_8;
  }
 }
 if (VAR_16) {
  if (VAR_8 <= VAR_9)
   *VAR_8 = VAR_16;
  ++VAR_8;
 }

 if ((VAR_14 & VAR_6) && ((VAR_14 & VAR_3) == 0)) {
   if (VAR_11==16) {
   if (VAR_8 <= VAR_9)
    *VAR_8 = '0';
   ++VAR_8;
   if (VAR_8 <= VAR_9)
    *VAR_8 = VAR_18[33];
   ++VAR_8;
  }
 }

 if (!(VAR_14 & VAR_1)) {
  while (VAR_12-- > 0) {
   if (VAR_8 <= VAR_9)
    *VAR_8 = VAR_15;
   ++VAR_8;
  }
 }
 while (VAR_21 < VAR_13--) {
  if (VAR_8 <= VAR_9)
   *VAR_8 = '0';
  ++VAR_8;
 }
 while (VAR_21-- > 0) {
  if (VAR_8 <= VAR_9)
   *VAR_8 = VAR_17[VAR_21];
  ++VAR_8;
 }
 while (VAR_12-- > 0) {
  if (VAR_8 <= VAR_9)
   *VAR_8 = ' ';
  ++VAR_8;
 }

 return VAR_8;
}
