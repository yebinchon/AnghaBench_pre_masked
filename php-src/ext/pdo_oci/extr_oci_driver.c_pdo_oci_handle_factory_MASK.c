
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int vars ;
typedef int ub4 ;
typedef int text ;
struct pdo_data_src_parser {char* member_0; char* member_1; void* optval; scalar_t__ freeme; int member_2; } ;
typedef int sb4 ;
struct TYPE_6__ {int attached; void* last_err; int max_char_width; int err; int * env; void* session; void* svc; void* server; int charset; int prefetch; } ;
typedef TYPE_1__ pdo_oci_db_handle ;
struct TYPE_7__ {int alloc_own_columns; int native_case; int * methods; void* password; int is_persistent; void* username; TYPE_1__* driver_data; int data_source_len; int data_source; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int oratext ;
typedef int dvoid ;


 void* FUNC_0 (void*,int ,void*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int **,int ,int ,int *,int *,int *,int ,int *,int ,int ) ;
 void* FUNC_2 (int *,int **,int ,int ,int *) ;
 int FUNC_3 (int *,int const*) ;
 void* FUNC_4 (int *,int ,int *,int ) ;
 void* FUNC_5 (void*,int ,int *,int ,int ) ;
 void* FUNC_6 (void*,int ,void*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (void*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char*) ;
 int VAR_15 ;
 int * VAR_16 ;
 TYPE_1__* FUNC_11 (int,int,int ) ;
 void* FUNC_12 (void*,int ) ;
 int FUNC_13 (int ,int ,struct pdo_data_src_parser*,int) ;
 scalar_t__ FUNC_14 (void*) ;

__attribute__((used)) static int FUNC_15(pdo_dbh_t *VAR_17, zval *VAR_18)
{
 pdo_oci_db_handle *VAR_19;
 int VAR_20, VAR_21 = 0;
 struct pdo_data_src_parser VAR_22[] = {
  { "charset", ((void*)0), 0 },
  { "dbname", "", 0 },
  { "user", ((void*)0), 0 },
  { "password", ((void*)0), 0 }
 };

 FUNC_13(VAR_17->data_source, VAR_17->data_source_len, VAR_22, 4);

 VAR_19 = FUNC_11(1, sizeof(*VAR_19), VAR_17->is_persistent);
 VAR_17->driver_data = VAR_19;

 VAR_19->prefetch = VAR_14;
 if (VAR_19->env == ((void*)0)) {

  VAR_19->env = VAR_16;
 }


 FUNC_2(VAR_19->env, (dvoid **)&VAR_19->err, VAR_6, 0, ((void*)0));


 FUNC_2(VAR_19->env, (dvoid **)&VAR_19->server, VAR_7, 0, ((void*)0));

 VAR_19->last_err = FUNC_5(VAR_19->server, VAR_19->err, (text*)VAR_22[1].optval,
      (sb4) FUNC_14(VAR_22[1].optval), VAR_5);

 if (VAR_19->last_err) {
  FUNC_8("pdo_oci_handle_factory");
  goto cleanup;
 }

 VAR_19->attached = 1;


 VAR_19->last_err = FUNC_2(VAR_19->env, (dvoid**)&VAR_19->svc, VAR_9, 0, ((void*)0));
 if (VAR_19->last_err) {
  FUNC_8("OCIHandleAlloc: OCI_HTYPE_SVCCTX");
  goto cleanup;
 }

 VAR_19->last_err = FUNC_2(VAR_19->env, (dvoid**)&VAR_19->session, VAR_8, 0, ((void*)0));
 if (VAR_19->last_err) {
  FUNC_8("OCIHandleAlloc: OCI_HTYPE_SESSION");
  goto cleanup;
 }


 VAR_19->last_err = FUNC_0(VAR_19->svc, VAR_9, VAR_19->server, 0, VAR_1, VAR_19->err);
 if (VAR_19->last_err) {
  FUNC_8("OCIAttrSet: OCI_ATTR_SERVER");
  goto cleanup;
 }


 if (!VAR_17->username && VAR_22[2].optval) {
  VAR_17->username = FUNC_12(VAR_22[2].optval, VAR_17->is_persistent);
 }

 if (VAR_17->username) {
  VAR_19->last_err = FUNC_0(VAR_19->session, VAR_8,
       VAR_17->username, (ub4) FUNC_14(VAR_17->username),
    VAR_3, VAR_19->err);
  if (VAR_19->last_err) {
   FUNC_8("OCIAttrSet: OCI_ATTR_USERNAME");
   goto cleanup;
  }
 }


 if (!VAR_17->password && VAR_22[3].optval) {
  VAR_17->password = FUNC_12(VAR_22[3].optval, VAR_17->is_persistent);
 }

 if (VAR_17->password) {
  VAR_19->last_err = FUNC_0(VAR_19->session, VAR_8,
       VAR_17->password, (ub4) FUNC_14(VAR_17->password),
    VAR_0, VAR_19->err);
  if (VAR_19->last_err) {
   FUNC_8("OCIAttrSet: OCI_ATTR_PASSWORD");
   goto cleanup;
  }
 }


 VAR_19->last_err = FUNC_6(VAR_19->svc, VAR_19->err, VAR_19->session, VAR_4, VAR_5);
 if (VAR_19->last_err) {
  FUNC_8("OCISessionBegin");
  goto cleanup;
 }


 VAR_19->last_err = FUNC_0(VAR_19->svc, VAR_9, VAR_19->session, 0, VAR_2, VAR_19->err);
 if (VAR_19->last_err) {
  FUNC_8("OCIAttrSet: OCI_ATTR_SESSION");
  goto cleanup;
 }


  VAR_19->last_err = FUNC_4(VAR_19->env, VAR_19->err, &VAR_19->max_char_width, VAR_10);
  if (VAR_19->last_err) {
   FUNC_8("OCINlsNumericInfoGet: OCI_NLS_CHARSET_MAXBYTESZ");
   goto cleanup;
  }

 VAR_17->methods = &VAR_15;
 VAR_17->alloc_own_columns = 1;
 VAR_17->native_case = VAR_12;

 VAR_21 = 1;

cleanup:
 for (VAR_20 = 0; VAR_20 < sizeof(VAR_22)/sizeof(VAR_22[0]); VAR_20++) {
  if (VAR_22[VAR_20].freeme) {
   FUNC_7(VAR_22[VAR_20].optval);
  }
 }

 if (!VAR_21) {
  FUNC_9(VAR_17);
 }

 return VAR_21;
}
