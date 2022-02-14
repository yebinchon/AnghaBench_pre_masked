
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * login; int * link; int err; } ;
typedef TYPE_1__ pdo_dblib_db_handle ;
struct TYPE_6__ {int * driver_data; int is_persistent; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(pdo_dbh_t *VAR_0)
{
 pdo_dblib_db_handle *VAR_1 = (pdo_dblib_db_handle *)VAR_0->driver_data;

 if (VAR_1) {
  FUNC_2(&VAR_1->err);
  if (VAR_1->link) {
   FUNC_0(VAR_1->link);
   VAR_1->link = ((void*)0);
  }
  if (VAR_1->login) {
   FUNC_1(VAR_1->login);
   VAR_1->login = ((void*)0);
  }
  FUNC_3(VAR_1, VAR_0->is_persistent);
  VAR_0->driver_data = ((void*)0);
 }
 return 0;
}
