
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_4__ {int datetime_convert; int skip_empty_rowsets; int link; int stringify_uniqueidentifier; int assume_national_character_set_strings; } ;
typedef TYPE_1__ pdo_dblib_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(pdo_dbh_t *VAR_2, zend_long VAR_3, zval *VAR_4)
{
 pdo_dblib_db_handle *VAR_5 = (pdo_dblib_db_handle *)VAR_2->driver_data;

 switch (VAR_3) {
  case 134:
   FUNC_1(VAR_4, VAR_5->assume_national_character_set_strings ? VAR_1 : VAR_0);
   break;

  case 133:

   FUNC_3(VAR_4);
   break;

  case 130:
   FUNC_0(VAR_4, VAR_5->stringify_uniqueidentifier);
   break;

  case 128:
   FUNC_2(VAR_4, FUNC_6());
   break;

  case 129:
   FUNC_4(VAR_4, FUNC_5(VAR_5->link));
   break;

  case 131:
   FUNC_0(VAR_4, VAR_5->skip_empty_rowsets);
   break;

  case 132:
   FUNC_0(VAR_4, VAR_5->datetime_convert);
   break;

  default:
   return 0;
 }

 return 1;
}
