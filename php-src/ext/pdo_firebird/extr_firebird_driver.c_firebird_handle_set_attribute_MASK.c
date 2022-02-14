
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_long ;
typedef int zend_bool ;
struct TYPE_5__ {char* last_app_error; int fetch_table_names; int timestamp_format; int time_format; int date_format; } ;
typedef TYPE_1__ pdo_firebird_db_handle ;
struct TYPE_6__ {int auto_commit; int in_txn; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;







 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(pdo_dbh_t *VAR_0, zend_long VAR_1, zval *VAR_2)
{
 pdo_firebird_db_handle *VAR_3 = (pdo_firebird_db_handle *)VAR_0->driver_data;

 switch (VAR_1) {
  case 132:
   {
    zend_bool VAR_4 = FUNC_6(VAR_2)? 1 : 0;


    if (VAR_0->auto_commit ^ VAR_4) {
     if (VAR_0->in_txn) {
      if (VAR_4) {


       VAR_3->last_app_error = "Cannot enable auto-commit while a transaction is already open";
       return 0;
      } else {

       if (!FUNC_3(VAR_0)) {
        break;
       }
       VAR_0->in_txn = 0;
      }
     }
     VAR_0->auto_commit = VAR_4;
    }
   }
   return 1;

  case 131:
   VAR_3->fetch_table_names = FUNC_6(VAR_2)? 1 : 0;
   return 1;

  case 130:
   {
    zend_string *VAR_5 = FUNC_7(VAR_2);
    if (FUNC_0(!VAR_5)) {
     return 0;
    }
    if (VAR_3->date_format) {
     FUNC_2(VAR_3->date_format);
    }
    FUNC_4(&VAR_3->date_format, 0, "%s", FUNC_1(VAR_5));
    FUNC_5(VAR_5, 0);
   }
   return 1;

  case 128:
   {
    zend_string *VAR_6 = FUNC_7(VAR_2);
    if (FUNC_0(!VAR_6)) {
     return 0;
    }
    if (VAR_3->time_format) {
     FUNC_2(VAR_3->time_format);
    }
    FUNC_4(&VAR_3->time_format, 0, "%s", FUNC_1(VAR_6));
    FUNC_5(VAR_6, 0);
   }
   return 1;

  case 129:
   {
    zend_string *VAR_7 = FUNC_7(VAR_2);
    if (FUNC_0(!VAR_7)) {
     return 0;
    }
    if (VAR_3->timestamp_format) {
     FUNC_2(VAR_3->timestamp_format);
    }
    FUNC_4(&VAR_3->timestamp_format, 0, "%s", FUNC_1(VAR_7));
    FUNC_5(VAR_7, 0);
   }
   return 1;
 }
 return 0;
}
