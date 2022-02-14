
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ last_err; int err; int svc; } ;
typedef TYPE_1__ pdo_oci_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(pdo_dbh_t *VAR_0)
{
 pdo_oci_db_handle *VAR_1 = (pdo_oci_db_handle *)VAR_0->driver_data;

 VAR_1->last_err = FUNC_0(VAR_1->svc, VAR_1->err, 0);

 if (VAR_1->last_err) {
  VAR_1->last_err = FUNC_1("OCITransCommit");
  return 0;
 }
 return 1;
}
