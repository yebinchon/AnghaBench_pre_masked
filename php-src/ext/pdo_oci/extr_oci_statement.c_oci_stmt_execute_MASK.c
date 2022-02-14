
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ub4 ;
struct TYPE_10__ {int column_count; long row_count; scalar_t__ executed; TYPE_1__* dbh; scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_stmt_t ;
struct TYPE_11__ {scalar_t__ stmt_type; scalar_t__ exec_type; int err; int stmt; TYPE_6__* cols; int have_blobs; TYPE_2__* H; } ;
typedef TYPE_4__ pdo_oci_stmt ;
typedef int pdo_oci_column ;
typedef scalar_t__ b4 ;
struct TYPE_12__ {int dtype; struct TYPE_12__* data; } ;
struct TYPE_9__ {int svc; } ;
struct TYPE_8__ {int in_txn; scalar_t__ auto_commit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;


 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 TYPE_6__* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_5(pdo_stmt_t *VAR_11)
{
 pdo_oci_stmt *VAR_12 = (pdo_oci_stmt*)VAR_11->driver_data;
 ub4 VAR_13;
 b4 VAR_14;

 if (!VAR_12->stmt_type) {
  FUNC_2(VAR_0, "OCI_ATTR_STMT_TYPE",
    (VAR_12->stmt, VAR_8, &VAR_12->stmt_type, 0, VAR_4, VAR_12->err));
 }

 if (VAR_11->executed) {

  FUNC_0(VAR_12->stmt, VAR_12->err, 0, VAR_7, VAR_6);
 }






 if (VAR_11->dbh->auto_commit && !VAR_11->dbh->in_txn) {
  VAR_14 = VAR_5;
 } else {
  VAR_14 = VAR_6;
 }

 FUNC_1(VAR_1, (VAR_12->H->svc, VAR_12->stmt, VAR_12->err,
    (VAR_12->stmt_type == VAR_10 && !VAR_12->have_blobs) ? 0 : 1, 0, ((void)0), ((void)0),
    VAR_14));

 if (!VAR_11->executed) {
  ub4 VAR_15;



  FUNC_2(VAR_0, "ATTR_PARAM_COUNT",
    (VAR_12->stmt, VAR_8, &VAR_15, 0, VAR_2, VAR_12->err));

  VAR_11->column_count = (int)VAR_15;

  if (VAR_12->cols) {
   int VAR_16;
   for (VAR_16 = 0; VAR_16 < VAR_11->column_count; VAR_16++) {
    if (VAR_12->cols[VAR_16].data) {
     switch (VAR_12->cols[VAR_16].dtype) {
      case 129:
      case 128:

       break;
      default:
       FUNC_4(VAR_12->cols[VAR_16].data);
     }
    }
   }
   FUNC_4(VAR_12->cols);
  }

  VAR_12->cols = FUNC_3(VAR_15, sizeof(pdo_oci_column));
 }

 FUNC_2(VAR_0, "ATTR_ROW_COUNT",
   (VAR_12->stmt, VAR_8, &VAR_13, 0, VAR_3, VAR_12->err));
 VAR_11->row_count = (long)VAR_13;

 return 1;
}
