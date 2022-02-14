
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kind; } ;
typedef TYPE_1__ zend_ffi_val ;
typedef int zend_ffi_dcl ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char const**,size_t*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int *,char const*,size_t,TYPE_1__*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(int VAR_2, zend_ffi_dcl *VAR_3, int64_t *VAR_4, int64_t *VAR_5, int64_t *VAR_6) {
 const char *VAR_7;
 size_t VAR_8;
 zend_ffi_val VAR_9 = {.kind = VAR_1};
 VAR_2 = FUNC_1(VAR_2, &VAR_7, &VAR_8);
 if (VAR_2 == VAR_0) {
  VAR_2 = FUNC_0();
  VAR_2 = FUNC_2(VAR_2, &VAR_9);
 }
 FUNC_3(VAR_3, VAR_7, VAR_8, &VAR_9, VAR_4, VAR_5, VAR_6);
 return VAR_2;
}
