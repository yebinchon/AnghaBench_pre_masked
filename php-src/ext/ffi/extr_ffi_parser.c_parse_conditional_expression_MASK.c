
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ffi_val ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_5(int VAR_2, zend_ffi_val *VAR_3) {
 zend_ffi_val VAR_4, VAR_5;
 VAR_2 = FUNC_2(VAR_2, VAR_3);
 if (VAR_2 == VAR_1) {
  VAR_2 = FUNC_0();
  VAR_2 = FUNC_1(VAR_2, &VAR_4);
  if (VAR_2 != VAR_0) {
   FUNC_3("':' expected, got", VAR_2);
  }
  VAR_2 = FUNC_0();
  VAR_2 = FUNC_5(VAR_2, &VAR_5);
  FUNC_4(VAR_3, &VAR_4, &VAR_5);
 }
 return VAR_2;
}
