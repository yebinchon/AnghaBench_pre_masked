
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_bool ;
typedef int php_converter_object ;
typedef scalar_t__ UErrorCode ;
typedef int UConverter ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *,scalar_t__*) ;
 int * FUNC_7 (char const*,scalar_t__*) ;

__attribute__((used)) static zend_bool FUNC_8(php_converter_object *VAR_3,
                                            UConverter **VAR_4,
                                            const char *VAR_5, size_t VAR_6
                                           ) {
 UErrorCode VAR_7 = VAR_2;
 UConverter *VAR_8 = FUNC_7(VAR_5, &VAR_7);

 if (VAR_7 == VAR_1) {
  UErrorCode VAR_9 = VAR_2;
  const char *VAR_10 = FUNC_6(VAR_8, &VAR_9);
  if (FUNC_1(VAR_9)) {

   VAR_10 = "(unknown)";
  }
  FUNC_3(((void*)0), VAR_0, "Ambiguous encoding specified, using %s", VAR_10);
 } else if (FUNC_1(VAR_7)) {
  if (VAR_3) {
   FUNC_0(VAR_3, "ucnv_open", VAR_7);
  } else {
   FUNC_3(((void*)0), VAR_0, "Error setting encoding: %d - %s", (int)VAR_7, FUNC_4(VAR_7));
  }
  return 0;
 }

 if (VAR_3 && !FUNC_2(VAR_3, VAR_8)) {
  return 0;
 }

 if (*VAR_4) {
  FUNC_5(*VAR_4);
 }
 *VAR_4 = VAR_8;
 return 1;
}
