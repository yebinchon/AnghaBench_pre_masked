
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ffi_dcl ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int *,int*,int*,int*) ;
 int FUNC_2 (char*,int) ;
 int VAR_3 ;
 unsigned char const* VAR_4 ;
 unsigned char const* VAR_5 ;

__attribute__((used)) static int FUNC_3(int VAR_6, zend_ffi_dcl *VAR_7) {
 int VAR_8;
 const unsigned char *VAR_9;
 const unsigned char *VAR_10;
 int VAR_11;
 int VAR_12;
 int64_t VAR_13 = 0, VAR_14 = 0, VAR_15 = -1;
 VAR_6 = FUNC_1(VAR_6, VAR_7, &VAR_13, &VAR_14, &VAR_15);
 while (1) {
  VAR_9 = VAR_4;
  VAR_10 = VAR_5;
  VAR_11 = VAR_3;
  VAR_12 = -2;
  VAR_8 = VAR_6;
  if (VAR_8 == VAR_1) {
   VAR_8 = FUNC_0();
   goto _yy_state_250_1;
  } else if (VAR_8 == VAR_2) {
   VAR_12 = -1;
   goto _yy_state_250;
  } else {
   FUNC_2("unexpected", VAR_8);
  }
_yy_state_250_1:
  if (VAR_8 == VAR_0) {
   VAR_12 = 251;
   goto _yy_state_250;
  } else if (VAR_8 == VAR_2) {
   VAR_12 = 253;
   goto _yy_state_250;
  } else {
   FUNC_2("unexpected", VAR_8);
  }
_yy_state_250:
  VAR_4 = VAR_9;
  VAR_5 = VAR_10;
  VAR_3 = VAR_11;
  if (VAR_12 != 251) {
   break;
  }
  VAR_6 = FUNC_0();
  VAR_6 = FUNC_1(VAR_6, VAR_7, &VAR_13, &VAR_14, &VAR_15);
 }
 if (VAR_12 == 253) {
  VAR_6 = FUNC_0();
 }
 return VAR_6;
}
