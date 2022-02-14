
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* errmsg; } ;
struct TYPE_7__ {TYPE_1__ einfo; int * env; scalar_t__ charset; int * err; int * server; scalar_t__ attached; scalar_t__ last_err; int * svc; int * session; } ;
typedef TYPE_2__ pdo_oci_db_handle ;
struct TYPE_8__ {int is_persistent; scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_dbh_t ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(pdo_dbh_t *VAR_6)
{
 pdo_oci_db_handle *VAR_7 = (pdo_oci_db_handle *)VAR_6->driver_data;

 if (VAR_7->svc) {

  FUNC_2(VAR_7->svc, VAR_7->err, 0);
 }

 if (VAR_7->session) {
  FUNC_0(VAR_7->session, VAR_4);
  VAR_7->session = ((void*)0);
 }

 if (VAR_7->svc) {
  FUNC_0(VAR_7->svc, VAR_5);
  VAR_7->svc = ((void*)0);
 }

 if (VAR_7->server && VAR_7->attached) {
  VAR_7->last_err = FUNC_1(VAR_7->server, VAR_7->err, VAR_0);
  if (VAR_7->last_err) {
   FUNC_3("OCIServerDetach");
  }
  VAR_7->attached = 0;
 }

 if (VAR_7->server) {
  FUNC_0(VAR_7->server, VAR_3);
  VAR_7->server = ((void*)0);
 }

 if (VAR_7->err) {
  FUNC_0(VAR_7->err, VAR_2);
  VAR_7->err = ((void*)0);
 }

 if (VAR_7->charset && VAR_7->env) {
  FUNC_0(VAR_7->env, VAR_1);
  VAR_7->env = ((void*)0);
 }

 if (VAR_7->einfo.errmsg) {
  FUNC_4(VAR_7->einfo.errmsg, VAR_6->is_persistent);
  VAR_7->einfo.errmsg = ((void*)0);
 }

 FUNC_4(VAR_7, VAR_6->is_persistent);

 return 0;
}
