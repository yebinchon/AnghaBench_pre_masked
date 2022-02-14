
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ synctex_status_t ;
typedef int * synctex_scanner_t ;


 size_t VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,size_t*) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

synctex_status_t FUNC_2(synctex_scanner_t VAR_6, int* VAR_7) {
 char * VAR_8 = ((void*)0);
 char * VAR_9 = ((void*)0);
 int VAR_10 = 0;
 size_t VAR_11 = 0;
 synctex_status_t VAR_12 = 0;
 if (((void*)0) == VAR_6) {
   return VAR_2;
 }
 VAR_11 = VAR_0;
 VAR_12 = FUNC_0(VAR_6, &VAR_11);
 if (VAR_12<VAR_3) {
  return VAR_12;
 }
 if (VAR_11==0) {
  return VAR_3;
 }
 VAR_8 = VAR_1;
 if (*VAR_8==':' || *VAR_8==',') {
  ++VAR_8;
  --VAR_11;
  if (VAR_11==0) {
   return VAR_4;
  }
 }
 VAR_10 = (int)FUNC_1(VAR_8, &VAR_9, 10);
 if (VAR_9>VAR_8) {
  VAR_1 = VAR_9;
  if (VAR_7) {
   * VAR_7 = VAR_10;
  }
  return VAR_5;
 }
 return VAR_4;
}
