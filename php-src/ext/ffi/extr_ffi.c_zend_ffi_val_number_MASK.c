
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* kind; int i64; int u64; } ;
typedef TYPE_1__ zend_ffi_val ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char const*,int *,int) ;
 int FUNC_1 (char const*,int *,int) ;

void FUNC_2(zend_ffi_val *VAR_4, int VAR_5, const char *VAR_6, size_t VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (VAR_6[VAR_7-1] == 'u' || VAR_6[VAR_7-1] == 'U') {
  VAR_8 = 1;
  if (VAR_6[VAR_7-2] == 'l' || VAR_6[VAR_7-2] == 'L') {
   VAR_9 = 1;
   if (VAR_6[VAR_7-3] == 'l' || VAR_6[VAR_7-3] == 'L') {
    VAR_9 = 2;
   }
  }
 } else if (VAR_6[VAR_7-1] == 'l' || VAR_6[VAR_7-1] == 'L') {
  VAR_9 = 1;
  if (VAR_6[VAR_7-2] == 'l' || VAR_6[VAR_7-2] == 'L') {
   VAR_9 = 2;
   if (VAR_6[VAR_7-3] == 'u' || VAR_6[VAR_7-3] == 'U') {
    VAR_8 = 1;
   }
  } else if (VAR_6[VAR_7-2] == 'u' || VAR_6[VAR_7-2] == 'U') {
   VAR_8 = 1;
  }
 }
 if (VAR_8) {
  VAR_4->u64 = FUNC_1(VAR_6, ((void*)0), VAR_5);
  if (VAR_9 == 0) {
   VAR_4->kind = VAR_2;
  } else if (VAR_9 == 1) {
   VAR_4->kind = (sizeof(long) == 4) ? VAR_2 : VAR_3;
  } else if (VAR_9 == 2) {
   VAR_4->kind = VAR_3;
  }
 } else {
  VAR_4->i64 = FUNC_0(VAR_6, ((void*)0), VAR_5);
  if (VAR_9 == 0) {
   VAR_4->kind = VAR_0;
  } else if (VAR_9 == 1) {
   VAR_4->kind = (sizeof(long) == 4) ? VAR_0 : VAR_1;
  } else if (VAR_9 == 2) {
   VAR_4->kind = VAR_1;
  }
 }
}
