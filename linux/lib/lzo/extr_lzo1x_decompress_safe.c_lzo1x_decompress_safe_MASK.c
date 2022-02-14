
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*) ;
 int FUNC_1 (unsigned char*,unsigned char const*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (unsigned char const*) ;
 size_t FUNC_7 (unsigned char const*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (unsigned char*,int ,size_t) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(const unsigned char *VAR_9, size_t VAR_10,
     unsigned char *VAR_11, size_t *VAR_12)
{
 unsigned char *VAR_13;
 const unsigned char *VAR_14;
 size_t VAR_15, VAR_16;
 size_t VAR_17 = 0;
 const unsigned char *VAR_18;
 const unsigned char * const VAR_19 = VAR_9 + VAR_10;
 unsigned char * const VAR_20 = VAR_11 + *VAR_12;

 unsigned char VAR_21;

 VAR_13 = VAR_11;
 VAR_14 = VAR_9;

 if (FUNC_10(VAR_10 < 3))
  goto input_overrun;

 if (FUNC_8(VAR_10 >= 5) && FUNC_8(*VAR_14 == 17)) {
  VAR_21 = VAR_14[1];
  VAR_14 += 2;
 } else {
  VAR_21 = 0;
 }

 if (*VAR_14 > 17) {
  VAR_15 = *VAR_14++ - 17;
  if (VAR_15 < 4) {
   VAR_16 = VAR_15;
   goto match_next;
  }
  goto copy_literal_run;
 }

 for (;;) {
  VAR_15 = *VAR_14++;
  if (VAR_15 < 16) {
   if (FUNC_8(VAR_17 == 0)) {
    if (FUNC_10(VAR_15 == 0)) {
     size_t VAR_22;
     const unsigned char *VAR_23 = VAR_14;

     while (FUNC_10(*VAR_14 == 0)) {
      VAR_14++;
      FUNC_4(1);
     }
     VAR_22 = VAR_14 - VAR_23;
     if (FUNC_10(VAR_22 > VAR_7))
      return VAR_0;

     VAR_22 = (VAR_22 << 8) - VAR_22;
     VAR_15 += VAR_22 + 15 + *VAR_14++;
    }
    VAR_15 += 3;
copy_literal_run:
    {
     FUNC_5(VAR_15);
     FUNC_4(VAR_15 + 3);
     do {
      *VAR_13++ = *VAR_14++;
     } while (--VAR_15 > 0);
    }
    VAR_17 = 4;
    continue;
   } else if (VAR_17 != 4) {
    VAR_16 = VAR_15 & 3;
    VAR_18 = VAR_13 - 1;
    VAR_18 -= VAR_15 >> 2;
    VAR_18 -= *VAR_14++ << 2;
    FUNC_6(VAR_18);
    FUNC_5(2);
    VAR_13[0] = VAR_18[0];
    VAR_13[1] = VAR_18[1];
    VAR_13 += 2;
    goto match_next;
   } else {
    VAR_16 = VAR_15 & 3;
    VAR_18 = VAR_13 - (1 + VAR_6);
    VAR_18 -= VAR_15 >> 2;
    VAR_18 -= *VAR_14++ << 2;
    VAR_15 = 3;
   }
  } else if (VAR_15 >= 64) {
   VAR_16 = VAR_15 & 3;
   VAR_18 = VAR_13 - 1;
   VAR_18 -= (VAR_15 >> 2) & 7;
   VAR_18 -= *VAR_14++ << 3;
   VAR_15 = (VAR_15 >> 5) - 1 + (3 - 1);
  } else if (VAR_15 >= 32) {
   VAR_15 = (VAR_15 & 31) + (3 - 1);
   if (FUNC_10(VAR_15 == 2)) {
    size_t VAR_24;
    const unsigned char *VAR_25 = VAR_14;

    while (FUNC_10(*VAR_14 == 0)) {
     VAR_14++;
     FUNC_4(1);
    }
    VAR_24 = VAR_14 - VAR_25;
    if (FUNC_10(VAR_24 > VAR_7))
     return VAR_0;

    VAR_24 = (VAR_24 << 8) - VAR_24;
    VAR_15 += VAR_24 + 31 + *VAR_14++;
    FUNC_4(2);
   }
   VAR_18 = VAR_13 - 1;
   VAR_16 = FUNC_7(VAR_14);
   VAR_14 += 2;
   VAR_18 -= VAR_16 >> 2;
   VAR_16 &= 3;
  } else {
   FUNC_4(2);
   VAR_16 = FUNC_7(VAR_14);
   if (((VAR_16 & 0xfffc) == 0xfffc) &&
       ((VAR_15 & 0xf8) == 0x18) &&
       FUNC_8(VAR_21)) {
    FUNC_4(3);
    VAR_15 &= 7;
    VAR_15 |= VAR_14[2] << 3;
    VAR_15 += VAR_8;
    FUNC_5(VAR_15);
    FUNC_9(VAR_13, 0, VAR_15);
    VAR_13 += VAR_15;
    VAR_16 &= 3;
    VAR_14 += 3;
    goto match_next;
   } else {
    VAR_18 = VAR_13;
    VAR_18 -= (VAR_15 & 8) << 11;
    VAR_15 = (VAR_15 & 7) + (3 - 1);
    if (FUNC_10(VAR_15 == 2)) {
     size_t VAR_26;
     const unsigned char *VAR_27 = VAR_14;

     while (FUNC_10(*VAR_14 == 0)) {
      VAR_14++;
      FUNC_4(1);
     }
     VAR_26 = VAR_14 - VAR_27;
     if (FUNC_10(VAR_26 > VAR_7))
      return VAR_0;

     VAR_26 = (VAR_26 << 8) - VAR_26;
     VAR_15 += VAR_26 + 7 + *VAR_14++;
     FUNC_4(2);
     VAR_16 = FUNC_7(VAR_14);
    }
    VAR_14 += 2;
    VAR_18 -= VAR_16 >> 2;
    VAR_16 &= 3;
    if (VAR_18 == VAR_13)
     goto eof_found;
    VAR_18 -= 0x4000;
   }
  }
  FUNC_6(VAR_18);
  {
   unsigned char *VAR_28 = VAR_13 + VAR_15;
   FUNC_5(VAR_15);
   VAR_13[0] = VAR_18[0];
   VAR_13[1] = VAR_18[1];
   VAR_13 += 2;
   VAR_18 += 2;
   do {
    *VAR_13++ = *VAR_18++;
   } while (VAR_13 < VAR_28);
  }
match_next:
  VAR_17 = VAR_16;
  VAR_15 = VAR_16;







  {
   FUNC_4(VAR_15 + 3);
   FUNC_5(VAR_15);
   while (VAR_15 > 0) {
    *VAR_13++ = *VAR_14++;
    VAR_15--;
   }
  }
 }

eof_found:
 *VAR_12 = VAR_13 - VAR_11;
 return (VAR_15 != 3 ? VAR_0 :
  VAR_14 == VAR_19 ? VAR_4 :
  VAR_14 < VAR_19 ? VAR_1 : VAR_2);

input_overrun:
 *VAR_12 = VAR_13 - VAR_11;
 return VAR_2;

output_overrun:
 *VAR_12 = VAR_13 - VAR_11;
 return VAR_5;

lookbehind_overrun:
 *VAR_12 = VAR_13 - VAR_11;
 return VAR_3;
}
