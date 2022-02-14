
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int volatile php_conv_err_t ;
struct TYPE_4__ {unsigned int line_ccnt; size_t lbchars_len; unsigned int line_len; int* erem; scalar_t__ erem_len; int * lbchars; } ;
typedef TYPE_1__ php_conv_base64_encode ;


 int volatile VAR_0 ;
 int volatile VAR_1 ;
 void** VAR_2 ;
 int FUNC_0 (unsigned char*,int *,size_t) ;
 int volatile FUNC_1 (TYPE_1__*,char const**,size_t*,char**,size_t*) ;

__attribute__((used)) static php_conv_err_t FUNC_2(php_conv_base64_encode *VAR_3, const char **VAR_4, size_t *VAR_5, char **VAR_6, size_t *VAR_7)
{
 volatile php_conv_err_t VAR_8 = VAR_0;
 register size_t VAR_9, VAR_10;
 register unsigned char *VAR_11, *VAR_12;
 register unsigned int VAR_13;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 }

 VAR_12 = (unsigned char *)(*VAR_6);
 VAR_9 = *VAR_7;
 VAR_11 = (unsigned char *)(*VAR_4);
 VAR_10 = *VAR_5;
 VAR_13 = VAR_3->line_ccnt;


 switch (VAR_3->erem_len) {
  case 1:
   if (VAR_10 >= 2) {
    if (VAR_13 < 4 && VAR_3->lbchars != ((void*)0)) {
     if (VAR_9 < VAR_3->lbchars_len) {
      return VAR_1;
     }
     FUNC_0(VAR_12, VAR_3->lbchars, VAR_3->lbchars_len);
     VAR_12 += VAR_3->lbchars_len;
     VAR_9 -= VAR_3->lbchars_len;
     VAR_13 = VAR_3->line_len;
    }
    if (VAR_9 < 4) {
     VAR_8 = VAR_1;
     goto out;
    }
    *(VAR_12++) = VAR_2[(VAR_3->erem[0] >> 2)];
    *(VAR_12++) = VAR_2[(unsigned char)(VAR_3->erem[0] << 4) | (VAR_11[0] >> 4)];
    *(VAR_12++) = VAR_2[(unsigned char)(VAR_11[0] << 2) | (VAR_11[1] >> 6)];
    *(VAR_12++) = VAR_2[VAR_11[1]];
    VAR_9 -= 4;
    VAR_11 += 2;
    VAR_10 -= 2;
    VAR_3->erem_len = 0;
    VAR_13 -= 4;
   }
   break;

  case 2:
   if (VAR_10 >= 1) {
    if (VAR_3->line_ccnt < 4 && VAR_3->lbchars != ((void*)0)) {
     if (VAR_9 < VAR_3->lbchars_len) {
      return VAR_1;
     }
     FUNC_0(VAR_12, VAR_3->lbchars, VAR_3->lbchars_len);
     VAR_12 += VAR_3->lbchars_len;
     VAR_9 -= VAR_3->lbchars_len;
     VAR_13 = VAR_3->line_len;
    }
    if (VAR_9 < 4) {
     VAR_8 = VAR_1;
     goto out;
    }
    *(VAR_12++) = VAR_2[(VAR_3->erem[0] >> 2)];
    *(VAR_12++) = VAR_2[(unsigned char)(VAR_3->erem[0] << 4) | (VAR_3->erem[1] >> 4)];
    *(VAR_12++) = VAR_2[(unsigned char)(VAR_3->erem[1] << 2) | (VAR_11[0] >> 6)];
    *(VAR_12++) = VAR_2[VAR_11[0]];
    VAR_9 -= 4;
    VAR_11 += 1;
    VAR_10 -= 1;
    VAR_3->erem_len = 0;
    VAR_13 -= 4;
   }
   break;
 }

 while (VAR_10 >= 3) {
  if (VAR_13 < 4 && VAR_3->lbchars != ((void*)0)) {
   if (VAR_9 < VAR_3->lbchars_len) {
    VAR_8 = VAR_1;
    goto out;
   }
   FUNC_0(VAR_12, VAR_3->lbchars, VAR_3->lbchars_len);
   VAR_12 += VAR_3->lbchars_len;
   VAR_9 -= VAR_3->lbchars_len;
   VAR_13 = VAR_3->line_len;
  }
  if (VAR_9 < 4) {
   VAR_8 = VAR_1;
   goto out;
  }
  *(VAR_12++) = VAR_2[VAR_11[0] >> 2];
  *(VAR_12++) = VAR_2[(unsigned char)(VAR_11[0] << 4) | (VAR_11[1] >> 4)];
  *(VAR_12++) = VAR_2[(unsigned char)(VAR_11[1] << 2) | (VAR_11[2] >> 6)];
  *(VAR_12++) = VAR_2[VAR_11[2]];

  VAR_11 += 3;
  VAR_10 -=3;
  VAR_9 -= 4;
  VAR_13 -= 4;
 }
 for (;VAR_10 > 0; VAR_10--) {
  VAR_3->erem[VAR_3->erem_len++] = *(VAR_11++);
 }

out:
 *VAR_4 = (const char *)VAR_11;
 *VAR_5 = VAR_10;
 *VAR_6 = (char *)VAR_12;
 *VAR_7 = VAR_9;
 VAR_3->line_ccnt = VAR_13;

 return VAR_8;
}
