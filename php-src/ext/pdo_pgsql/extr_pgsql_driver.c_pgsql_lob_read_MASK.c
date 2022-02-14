
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pdo_pgsql_lob_self {int lfd; int conn; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;


 int FUNC_0 (int ,int ,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(php_stream *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct pdo_pgsql_lob_self *VAR_3 = (struct pdo_pgsql_lob_self*)VAR_0->abstract;
 return FUNC_0(VAR_3->conn, VAR_3->lfd, VAR_1, VAR_2);
}
