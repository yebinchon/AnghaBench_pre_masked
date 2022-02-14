
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ synctex_status_t ;
typedef int * synctex_scanner_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,size_t*) ;

synctex_status_t FUNC_1(synctex_scanner_t VAR_4) {
 synctex_status_t VAR_5 = VAR_3;
 size_t VAR_6 = 0;
 if (((void*)0) == VAR_4) {
  return VAR_2;
 }
infinite_loop:
 while(VAR_0<VAR_1) {
  if (*VAR_0 == '\n') {
   ++VAR_0;
   VAR_6 = 1;
   return FUNC_0(VAR_4, &VAR_6);
  }
  ++VAR_0;
 }


 VAR_6 = 1;
 VAR_5 = FUNC_0(VAR_4, &VAR_6);
 if (VAR_5<=0) {
  return VAR_5;
 }
 goto infinite_loop;
}
