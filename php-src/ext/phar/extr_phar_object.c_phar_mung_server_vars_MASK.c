
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,size_t) ;
 int * FUNC_5 (int ) ;
 size_t FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (char*,char*,size_t) ;
 int VAR_7 ;
 size_t FUNC_11 (char*) ;
 int * FUNC_12 (int,char*,char*,char*) ;
 int * FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int *,char*,int,int *) ;

__attribute__((used)) static void FUNC_15(char *VAR_8, char *VAR_9, size_t VAR_10, char *VAR_11, size_t VAR_12)
{
 HashTable *VAR_13;
 zval *VAR_14;
 char *VAR_15;
 size_t VAR_16 = FUNC_11(VAR_11);
 size_t VAR_17;
 zval VAR_18;


 if (FUNC_9(FUNC_0(VAR_6)[VAR_5]) == VAR_0) {
  return;
 }

 VAR_13 = FUNC_5(FUNC_0(VAR_6)[VAR_5]);


 if (((void*)0) != (VAR_14 = FUNC_13(VAR_13, "PATH_INFO", sizeof("PATH_INFO")-1))) {
  VAR_15 = FUNC_7(VAR_14);
  VAR_17 = FUNC_6(VAR_14);
  if (VAR_17 > (size_t)VAR_10 && !FUNC_10(VAR_15, VAR_9, VAR_10)) {
   FUNC_3(&VAR_18, FUNC_8(VAR_14));
   FUNC_4(VAR_14, VAR_15 + VAR_10, VAR_12);
   FUNC_14(VAR_13, "PHAR_PATH_INFO", sizeof("PHAR_PATH_INFO")-1, &VAR_18);
  }
 }

 if (((void*)0) != (VAR_14 = FUNC_13(VAR_13, "PATH_TRANSLATED", sizeof("PATH_TRANSLATED")-1))) {
  zend_string *VAR_19 = FUNC_12(4096, "phar://%s%s", VAR_8, VAR_9);

  FUNC_3(&VAR_18, FUNC_8(VAR_14));
  FUNC_2(VAR_14, VAR_19);

  FUNC_14(VAR_13, "PHAR_PATH_TRANSLATED", sizeof("PHAR_PATH_TRANSLATED")-1, &VAR_18);
 }

 if (!FUNC_1(VAR_7)) {
  return;
 }

 if (FUNC_1(VAR_7) & VAR_2) {
  if (((void*)0) != (VAR_14 = FUNC_13(VAR_13, "REQUEST_URI", sizeof("REQUEST_URI")-1))) {
   VAR_15 = FUNC_7(VAR_14);
   VAR_17 = FUNC_6(VAR_14);
   if (VAR_17 > VAR_16 && !FUNC_10(VAR_15, VAR_11, VAR_16)) {
    FUNC_3(&VAR_18, FUNC_8(VAR_14));
    FUNC_4(VAR_14, VAR_15 + VAR_16, VAR_17 - VAR_16);
    FUNC_14(VAR_13, "PHAR_REQUEST_URI", sizeof("PHAR_REQUEST_URI")-1, &VAR_18);
   }
  }
 }

 if (FUNC_1(VAR_7) & VAR_1) {
  if (((void*)0) != (VAR_14 = FUNC_13(VAR_13, "PHP_SELF", sizeof("PHP_SELF")-1))) {
   VAR_15 = FUNC_7(VAR_14);
   VAR_17 = FUNC_6(VAR_14);

   if (VAR_17 > VAR_16 && !FUNC_10(VAR_15, VAR_11, VAR_16)) {
    FUNC_3(&VAR_18, FUNC_8(VAR_14));
    FUNC_4(VAR_14, VAR_15 + VAR_16, VAR_17 - VAR_16);
    FUNC_14(VAR_13, "PHAR_PHP_SELF", sizeof("PHAR_PHP_SELF")-1, &VAR_18);
   }
  }
 }

 if (FUNC_1(VAR_7) & VAR_4) {
  if (((void*)0) != (VAR_14 = FUNC_13(VAR_13, "SCRIPT_NAME", sizeof("SCRIPT_NAME")-1))) {
   FUNC_3(&VAR_18, FUNC_8(VAR_14));
   FUNC_4(VAR_14, VAR_9, VAR_10);
   FUNC_14(VAR_13, "PHAR_SCRIPT_NAME", sizeof("PHAR_SCRIPT_NAME")-1, &VAR_18);
  }
 }

 if (FUNC_1(VAR_7) & VAR_3) {
  if (((void*)0) != (VAR_14 = FUNC_13(VAR_13, "SCRIPT_FILENAME", sizeof("SCRIPT_FILENAME")-1))) {
   zend_string *VAR_20 = FUNC_12(4096, "phar://%s%s", VAR_8, VAR_9);

   FUNC_3(&VAR_18, FUNC_8(VAR_14));
   FUNC_2(VAR_14, VAR_20);

   FUNC_14(VAR_13, "PHAR_SCRIPT_FILENAME", sizeof("PHAR_SCRIPT_FILENAME")-1, &VAR_18);
  }
 }
}
