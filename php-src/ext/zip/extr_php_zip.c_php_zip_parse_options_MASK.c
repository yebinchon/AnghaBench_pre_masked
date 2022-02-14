
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*,...) ;
 int * FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(zval *VAR_4, zend_long *VAR_5, char **VAR_6, size_t *VAR_7, char **VAR_8, size_t *VAR_9)
{
 zval *VAR_10;
 if ((VAR_10 = FUNC_5(FUNC_0(VAR_4), "remove_all_path", sizeof("remove_all_path") - 1)) != ((void*)0)) {
  *VAR_5 = FUNC_6(VAR_10);
 }


 if ((VAR_10 = FUNC_5(FUNC_0(VAR_4), "remove_path", sizeof("remove_path") - 1)) != ((void*)0)) {
  if (FUNC_3(VAR_10) != VAR_2) {
   FUNC_4(((void*)0), VAR_1, "remove_path option expected to be a string");
   return -1;
  }

  if (FUNC_1(VAR_10) < 1) {
   FUNC_4(((void*)0), VAR_0, "Empty string given as remove_path option");
   return -1;
  }

  if (FUNC_1(VAR_10) >= VAR_3) {
   FUNC_4(((void*)0), VAR_1, "remove_path string is too long (max: %d, %zd given)",
      VAR_3 - 1, FUNC_1(VAR_10));
   return -1;
  }
  *VAR_7 = FUNC_1(VAR_10);
  *VAR_6 = FUNC_2(VAR_10);
 }

 if ((VAR_10 = FUNC_5(FUNC_0(VAR_4), "add_path", sizeof("add_path") - 1)) != ((void*)0)) {
  if (FUNC_3(VAR_10) != VAR_2) {
   FUNC_4(((void*)0), VAR_1, "add_path option expected to be a string");
   return -1;
  }

  if (FUNC_1(VAR_10) < 1) {
   FUNC_4(((void*)0), VAR_0, "Empty string given as the add_path option");
   return -1;
  }

  if (FUNC_1(VAR_10) >= VAR_3) {
   FUNC_4(((void*)0), VAR_1, "add_path string too long (max: %d, %zd given)",
      VAR_3 - 1, FUNC_1(VAR_10));
   return -1;
  }
  *VAR_9 = FUNC_1(VAR_10);
  *VAR_8 = FUNC_2(VAR_10);
 }
 return 1;
}
