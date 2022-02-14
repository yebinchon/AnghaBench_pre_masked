
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pdo_pgsql_lob_self {int dbh; int lfd; int conn; } ;
struct TYPE_3__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;


 int FUNC_0 (struct pdo_pgsql_lob_self*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(php_stream *VAR_0, int VAR_1)
{
 struct pdo_pgsql_lob_self *VAR_2 = (struct pdo_pgsql_lob_self*)VAR_0->abstract;

 if (VAR_1) {
  FUNC_1(VAR_2->conn, VAR_2->lfd);
 }
 FUNC_2(&VAR_2->dbh);
 FUNC_0(VAR_2);
 return 0;
}
