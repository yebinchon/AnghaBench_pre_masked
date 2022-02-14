
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ z_off_t ;
typedef scalar_t__ synctex_status_t ;
typedef int * synctex_scanner_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int *,size_t*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,char const*,size_t) ;

synctex_status_t FUNC_6(synctex_scanner_t VAR_10, const char * VAR_11) {
 size_t VAR_12 = 0;
 size_t VAR_13 = 0;
 size_t VAR_14 = 0;
 synctex_status_t VAR_15 = 0;
 if (((void*)0) == VAR_10 || ((void*)0) == VAR_11) {
  return VAR_5;
 }
 VAR_13 = FUNC_4(VAR_11);
 if (0 == VAR_13) {
  return VAR_5;
 }

 VAR_14 = VAR_13;
 VAR_15 = FUNC_0(VAR_10,&VAR_14);
 if (VAR_15<VAR_6) {
  return VAR_15;
 }

 if (VAR_14>=VAR_13) {

  if (FUNC_5((char *)VAR_1,VAR_11,VAR_13)) {
   return VAR_8;
  }
return_OK:

  VAR_1 += VAR_13;
  return VAR_9;
 } else if (FUNC_5((char *)VAR_1,VAR_11,VAR_14)) {

   return VAR_8;
 } else if (VAR_3) {


  z_off_t VAR_16 = 0L;

  VAR_11 += VAR_14;

  VAR_13 -= VAR_14;
  VAR_12 += VAR_14;
  VAR_1 += VAR_14;
  if (0 == VAR_13) {

   return VAR_12;
  }






  VAR_16 = FUNC_3(VAR_3);

  VAR_14 = VAR_1 - VAR_4;




  VAR_16 -= VAR_14;
more_characters:




  VAR_14 = VAR_13;
  VAR_15 = FUNC_0(VAR_10,&VAR_14);
  if (VAR_15<VAR_6) {
   return VAR_15;
  }
  if (VAR_14==0) {

return_NOT_OK:
   if (VAR_16 != FUNC_2(VAR_3,VAR_16,VAR_0)) {

    FUNC_1("can't seek file");
    return VAR_7;
   }


   VAR_1 = VAR_2;
   return VAR_8;
  }
  if (VAR_14<VAR_13) {

   if (FUNC_5((char *)VAR_1,VAR_11,VAR_14)) {

    goto return_NOT_OK;
   }

   VAR_11 += VAR_14;

   VAR_13 -= VAR_14;
   VAR_12 += VAR_14;
   VAR_1 += VAR_14;
   if (0 == VAR_13) {

    return VAR_9;
   }
   goto more_characters;
  }

  if (FUNC_5((char *)VAR_1,VAR_11,VAR_13)) {

   goto return_NOT_OK;
  }
  goto return_OK;
 } else {

  return VAR_6;
 }
}
