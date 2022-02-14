
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int php_conv_err_t ;
struct TYPE_3__ {int eos; unsigned int urem_nbits; unsigned int urem; unsigned int ustat; } ;
typedef TYPE_1__ php_conv_base64_decode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int* VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static php_conv_err_t FUNC_1(php_conv_base64_decode *VAR_5, const char **VAR_6, size_t *VAR_7, char **VAR_8, size_t *VAR_9)
{
 php_conv_err_t VAR_10;

 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;
 unsigned char *VAR_15, *VAR_16;
 size_t VAR_17, VAR_18;
 unsigned int VAR_19;

 static const unsigned int VAR_20 = 8;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  if (VAR_5->eos || VAR_5->urem_nbits == 0) {
   return VAR_1;
  }
  return VAR_3;
 }

 VAR_10 = VAR_1;

 VAR_15 = (unsigned char *)*VAR_6;
 VAR_16 = (unsigned char *)*VAR_8;
 VAR_17 = *VAR_7;
 VAR_18 = *VAR_9;

 VAR_11 = VAR_5->urem;
 VAR_12 = VAR_5->urem_nbits;
 VAR_19 = VAR_5->ustat;

 VAR_13 = 0;
 VAR_14 = VAR_20;

 for (;;) {
  if (VAR_14 >= VAR_12) {
   VAR_14 -= VAR_12;
   VAR_13 |= (VAR_11 << VAR_14);
   VAR_12 = 0;
  } else {
   VAR_12 -= VAR_14;
   VAR_13 |= (VAR_11 >> VAR_12);
   VAR_11 &= FUNC_0(VAR_12);
   VAR_14 = 0;
  }
  if (VAR_14 > 0) {
   unsigned int VAR_21;

   if (VAR_17 < 1) {
    break;
   }

   VAR_21 = VAR_4[(unsigned int)*(VAR_15++)];
   VAR_17--;
   VAR_19 |= VAR_21 & 0x80;

   if (!(VAR_21 & 0xc0)) {
    if (VAR_19) {
     VAR_10 = VAR_0;
     break;
    }
    if (6 <= VAR_14) {
     VAR_14 -= 6;
     VAR_13 |= (VAR_21 << VAR_14);
     VAR_11 = 0;
    } else {
     VAR_12 = 6 - VAR_14;
     VAR_13 |= (VAR_21 >> VAR_12);
     VAR_11 = VAR_21 & FUNC_0(VAR_12);
     VAR_14 = 0;
    }
   } else if (VAR_19) {
    if (VAR_14 == 8 || VAR_14 == 2) {
     VAR_10 = VAR_0;
     break;
    }
    VAR_5->eos = 1;
   }
  }
  if ((VAR_14 | VAR_19) == 0) {
   if (VAR_18 < 1) {
    VAR_10 = VAR_2;
    break;
   }
   *(VAR_16++) = VAR_13;
   VAR_18--;
   VAR_13 = 0;
   VAR_14 = VAR_20;
  }
 }

 if (VAR_12 >= VAR_14) {
  VAR_11 |= (VAR_13 << (VAR_12 - VAR_14));
  VAR_12 += (VAR_20 - VAR_14);
 } else {
  VAR_11 |= (VAR_13 >> (VAR_14 - VAR_12));
  VAR_12 += (VAR_20 - VAR_14);
 }

 VAR_5->urem = VAR_11;
 VAR_5->urem_nbits = VAR_12;
 VAR_5->ustat = VAR_19;

 *VAR_6 = (const char *)VAR_15;
 *VAR_7 = VAR_17;
 *VAR_8 = (char *)VAR_16;
 *VAR_9 = VAR_18;

 return VAR_10;
}
