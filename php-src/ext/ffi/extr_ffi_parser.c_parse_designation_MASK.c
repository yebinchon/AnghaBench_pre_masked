
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ffi_val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char const**,size_t*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_4) {
 const char *VAR_5;
 size_t VAR_6;
 zend_ffi_val VAR_7;
 do {
  if (VAR_4 == VAR_1) {
   VAR_4 = FUNC_0();
   VAR_4 = FUNC_2(VAR_4, &VAR_7);
   if (VAR_4 != VAR_3) {
    FUNC_3("']' expected, got", VAR_4);
   }
   VAR_4 = FUNC_0();
  } else if (VAR_4 == VAR_2) {
   VAR_4 = FUNC_0();
   VAR_4 = FUNC_1(VAR_4, &VAR_5, &VAR_6);
  } else {
   FUNC_3("unexpected", VAR_4);
  }
 } while (VAR_4 == VAR_1 || VAR_4 == VAR_2);
 if (VAR_4 != VAR_0) {
  FUNC_3("'=' expected, got", VAR_4);
 }
 VAR_4 = FUNC_0();
 return VAR_4;
}
