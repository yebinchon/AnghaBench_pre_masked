
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object ;
struct oci_lob_self {struct oci_lob_self* E; int dbh; int lob; int err; int svc; TYPE_2__* stmt; } ;
struct TYPE_4__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;
struct TYPE_5__ {int std; } ;
typedef TYPE_2__ pdo_stmt_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct oci_lob_self*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(php_stream *VAR_0, int VAR_1)
{
 struct oci_lob_self *VAR_2 = (struct oci_lob_self *)VAR_0->abstract;
 pdo_stmt_t *VAR_3 = VAR_2->stmt;

 if (VAR_1) {
  zend_object *VAR_4 = &VAR_3->std;

  FUNC_1(VAR_2->E->svc, VAR_2->E->err, VAR_2->lob);
  FUNC_3(&VAR_2->dbh);
  FUNC_0(VAR_4);
  FUNC_2(VAR_2->E);
  FUNC_2(VAR_2);
 }


 return 0;
}
