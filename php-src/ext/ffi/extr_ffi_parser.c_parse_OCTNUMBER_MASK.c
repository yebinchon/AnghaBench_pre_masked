
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ffi_val ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int,char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(int VAR_3, zend_ffi_val *VAR_4) {
 if (VAR_3 != VAR_0) {
  FUNC_1("<OCTNUMBER> expected, got", VAR_3);
 }
 FUNC_2(VAR_4, 8, (const char*)VAR_2, VAR_1 - VAR_2);
 VAR_3 = FUNC_0();
 return VAR_3;
}
