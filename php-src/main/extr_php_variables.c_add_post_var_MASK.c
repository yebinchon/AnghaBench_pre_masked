
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_bool ;
struct TYPE_4__ {char* ptr; char* end; int already_scanned; } ;
typedef TYPE_1__ post_var_data_t ;
struct TYPE_5__ {scalar_t__ (* input_filter ) (int ,char*,char**,size_t,size_t*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,size_t) ;
 char* FUNC_2 (char*,char,int) ;
 int FUNC_3 (char*,char*,size_t,int *) ;
 size_t FUNC_4 (char*,size_t) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_5 (int ,char*,char**,size_t,size_t*) ;

__attribute__((used)) static zend_bool FUNC_6(zval *VAR_2, post_var_data_t *VAR_3, zend_bool VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10;
 size_t VAR_11;

 if (VAR_3->ptr >= VAR_3->end) {
  return 0;
 }

 VAR_5 = VAR_3->ptr + VAR_3->already_scanned;
 VAR_7 = FUNC_2(VAR_5, '&', VAR_3->end - VAR_5);
 if (!VAR_7) {
  if (!VAR_4) {
   VAR_3->already_scanned = VAR_3->end - VAR_3->ptr;
   return 0;
  } else {
   VAR_7 = VAR_3->end;
  }
 }

 VAR_6 = FUNC_2(VAR_3->ptr, '=', VAR_7 - VAR_3->ptr);
 if (VAR_6) {
  *VAR_6 = '\0';

  VAR_9 = VAR_6 - VAR_3->ptr;
  VAR_10 = VAR_7 - ++VAR_6;
 } else {
  VAR_6 = "";

  VAR_9 = VAR_7 - VAR_3->ptr;
  VAR_10 = 0;
 }

 FUNC_4(VAR_3->ptr, VAR_9);

 VAR_8 = FUNC_1(VAR_6, VAR_10);
 if (VAR_10) {
  VAR_10 = FUNC_4(VAR_8, VAR_10);
 }

 if (VAR_1.input_filter(VAR_0, VAR_3->ptr, &VAR_8, VAR_10, &VAR_11)) {
  FUNC_3(VAR_3->ptr, VAR_8, VAR_11, VAR_2);
 }
 FUNC_0(VAR_8);

 VAR_3->ptr = VAR_7 + (VAR_7 != VAR_3->end);
 VAR_3->already_scanned = 0;
 return 1;
}
