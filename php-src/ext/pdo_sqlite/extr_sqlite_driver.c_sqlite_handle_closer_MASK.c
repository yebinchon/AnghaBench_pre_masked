
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* errmsg; } ;
typedef TYPE_1__ pdo_sqlite_error_info ;
struct TYPE_8__ {int * db; TYPE_1__ einfo; } ;
typedef TYPE_2__ pdo_sqlite_db_handle ;
struct TYPE_9__ {int * driver_data; int is_persistent; } ;
typedef TYPE_3__ pdo_dbh_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(pdo_dbh_t *VAR_0)
{
 pdo_sqlite_db_handle *VAR_1 = (pdo_sqlite_db_handle *)VAR_0->driver_data;

 if (VAR_1) {
  pdo_sqlite_error_info *VAR_2 = &VAR_1->einfo;

  FUNC_0(VAR_1);
  if (VAR_1->db) {



   FUNC_2(VAR_1->db);

   VAR_1->db = ((void*)0);
  }
  if (VAR_2->errmsg) {
   FUNC_1(VAR_2->errmsg, VAR_0->is_persistent);
   VAR_2->errmsg = ((void*)0);
  }
  FUNC_1(VAR_1, VAR_0->is_persistent);
  VAR_0->driver_data = ((void*)0);
 }
 return 0;
}
