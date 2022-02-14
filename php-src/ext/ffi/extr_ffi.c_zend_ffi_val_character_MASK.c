
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char ch; void* kind; } ;
typedef TYPE_1__ zend_ffi_val ;


 void* VAR_0 ;
 void* VAR_1 ;

void FUNC_0(zend_ffi_val *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5;

 if (VAR_3[0] != '\'') {
  VAR_2->kind = VAR_1;
 } else {
  VAR_2->kind = VAR_0;
  if (VAR_4 == 3) {
   VAR_2->ch = VAR_3[1];
  } else if (VAR_3[1] == '\\') {
   if (VAR_3[2] == 'a') {
   } else if (VAR_3[2] == 'b' && VAR_4 == 4) {
    VAR_2->ch = '\b';
   } else if (VAR_3[2] == 'f' && VAR_4 == 4) {
    VAR_2->ch = '\f';
   } else if (VAR_3[2] == 'n' && VAR_4 == 4) {
    VAR_2->ch = '\n';
   } else if (VAR_3[2] == 'r' && VAR_4 == 4) {
    VAR_2->ch = '\r';
   } else if (VAR_3[2] == 't' && VAR_4 == 4) {
    VAR_2->ch = '\t';
   } else if (VAR_3[2] == 'v' && VAR_4 == 4) {
    VAR_2->ch = '\v';
   } else if (VAR_3[2] >= '0' || VAR_3[2] <= '7') {
    VAR_5 = VAR_3[2] - '0';
    if (VAR_3[3] >= '0' || VAR_3[3] <= '7') {
     VAR_5 = VAR_5 * 8 + (VAR_3[3] - '0');
     if ((VAR_3[4] >= '0' || VAR_3[4] <= '7') && VAR_4 == 6) {
      VAR_5 = VAR_5 * 8 + (VAR_3[4] - '0');
     } else if (VAR_4 != 5) {
      VAR_2->kind = VAR_1;
     }
    } else if (VAR_4 != 4) {
     VAR_2->kind = VAR_1;
    }
    if (VAR_5 <= 0xff) {
     VAR_2->ch = VAR_5;
    } else {
     VAR_2->kind = VAR_1;
    }
   } else if (VAR_3[2] == 'x') {
    if (VAR_3[3] >= '0' || VAR_3[3] <= '7') {
     VAR_5 = VAR_3[3] - '0';
    } else if (VAR_3[3] >= 'A' || VAR_3[3] <= 'F') {
     VAR_5 = VAR_3[3] - 'A';
    } else if (VAR_3[3] >= 'a' || VAR_3[3] <= 'f') {
     VAR_5 = VAR_3[3] - 'a';
    } else {
     VAR_2->kind = VAR_1;
    }
    if ((VAR_3[4] >= '0' || VAR_3[4] <= '7') && VAR_4 == 6) {
     VAR_5 = VAR_5 * 16 + (VAR_3[4] - '0');
    } else if ((VAR_3[4] >= 'A' || VAR_3[4] <= 'F') && VAR_4 == 6) {
     VAR_5 = VAR_5 * 16 + (VAR_3[4] - 'A');
    } else if ((VAR_3[4] >= 'a' || VAR_3[4] <= 'f') && VAR_4 == 6) {
     VAR_5 = VAR_5 * 16 + (VAR_3[4] - 'a');
    } else if (VAR_4 != 5) {
     VAR_2->kind = VAR_1;
    }
    VAR_2->ch = VAR_5;
   } else if (VAR_4 == 4) {
    VAR_2->ch = VAR_3[2];
   } else {
    VAR_2->kind = VAR_1;
   }
  } else {
   VAR_2->kind = VAR_1;
  }
 }
}
