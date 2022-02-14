
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_4__ {int assume_national_character_set_strings; void* datetime_convert; int skip_empty_rowsets; void* stringify_uniqueidentifier; } ;
typedef TYPE_1__ pdo_dblib_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(pdo_dbh_t *VAR_2, zend_long VAR_3, zval *VAR_4)
{
 pdo_dblib_db_handle *VAR_5 = (pdo_dblib_db_handle *)VAR_2->driver_data;

 switch(VAR_3) {
  case 133:
   VAR_5->assume_national_character_set_strings = FUNC_1(VAR_4) == VAR_0 ? 1 : 0;
   return 1;
  case 132:
  case 130:
   return VAR_1 == FUNC_0(FUNC_1(VAR_4)) ? 1 : 0;
  case 128:
   VAR_5->stringify_uniqueidentifier = FUNC_1(VAR_4);
   return 1;
  case 129:
   VAR_5->skip_empty_rowsets = FUNC_2(VAR_4);
   return 1;
  case 131:
   VAR_5->datetime_convert = FUNC_1(VAR_4);
   return 1;
  default:
   return 0;
 }
}
