
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int database_object_handle; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_9__ {int err; TYPE_1__* H; TYPE_4__* cols; } ;
typedef TYPE_3__ pdo_oci_stmt ;
struct TYPE_10__ {int indicator; scalar_t__ dtype; char* data; scalar_t__ fetched_len; } ;
typedef TYPE_4__ pdo_oci_column ;
struct TYPE_7__ {int svc; } ;
typedef int OCILobLocator ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,int *) ;
 int FUNC_2 (int *,int ,char*,int) ;

__attribute__((used)) static int FUNC_3(pdo_stmt_t *VAR_4, int VAR_5, char **VAR_6, size_t *VAR_7, int *VAR_8)
{
 pdo_oci_stmt *VAR_9 = (pdo_oci_stmt*)VAR_4->driver_data;
 pdo_oci_column *VAR_10 = &VAR_9->cols[VAR_5];


 if (VAR_10->indicator == -1) {

  *VAR_6 = ((void*)0);
  *VAR_7 = 0;
  return 1;
 } else if (VAR_10->indicator == 0) {


  if (VAR_10->dtype == VAR_2 || VAR_10->dtype == VAR_3) {
   if (VAR_10->data) {
    *VAR_6 = (char*)FUNC_1(&VAR_4->database_object_handle, VAR_4, (OCILobLocator*)VAR_10->data);
    FUNC_0(VAR_9->H->svc, VAR_9->err, (OCILobLocator*)VAR_10->data, VAR_1);
   }
   *VAR_7 = (size_t) 0;
   return *VAR_6 ? 1 : 0;
  }

  *VAR_6 = VAR_10->data;
  *VAR_7 = (size_t) VAR_10->fetched_len;
  return 1;
 } else {

  FUNC_2(((void*)0), VAR_0, "column %d data was too large for buffer and was truncated to fit it", VAR_5);

  *VAR_6 = VAR_10->data;
  *VAR_7 = (size_t) VAR_10->fetched_len;
  return 1;
 }
}
