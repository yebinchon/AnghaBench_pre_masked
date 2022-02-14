
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct pdo_pgsql_lob_self {int lfd; int conn; int oid; int dbh; } ;
typedef int php_stream ;
struct TYPE_3__ {int server; } ;
typedef TYPE_1__ pdo_pgsql_db_handle ;
struct TYPE_4__ {scalar_t__ driver_data; } ;
typedef int Oid ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 struct pdo_pgsql_lob_self* FUNC_3 (int,int) ;
 int FUNC_4 (struct pdo_pgsql_lob_self*) ;
 int VAR_0 ;
 int * FUNC_5 (int *,struct pdo_pgsql_lob_self*,int ,char*) ;

php_stream *FUNC_6(zval *VAR_1, int VAR_2, Oid VAR_3)
{
 php_stream *VAR_4;
 struct pdo_pgsql_lob_self *VAR_5 = FUNC_3(1, sizeof(*VAR_5));
 pdo_pgsql_db_handle *VAR_6 = (pdo_pgsql_db_handle *)(FUNC_2(VAR_1))->driver_data;

 FUNC_0(&VAR_5->dbh, VAR_1);
 VAR_5->lfd = VAR_2;
 VAR_5->oid = VAR_3;
 VAR_5->conn = VAR_6->server;

 VAR_4 = FUNC_5(&VAR_0, VAR_5, 0, "r+b");

 if (VAR_4) {
  FUNC_1(VAR_1);
  return VAR_4;
 }

 FUNC_4(VAR_5);
 return ((void*)0);
}
