
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int server; } ;
typedef TYPE_1__ pdo_mysql_db_handle ;
struct TYPE_7__ {struct TYPE_7__* auto_commit; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_2__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_4(pdo_dbh_t *VAR_0)
{
 FUNC_0("mysql_handle_autocommit");
 FUNC_1("dbh=%p", VAR_0);
 FUNC_1("dbh->autocommit=%d", VAR_0->auto_commit);
 FUNC_2(0 <= FUNC_3(((pdo_mysql_db_handle *)VAR_0->driver_data)->server, VAR_0->auto_commit));
}
