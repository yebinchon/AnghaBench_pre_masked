
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct oci_lob_self {int offset; int dbh; TYPE_4__* S; TYPE_2__* E; TYPE_3__* stmt; int * lob; } ;
typedef int php_stream ;
struct TYPE_8__ {int std; scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_stmt_t ;
struct TYPE_9__ {int err; TYPE_1__* H; } ;
typedef TYPE_4__ pdo_oci_stmt ;
typedef int oci_lob_env ;
struct TYPE_7__ {int err; int svc; } ;
struct TYPE_6__ {int svc; } ;
typedef int OCILobLocator ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (struct oci_lob_self*) ;
 int VAR_0 ;
 int * FUNC_5 (int *,struct oci_lob_self*,int ,char*) ;

__attribute__((used)) static php_stream *FUNC_6(zval *VAR_1, pdo_stmt_t *VAR_2, OCILobLocator *VAR_3)
{
 php_stream *VAR_4;
 struct oci_lob_self *VAR_5 = FUNC_3(1, sizeof(*VAR_5));

 FUNC_1(&VAR_5->dbh, VAR_1);
 VAR_5->lob = VAR_3;
 VAR_5->offset = 1;
 VAR_5->stmt = VAR_2;
 VAR_5->S = (pdo_oci_stmt*)VAR_2->driver_data;
 VAR_5->E = FUNC_3(1, sizeof(oci_lob_env));
 VAR_5->E->svc = VAR_5->S->H->svc;
 VAR_5->E->err = VAR_5->S->err;

 VAR_4 = FUNC_5(&VAR_0, VAR_5, 0, "r+b");

 if (VAR_4) {
  zend_object *VAR_6;
  VAR_6 = &VAR_2->std;
  FUNC_2(VAR_5->dbh);
  FUNC_0(VAR_6);
  return VAR_4;
 }

 FUNC_4(VAR_5);
 return ((void*)0);
}
