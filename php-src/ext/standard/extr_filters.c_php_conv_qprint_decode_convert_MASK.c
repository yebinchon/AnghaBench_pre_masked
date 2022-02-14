
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int lb_ptr; unsigned int lb_cnt; unsigned int scan_stat; unsigned int next_char; unsigned int lbchars_len; scalar_t__* lbchars; } ;
typedef TYPE_1__ php_conv_qprint_decode ;
typedef int php_conv_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static php_conv_err_t FUNC_1(php_conv_qprint_decode *VAR_4, const char **VAR_5, size_t *VAR_6, char **VAR_7, size_t *VAR_8)
{
 php_conv_err_t VAR_9 = VAR_1;
 size_t VAR_10, VAR_11;
 unsigned char *VAR_12, *VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16, VAR_17;

 VAR_16 = VAR_4->lb_ptr;
 VAR_17 = VAR_4->lb_cnt;

 if ((VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) && VAR_17 == VAR_16) {
  if (VAR_4->scan_stat != 0) {
   return VAR_3;
  }
  return VAR_1;
 }

 VAR_12 = (unsigned char *)(*VAR_5);
 VAR_10 = *VAR_6;
 VAR_13 = (unsigned char *)(*VAR_7);
 VAR_11 = *VAR_8;
 VAR_14 = VAR_4->scan_stat;
 VAR_15 = VAR_4->next_char;

 for (;;) {
  switch (VAR_14) {
   case 0: {
    if (VAR_10 == 0) {
     goto out;
    }
    if (*VAR_12 == '=') {
     VAR_14 = 1;
    } else {
     if (VAR_11 < 1) {
      VAR_9 = VAR_2;
      goto out;
     }
     *(VAR_13++) = *VAR_12;
     VAR_11--;
    }
    VAR_12++, VAR_10--;
   } break;

   case 1: {
    if (VAR_10 == 0) {
     goto out;
    }
    if (*VAR_12 == ' ' || *VAR_12 == '\t') {
     VAR_14 = 4;
     VAR_12++, VAR_10--;
     break;
    } else if (!VAR_4->lbchars && VAR_17 == 0 && *VAR_12 == '\r') {

     VAR_17++;
     VAR_14 = 5;
     VAR_12++, VAR_10--;
     break;
    } else if (!VAR_4->lbchars && VAR_17 == 0 && *VAR_12 == '\n') {

     VAR_17 = VAR_16 = 0;
     VAR_14 = 0;
     VAR_12++, VAR_10--;
     break;
    } else if (VAR_17 < VAR_4->lbchars_len &&
       *VAR_12 == (unsigned char)VAR_4->lbchars[VAR_17]) {
     VAR_17++;
     VAR_14 = 5;
     VAR_12++, VAR_10--;
     break;
    }
   }

   case 2: {
    if (VAR_10 == 0) {
     goto out;
    }

    if (!FUNC_0((int) *VAR_12)) {
     VAR_9 = VAR_0;
     goto out;
    }
    VAR_15 = (VAR_15 << 4) | (*VAR_12 >= 'A' ? *VAR_12 - 0x37 : *VAR_12 - 0x30);
    VAR_14++;
    VAR_12++, VAR_10--;
    if (VAR_14 != 3) {
     break;
    }
   }

   case 3: {
    if (VAR_11 < 1) {
     VAR_9 = VAR_2;
     goto out;
    }
    *(VAR_13++) = VAR_15;
    VAR_11--;
    VAR_14 = 0;
   } break;

   case 4: {
    if (VAR_10 == 0) {
     goto out;
    }
    if (VAR_17 < VAR_4->lbchars_len &&
     *VAR_12 == (unsigned char)VAR_4->lbchars[VAR_17]) {
     VAR_17++;
     VAR_14 = 5;
    }
    if (*VAR_12 != '\t' && *VAR_12 != ' ') {
     VAR_9 = VAR_0;
     goto out;
    }
    VAR_12++, VAR_10--;
   } break;

   case 5: {
    if (!VAR_4->lbchars && VAR_17 == 1 && *VAR_12 == '\n') {

     VAR_17 = VAR_16 = 0;
     VAR_14 = 0;
     VAR_12++, VAR_10--;
    } else if (!VAR_4->lbchars && VAR_17 > 0) {

     VAR_17 = VAR_16 = 0;
     VAR_14 = 0;
    } else if (VAR_17 >= VAR_4->lbchars_len) {

     VAR_17 = VAR_16 = 0;
     VAR_14 = 0;
    } else if (VAR_10 > 0) {
     if (*VAR_12 == (unsigned char)VAR_4->lbchars[VAR_17]) {
      VAR_17++;
      VAR_12++, VAR_10--;
     } else {
      VAR_14 = 6;
     }
    } else {
     goto out;
    }
   } break;

   case 6: {
    if (VAR_16 < VAR_17) {
     if (VAR_11 < 1) {
      VAR_9 = VAR_2;
      goto out;
     }
     *(VAR_13++) = VAR_4->lbchars[VAR_16++];
     VAR_11--;
    } else {
     VAR_14 = 0;
     VAR_17 = VAR_16 = 0;
    }
   } break;
  }
 }
out:
 *VAR_5 = (const char *)VAR_12;
 *VAR_6 = VAR_10;
 *VAR_7 = (char *)VAR_13;
 *VAR_8 = VAR_11;
 VAR_4->scan_stat = VAR_14;
 VAR_4->lb_ptr = VAR_16;
 VAR_4->lb_cnt = VAR_17;
 VAR_4->next_char = VAR_15;

 return VAR_9;
}
