
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
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(int VAR_4, zend_ffi_val *VAR_5) {
 zend_ffi_val VAR_6;
 VAR_4 = FUNC_1(VAR_4, VAR_5);
 while (VAR_4 == VAR_2 || VAR_4 == VAR_0 || VAR_4 == VAR_3 || VAR_4 == VAR_1) {
  if (VAR_4 == VAR_2) {
   VAR_4 = FUNC_0();
   VAR_4 = FUNC_1(VAR_4, &VAR_6);
   FUNC_4(VAR_5, &VAR_6);
  } else if (VAR_4 == VAR_0) {
   VAR_4 = FUNC_0();
   VAR_4 = FUNC_1(VAR_4, &VAR_6);
   FUNC_2(VAR_5, &VAR_6);
  } else if (VAR_4 == VAR_3) {
   VAR_4 = FUNC_0();
   VAR_4 = FUNC_1(VAR_4, &VAR_6);
   FUNC_5(VAR_5, &VAR_6);
  } else {
   VAR_4 = FUNC_0();
   VAR_4 = FUNC_1(VAR_4, &VAR_6);
   FUNC_3(VAR_5, &VAR_6);
  }
 }
 return VAR_4;
}
