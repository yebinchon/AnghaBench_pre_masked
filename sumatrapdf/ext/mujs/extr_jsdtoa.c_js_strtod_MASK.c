
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double* VAR_5 ;

double
FUNC_0(const char *VAR_6, char **VAR_7)
{
 int VAR_8, VAR_9 = VAR_1;
 double VAR_10, VAR_11, *VAR_12;
 register const char *VAR_13;
 register int VAR_14;


 int VAR_15 = 0;
 int VAR_16 = 0;


 int VAR_17;


 int VAR_18;


 const char *VAR_19;





 VAR_13 = VAR_6;
 while (*VAR_13 == ' ' || *VAR_13 == '\t' || *VAR_13 == '\n' || *VAR_13 == '\r') {
  VAR_13 += 1;
 }
 if (*VAR_13 == '-') {
  VAR_8 = VAR_2;
  VAR_13 += 1;
 } else {
  if (*VAR_13 == '+') {
   VAR_13 += 1;
  }
  VAR_8 = VAR_1;
 }






 VAR_18 = -1;
 for (VAR_17 = 0; ; VAR_17 += 1)
 {
  VAR_14 = *VAR_13;
  if (!(VAR_14>='0'&&VAR_14<='9')) {
   if ((VAR_14 != '.') || (VAR_18 >= 0)) {
    break;
   }
   VAR_18 = VAR_17;
  }
  VAR_13 += 1;
 }
 VAR_19 = VAR_13;
 VAR_13 -= VAR_17;
 if (VAR_18 < 0) {
  VAR_18 = VAR_17;
 } else {
  VAR_17 -= 1;
 }
 if (VAR_17 > 18) {
  VAR_16 = VAR_18 - 18;
  VAR_17 = 18;
 } else {
  VAR_16 = VAR_18 - VAR_17;
 }
 if (VAR_17 == 0) {
  VAR_10 = 0.0;
  VAR_13 = VAR_6;
  goto done;
 } else {
  int VAR_20, VAR_21;
  VAR_20 = 0;
  for ( ; VAR_17 > 9; VAR_17 -= 1)
  {
   VAR_14 = *VAR_13;
   VAR_13 += 1;
   if (VAR_14 == '.') {
    VAR_14 = *VAR_13;
    VAR_13 += 1;
   }
   VAR_20 = 10*VAR_20 + (VAR_14 - '0');
  }
  VAR_21 = 0;
  for (; VAR_17 > 0; VAR_17 -= 1)
  {
   VAR_14 = *VAR_13;
   VAR_13 += 1;
   if (VAR_14 == '.') {
    VAR_14 = *VAR_13;
    VAR_13 += 1;
   }
   VAR_21 = 10*VAR_21 + (VAR_14 - '0');
  }
  VAR_10 = (1.0e9 * VAR_20) + VAR_21;
 }





 VAR_13 = VAR_19;
 if ((*VAR_13 == 'E') || (*VAR_13 == 'e')) {
  VAR_13 += 1;
  if (*VAR_13 == '-') {
   VAR_9 = VAR_2;
   VAR_13 += 1;
  } else {
   if (*VAR_13 == '+') {
    VAR_13 += 1;
   }
   VAR_9 = VAR_1;
  }
  while ((*VAR_13 >= '0') && (*VAR_13 <= '9')) {
   VAR_15 = VAR_15 * 10 + (*VAR_13 - '0');
   VAR_13 += 1;
  }
 }
 if (VAR_9) {
  VAR_15 = VAR_16 - VAR_15;
 } else {
  VAR_15 = VAR_16 + VAR_15;
 }
 if (VAR_15 < -VAR_4) {
  VAR_15 = VAR_4;
  VAR_9 = VAR_2;
  VAR_3 = VAR_0;
 } else if (VAR_15 > VAR_4) {
  VAR_15 = VAR_4;
  VAR_9 = VAR_1;
  VAR_3 = VAR_0;
 } else if (VAR_15 < 0) {
  VAR_9 = VAR_2;
  VAR_15 = -VAR_15;
 } else {
  VAR_9 = VAR_1;
 }
 VAR_11 = 1.0;
 for (VAR_12 = VAR_5; VAR_15 != 0; VAR_15 >>= 1, VAR_12 += 1) {
  if (VAR_15 & 01) {
   VAR_11 *= *VAR_12;
  }
 }
 if (VAR_9) {
  VAR_10 /= VAR_11;
 } else {
  VAR_10 *= VAR_11;
 }

done:
 if (VAR_7 != ((void*)0)) {
  *VAR_7 = (char *) VAR_13;
 }

 if (VAR_8) {
  return -VAR_10;
 }
 return VAR_10;
}
