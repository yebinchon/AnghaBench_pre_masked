
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_uchar ;
typedef int zend_long ;
typedef int int32_t ;
typedef char UChar ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (char*,char**) ;
 int FUNC_1 (char*,char**,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (double) ;

zend_uchar FUNC_4( UChar *VAR_5, int32_t VAR_6, zend_long *VAR_7, double *VAR_8, int VAR_9 )
{
 zend_long VAR_10;
 double VAR_11;
 UChar *VAR_12, *VAR_13;
 int VAR_14=10;

 if (!VAR_6) {
  return 0;
 }


 if (VAR_6>=2 && VAR_5[0]=='0' && (VAR_5[1]=='x' || VAR_5[1]=='X')) {
  VAR_14=16;
 }

 VAR_4=0;
 VAR_10 = FUNC_1(VAR_5, &VAR_12, VAR_14);
 if (VAR_4 != VAR_0) {
  if (VAR_12 == VAR_5+VAR_6) {
   if (VAR_7) {
    *VAR_7 = VAR_10;
   }
   return VAR_3;
  } else if (VAR_12 == VAR_5 && *VAR_12 != '\0' && *VAR_5 != '.' && *VAR_5 != '-') {
   return 0;
  }
 } else {
  VAR_12 = ((void*)0);
 }

 if (VAR_14 == 16) {

  return 0;
 }

 VAR_11 = FUNC_0(VAR_5, &VAR_13);
 if (VAR_11 == 0 && VAR_13 == VAR_5) {
  VAR_13 = ((void*)0);
 } else {
  if (VAR_13 == VAR_5+VAR_6) {
   if (!FUNC_3(VAR_11)) {

    return 0;
   }

   if (VAR_8) {
    *VAR_8 = VAR_11;
   }
   return VAR_2;
  }
 }

 if (!VAR_9) {
  return 0;
 }
 if (VAR_9 == -1) {
  FUNC_2(VAR_1, "A non well formed numeric value encountered");
 }

 if (VAR_9) {
  if (VAR_13 > VAR_12 && VAR_8) {
   *VAR_8 = VAR_11;
   return VAR_2;
  } else if (VAR_12 && VAR_7) {
   *VAR_7 = VAR_10;
   return VAR_3;
  }
 }
 return 0;
}
