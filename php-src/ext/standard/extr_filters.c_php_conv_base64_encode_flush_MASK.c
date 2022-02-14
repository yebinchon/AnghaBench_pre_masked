
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int volatile php_conv_err_t ;
struct TYPE_3__ {unsigned int line_ccnt; int erem_len; size_t lbchars_len; unsigned int line_len; int* erem; int * lbchars; } ;
typedef TYPE_1__ php_conv_base64_encode ;


 int volatile VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 void** VAR_3 ;
 int FUNC_0 (unsigned char*,int *,size_t) ;

__attribute__((used)) static php_conv_err_t FUNC_1(php_conv_base64_encode *VAR_4, const char **VAR_5, size_t *VAR_6, char **VAR_7, size_t *VAR_8)
{
 volatile php_conv_err_t VAR_9 = VAR_0;
 register unsigned char *VAR_10;
 register size_t VAR_11;
 unsigned int VAR_12;

 VAR_10 = (unsigned char *)(*VAR_7);
 VAR_11 = *VAR_8;
 VAR_12 = VAR_4->line_ccnt;

 switch (VAR_4->erem_len) {
  case 0:

   break;

  case 1:
   if (VAR_12 < 4 && VAR_4->lbchars != ((void*)0)) {
    if (VAR_11 < VAR_4->lbchars_len) {
     return VAR_1;
    }
    FUNC_0(VAR_10, VAR_4->lbchars, VAR_4->lbchars_len);
    VAR_10 += VAR_4->lbchars_len;
    VAR_11 -= VAR_4->lbchars_len;
    VAR_12 = VAR_4->line_len;
   }
   if (VAR_11 < 4) {
    VAR_9 = VAR_1;
    goto out;
   }
   *(VAR_10++) = VAR_3[(VAR_4->erem[0] >> 2)];
   *(VAR_10++) = VAR_3[(unsigned char)(VAR_4->erem[0] << 4)];
   *(VAR_10++) = '=';
   *(VAR_10++) = '=';
   VAR_4->erem_len = 0;
   VAR_11 -= 4;
   VAR_12 -= 4;
   break;

  case 2:
   if (VAR_12 < 4 && VAR_4->lbchars != ((void*)0)) {
    if (VAR_11 < VAR_4->lbchars_len) {
     return VAR_1;
    }
    FUNC_0(VAR_10, VAR_4->lbchars, VAR_4->lbchars_len);
    VAR_10 += VAR_4->lbchars_len;
    VAR_11 -= VAR_4->lbchars_len;
    VAR_12 = VAR_4->line_len;
   }
   if (VAR_11 < 4) {
    VAR_9 = VAR_1;
    goto out;
   }
   *(VAR_10++) = VAR_3[(VAR_4->erem[0] >> 2)];
   *(VAR_10++) = VAR_3[(unsigned char)(VAR_4->erem[0] << 4) | (VAR_4->erem[1] >> 4)];
   *(VAR_10++) = VAR_3[(unsigned char)(VAR_4->erem[1] << 2)];
   *(VAR_10++) = '=';
   VAR_4->erem_len = 0;
   VAR_11 -=4;
   VAR_12 -= 4;
   break;

  default:

   VAR_9 = VAR_2;
   break;
 }
out:
 *VAR_7 = (char *)VAR_10;
 *VAR_8 = VAR_11;
 VAR_4->line_ccnt = VAR_12;
 return VAR_9;
}
