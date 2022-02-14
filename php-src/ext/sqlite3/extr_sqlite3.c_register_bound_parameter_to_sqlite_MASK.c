
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
struct php_sqlite3_bound_param {int param_number; int * name; } ;
struct TYPE_3__ {int stmt; int * bound_params; } ;
typedef TYPE_1__ php_sqlite3_stmt ;
typedef int HashTable ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,struct php_sqlite3_bound_param*,int) ;
 int FUNC_7 (int *,int,int *,int ,int ) ;
 int FUNC_8 (int *,int *,struct php_sqlite3_bound_param*,int) ;
 int * FUNC_9 (scalar_t__,int ) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct php_sqlite3_bound_param *VAR_1, php_sqlite3_stmt *VAR_2)
{
 HashTable *VAR_3;
 VAR_3 = VAR_2->bound_params;

 if (!VAR_3) {
  FUNC_0(VAR_3);
  FUNC_7(VAR_3, 13, ((void*)0), VAR_0, 0);
  VAR_2->bound_params = VAR_3;
 }


 if (VAR_1->name) {
  if (FUNC_2(VAR_1->name)[0] != ':' && FUNC_2(VAR_1->name)[0] != '@') {

   zend_string *VAR_4 = FUNC_9(FUNC_1(VAR_1->name) + 1, 0);
   FUNC_2(VAR_4)[0] = ':';
   FUNC_3(FUNC_2(VAR_4) + 1, FUNC_2(VAR_1->name), FUNC_1(VAR_1->name) + 1);
   VAR_1->name = VAR_4;
  } else {
   VAR_1->name = FUNC_10(VAR_1->name);
  }

  VAR_1->param_number = FUNC_4(VAR_2->stmt, FUNC_2(VAR_1->name));
 }

 if (VAR_1->param_number < 1) {
  if (VAR_1->name) {
   FUNC_11(VAR_1->name, 0);
  }
  return 0;
 }

 if (VAR_1->param_number >= 1) {
  FUNC_5(VAR_3, VAR_1->param_number);
 }

 if (VAR_1->name) {
  FUNC_8(VAR_3, VAR_1->name, VAR_1, sizeof(struct php_sqlite3_bound_param));
 } else {
  FUNC_6(VAR_3, VAR_1->param_number, VAR_1, sizeof(struct php_sqlite3_bound_param));
 }

 return 1;
}
