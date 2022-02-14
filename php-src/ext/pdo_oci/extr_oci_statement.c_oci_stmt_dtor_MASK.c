
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int column_count; int * driver_data; TYPE_1__* dbh; int * bound_params; int * bound_columns; } ;
typedef TYPE_4__ pdo_stmt_t ;
struct TYPE_10__ {int * errmsg; } ;
struct TYPE_13__ {int dtype; struct TYPE_13__* cols; struct TYPE_13__* data; TYPE_3__* H; TYPE_2__ einfo; int * err; int * stmt; } ;
typedef TYPE_5__ pdo_oci_stmt ;
struct TYPE_11__ {int err; int svc; int env; } ;
struct TYPE_9__ {int is_persistent; } ;
typedef int OCILobLocator ;
typedef int HashTable ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,int *) ;


 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(pdo_stmt_t *VAR_5)
{
 pdo_oci_stmt *VAR_6 = (pdo_oci_stmt*)VAR_5->driver_data;
 HashTable *VAR_7 = VAR_5->bound_columns;
 HashTable *VAR_8 = VAR_5->bound_params;

 int VAR_9;

 if (VAR_6->stmt) {


  FUNC_3(VAR_6->stmt, VAR_6->err, 0, VAR_2, VAR_0);


  FUNC_2(VAR_6->stmt, VAR_4);
  VAR_6->stmt = ((void*)0);
 }
 if (VAR_6->err) {
  FUNC_2(VAR_6->err, VAR_3);
  VAR_6->err = ((void*)0);
 }


 if (VAR_7) {
  FUNC_7(VAR_7);
  FUNC_0(VAR_5->bound_columns);
  VAR_5->bound_columns = ((void*)0);
 }

 if (VAR_8) {
  FUNC_7(VAR_8);
  FUNC_0(VAR_5->bound_params);
  VAR_5->bound_params = ((void*)0);
 }

 if (VAR_6->einfo.errmsg) {
  FUNC_6(VAR_6->einfo.errmsg, VAR_5->dbh->is_persistent);
  VAR_6->einfo.errmsg = ((void*)0);
 }

 if (VAR_6->cols) {
  for (VAR_9 = 0; VAR_9 < VAR_5->column_count; VAR_9++) {
   if (VAR_6->cols[VAR_9].data) {
    switch (VAR_6->cols[VAR_9].dtype) {
     case 129:
     case 128:
      FUNC_4(VAR_6->H->env, VAR_6->H->svc, VAR_6->H->err,
       (OCILobLocator *) VAR_6->cols[VAR_9].data);
      FUNC_1(VAR_6->cols[VAR_9].data, VAR_1);
      break;
     default:
      FUNC_5(VAR_6->cols[VAR_9].data);
    }
   }
  }
  FUNC_5(VAR_6->cols);
  VAR_6->cols = ((void*)0);
 }
 FUNC_5(VAR_6);

 VAR_5->driver_data = ((void*)0);

 return 1;
}
