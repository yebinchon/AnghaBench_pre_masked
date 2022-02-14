
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ub4 ;
typedef int tmp_buf ;
typedef char text ;
typedef int sword ;
struct TYPE_8__ {char* error_code; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_10__ {char* errmsg; int errcode; char const* file; int line; } ;
struct TYPE_9__ {TYPE_3__ einfo; } ;
typedef TYPE_2__ pdo_oci_stmt ;
typedef TYPE_3__ pdo_oci_error_info ;
struct TYPE_11__ {TYPE_3__ einfo; int attached; } ;
typedef TYPE_4__ pdo_oci_db_handle ;
typedef char* pdo_error_type ;
struct TYPE_12__ {char* error_code; int is_closed; int methods; int is_persistent; scalar_t__ driver_data; } ;
typedef TYPE_5__ pdo_dbh_t ;
typedef int errbuf ;
typedef int OCIError ;


 int FUNC_0 (int *,int,int *,int*,char*,int,int ) ;


 int VAR_0 ;






 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,char*,char*,char const*,...) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,char*,char*,char*) ;

ub4 FUNC_8(OCIError *VAR_1, pdo_dbh_t *VAR_2, pdo_stmt_t *VAR_3, char *VAR_4, sword VAR_5, int VAR_6, const char *VAR_7, int VAR_8)
{
 text VAR_9[1024] = "<<Unknown>>";
 char VAR_10[2048];
 pdo_oci_db_handle *VAR_11 = (pdo_oci_db_handle *)VAR_2->driver_data;
 pdo_oci_error_info *VAR_12;
 pdo_oci_stmt *VAR_13 = ((void*)0);
 pdo_error_type *VAR_14 = &VAR_2->error_code;

 if (VAR_3) {
  VAR_13 = (pdo_oci_stmt*)VAR_3->driver_data;
  VAR_12 = &VAR_13->einfo;
  VAR_14 = &VAR_3->error_code;
 }
 else {
  VAR_12 = &VAR_11->einfo;
 }

 if (VAR_12->errmsg) {
  FUNC_1(VAR_12->errmsg, VAR_2->is_persistent);
 }

 VAR_12->errmsg = ((void*)0);
 VAR_12->errcode = 0;
 VAR_12->file = VAR_7;
 VAR_12->line = VAR_8;

 if (VAR_6) {
  FUNC_5(*VAR_14, "HY000");
  FUNC_4(VAR_10, sizeof(VAR_10), "%s (%s:%d)", VAR_4, VAR_7, VAR_8);
  VAR_12->errmsg = FUNC_2(VAR_10, VAR_2->is_persistent);
 }
 else {
  switch (VAR_5) {
   case 129:
    FUNC_5(*VAR_14, "00000");
    break;
   case 134:
    FUNC_0(VAR_1, (ub4)1, ((void*)0), &VAR_12->errcode, VAR_9, (ub4)sizeof(VAR_9), VAR_0);
    FUNC_4(VAR_10, sizeof(VAR_10), "%s: %s (%s:%d)", VAR_4, VAR_9, VAR_7, VAR_8);
    VAR_12->errmsg = FUNC_2(VAR_10, VAR_2->is_persistent);
    break;
   case 128:
    FUNC_0(VAR_1, (ub4)1, ((void*)0), &VAR_12->errcode, VAR_9, (ub4)sizeof(VAR_9), VAR_0);
    FUNC_4(VAR_10, sizeof(VAR_10), "%s: OCI_SUCCESS_WITH_INFO: %s (%s:%d)", VAR_4, VAR_9, VAR_7, VAR_8);
    VAR_12->errmsg = FUNC_2(VAR_10, VAR_2->is_persistent);
    break;
   case 132:
    FUNC_4(VAR_10, sizeof(VAR_10), "%s: OCI_NEED_DATA (%s:%d)", VAR_4, VAR_7, VAR_8);
    VAR_12->errmsg = FUNC_2(VAR_10, VAR_2->is_persistent);
    break;
   case 131:
    FUNC_4(VAR_10, sizeof(VAR_10), "%s: OCI_NO_DATA (%s:%d)", VAR_4, VAR_7, VAR_8);
    VAR_12->errmsg = FUNC_2(VAR_10, VAR_2->is_persistent);
    break;
   case 133:
    FUNC_4(VAR_10, sizeof(VAR_10), "%s: OCI_INVALID_HANDLE (%s:%d)", VAR_4, VAR_7, VAR_8);
    VAR_12->errmsg = FUNC_2(VAR_10, VAR_2->is_persistent);
    break;
   case 130:
    FUNC_4(VAR_10, sizeof(VAR_10), "%s: OCI_STILL_EXECUTING (%s:%d)", VAR_4, VAR_7, VAR_8);
    VAR_12->errmsg = FUNC_2(VAR_10, VAR_2->is_persistent);
    break;
   case 135:
    FUNC_4(VAR_10, sizeof(VAR_10), "%s: OCI_CONTINUE (%s:%d)", VAR_4, VAR_7, VAR_8);
    VAR_12->errmsg = FUNC_2(VAR_10, VAR_2->is_persistent);
    break;
  }

  if (VAR_12->errcode) {
   switch (VAR_12->errcode) {
    case 1013:
     FUNC_6();
     break;

    case 12154:
     FUNC_5(*VAR_14, "42S02");
     break;

    case 22:
    case 378:
    case 602:
    case 603:
    case 604:
    case 609:
    case 1012:
    case 1033:
    case 1041:
    case 1043:
    case 1089:
    case 1090:
    case 1092:
    case 3113:
    case 3114:
    case 3122:
    case 3135:
    case 12153:
    case 27146:
    case 28511:

     VAR_2->is_closed = 1;
     VAR_11->attached = 0;
     FUNC_5(*VAR_14, "01002");
     break;

    default:
     FUNC_5(*VAR_14, "HY000");
   }
  }

  if (VAR_3) {



   if (VAR_11->einfo.errmsg) {
    FUNC_1(VAR_11->einfo.errmsg, VAR_2->is_persistent);
   }
   VAR_11->einfo = *VAR_12;
   VAR_11->einfo.errmsg = VAR_12->errmsg ? FUNC_2(VAR_12->errmsg, VAR_2->is_persistent) : ((void*)0);
   FUNC_5(VAR_2->error_code, VAR_3->error_code);
  }
 }


 if (!VAR_2->methods) {
  FUNC_7(FUNC_3(), VAR_12->errcode, "SQLSTATE[%s]: %s", *VAR_14, VAR_12->errmsg);
 }

 return VAR_12->errcode;
}
