
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_class_entry ;
struct TYPE_5__ {char* error_code; } ;
typedef TYPE_1__ pdo_stmt_t ;
typedef char* pdo_error_type ;
struct TYPE_6__ {char* error_code; scalar_t__ error_mode; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,char*,char*) ;
 int * FUNC_7 () ;
 int * FUNC_8 (int) ;
 int FUNC_9 (char**,int ,char*,char*,char const*,...) ;
 int FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,char*,int,int *) ;
 int FUNC_13 (int *,int *,char*,int,char*) ;
 int FUNC_14 (int *) ;

void FUNC_15(pdo_dbh_t *VAR_3, pdo_stmt_t *VAR_4, const char *VAR_5, const char *VAR_6)
{
 pdo_error_type *VAR_7 = &VAR_3->error_code;
 char *VAR_8 = ((void*)0);
 const char *VAR_9;

 if (VAR_3 && VAR_3->error_mode == VAR_2) {






 }

 if (VAR_4) {
  VAR_7 = &VAR_4->error_code;
 }

 FUNC_10(*VAR_7, VAR_5, 6);


 VAR_9 = FUNC_5(*VAR_7);
 if (!VAR_9) {
  VAR_9 = "<<Unknown error>>";
 }

 if (VAR_6) {
  FUNC_9(&VAR_8, 0, "SQLSTATE[%s]: %s: %s", *VAR_7, VAR_9, VAR_6);
 } else {
  FUNC_9(&VAR_8, 0, "SQLSTATE[%s]: %s", *VAR_7, VAR_9);
 }

 if (VAR_3 && VAR_3->error_mode != VAR_1) {
  FUNC_6(((void*)0), VAR_0, "%s", VAR_8);
 } else {
  zval VAR_10, VAR_11;
  zend_class_entry *VAR_12 = FUNC_8(1), *VAR_13 = FUNC_7();

  FUNC_4(&VAR_10, VAR_13);

  FUNC_13(VAR_12, &VAR_10, "message", sizeof("message")-1, VAR_8);
  FUNC_13(VAR_12, &VAR_10, "code", sizeof("code")-1, *VAR_7);

  FUNC_2(&VAR_11);

  FUNC_1(&VAR_11, *VAR_7);
  FUNC_0(&VAR_11, 0);
  FUNC_12(VAR_13, &VAR_10, "errorInfo", sizeof("errorInfo")-1, &VAR_11);
  FUNC_14(&VAR_11);

  FUNC_11(&VAR_10);
 }

 if (VAR_8) {
  FUNC_3(VAR_8);
 }
}
