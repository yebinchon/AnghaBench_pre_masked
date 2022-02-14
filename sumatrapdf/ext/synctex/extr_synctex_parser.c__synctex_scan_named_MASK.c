
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ synctex_status_t ;
typedef int * synctex_scanner_t ;
typedef scalar_t__ (* synctex_decoder_t ) (int *,void*) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,void*) ;

synctex_status_t FUNC_3(synctex_scanner_t VAR_3,const char * VAR_4,void * VAR_5,synctex_decoder_t VAR_6) {
 synctex_status_t VAR_7 = 0;
 if (((void*)0) == VAR_3 || ((void*)0) == VAR_4 || ((void*)0) == VAR_5 || ((void*)0) == VAR_6) {
  return VAR_0;
 }
not_found:
 VAR_7 = FUNC_0(VAR_3,VAR_4);
 if (VAR_7<VAR_1) {
  return VAR_7;
 } else if (VAR_7 == VAR_1) {
  VAR_7 = FUNC_1(VAR_3);
  if (VAR_7<VAR_2) {
   return VAR_7;
  }
  goto not_found;
 }

 return (*VAR_6)(VAR_3,VAR_5);
}
