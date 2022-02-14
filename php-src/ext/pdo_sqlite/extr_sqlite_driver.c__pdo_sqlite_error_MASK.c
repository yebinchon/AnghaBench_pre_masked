
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int error_code; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_8__ {int errcode; char const* file; int line; scalar_t__ errmsg; } ;
typedef TYPE_2__ pdo_sqlite_error_info ;
struct TYPE_9__ {int db; TYPE_2__ einfo; } ;
typedef TYPE_3__ pdo_sqlite_db_handle ;
typedef int pdo_error_type ;
struct TYPE_10__ {int methods; int is_persistent; int error_code; scalar_t__ driver_data; } ;
typedef TYPE_4__ pdo_dbh_t ;


 char* VAR_0 ;





 int VAR_1 ;

 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int,char*,int ,int,scalar_t__) ;

int FUNC_7(pdo_dbh_t *VAR_2, pdo_stmt_t *VAR_3, const char *VAR_4, int VAR_5)
{
 pdo_sqlite_db_handle *VAR_6 = (pdo_sqlite_db_handle *)VAR_2->driver_data;
 pdo_error_type *VAR_7 = VAR_3 ? &VAR_3->error_code : &VAR_2->error_code;
 pdo_sqlite_error_info *VAR_8 = &VAR_6->einfo;

 VAR_8->errcode = FUNC_3(VAR_6->db);
 VAR_8->file = VAR_4;
 VAR_8->line = VAR_5;

 if (VAR_8->errcode != VAR_1) {
  if (VAR_8->errmsg) {
   FUNC_0(VAR_8->errmsg, VAR_2->is_persistent);
  }
  VAR_8->errmsg = FUNC_1((char*)FUNC_4(VAR_6->db), VAR_2->is_persistent);
 } else {
  FUNC_5(*VAR_7, VAR_0, sizeof(*VAR_7));
  return 0;
 }
 switch (VAR_8->errcode) {
  case 129:
   FUNC_5(*VAR_7, "42S02", sizeof(*VAR_7));
   break;

  case 131:
   FUNC_5(*VAR_7, "01002", sizeof(*VAR_7));
   break;

  case 130:
   FUNC_5(*VAR_7, "HYC00", sizeof(*VAR_7));
   break;

  case 128:
   FUNC_5(*VAR_7, "22001", sizeof(*VAR_7));
   break;

  case 133:
   FUNC_5(*VAR_7, "23000", sizeof(*VAR_7));
   break;

  case 132:
  default:
   FUNC_5(*VAR_7, "HY000", sizeof(*VAR_7));
   break;
 }

 if (!VAR_2->methods) {
  FUNC_6(FUNC_2(), VAR_8->errcode, "SQLSTATE[%s] [%d] %s",
    *VAR_7, VAR_8->errcode, VAR_8->errmsg);
 }

 return VAR_8->errcode;
}
