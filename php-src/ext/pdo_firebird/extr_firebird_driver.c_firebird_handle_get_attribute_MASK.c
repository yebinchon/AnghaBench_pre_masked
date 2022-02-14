
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_4__ {int fetch_table_names; int db; } ;
typedef TYPE_1__ pdo_firebird_db_handle ;
struct TYPE_5__ {int auto_commit; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int (* info_func_t ) (char*) ;
typedef int HMODULE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;






 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_1 ;
 int FUNC_7 (int *,int ,void*) ;

__attribute__((used)) static int FUNC_8(pdo_dbh_t *VAR_2, zend_long VAR_3, zval *VAR_4)
{
 pdo_firebird_db_handle *VAR_5 = (pdo_firebird_db_handle *)VAR_2->driver_data;

 switch (VAR_3) {
  char VAR_6[512];

  case 133:
   FUNC_3(VAR_4,VAR_2->auto_commit);
   return 1;

  case 131:
   FUNC_2(VAR_4, !FUNC_7(&VAR_5->db, VAR_1, ((void*)0)));
   return 1;

  case 132: {

   info_func_t VAR_7 = ((void*)0);

   VAR_7 = (info_func_t)FUNC_6(VAR_0, "isc_get_client_version");
   if (VAR_7) {
    VAR_7(VAR_6);
    FUNC_5(VAR_4, VAR_6);
   }



   }
   return 1;

  case 128:
  case 129:
   *VAR_6 = 0;

   if (!FUNC_7(&VAR_5->db, VAR_1, (void*)VAR_6)) {
    FUNC_5(VAR_4, VAR_6);
    return 1;
   }

  case 130:
   FUNC_2(VAR_4, VAR_5->fetch_table_names);
   return 1;
 }
 return 0;
}
