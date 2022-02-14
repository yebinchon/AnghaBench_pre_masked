
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_long ;
struct TYPE_5__ {scalar_t__ column_count; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_6__ {TYPE_3__* fields; int result; int stmt; } ;
typedef TYPE_2__ pdo_mysql_stmt ;
struct TYPE_7__ {char* def; int flags; int type; char* table; } ;
typedef TYPE_3__ MYSQL_FIELD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;







 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *,char*,int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(pdo_stmt_t *VAR_6, zend_long VAR_7, zval *VAR_8)
{
 pdo_mysql_stmt *VAR_9 = (pdo_mysql_stmt*)VAR_6->driver_data;
 const MYSQL_FIELD *VAR_10;
 zval VAR_11;
 char *VAR_12;

 FUNC_3("pdo_mysql_stmt_col_meta");
 FUNC_4("stmt=%p", VAR_9->stmt);
 if (!VAR_9->result) {
  FUNC_5(VAR_0);
 }
 if (VAR_7 >= VAR_6->column_count) {

  FUNC_5(VAR_0);
 }

 FUNC_10(VAR_8);
 FUNC_10(&VAR_11);

 VAR_10 = VAR_9->fields + VAR_7;

 if (VAR_10->def) {
  FUNC_7(VAR_8, "mysql:def", VAR_10->def);
 }
 if (FUNC_1(VAR_10->flags)) {
  FUNC_9(&VAR_11, "not_null");
 }
 if (FUNC_2(VAR_10->flags)) {
  FUNC_9(&VAR_11, "primary_key");
 }
 if (VAR_10->flags & VAR_1) {
  FUNC_9(&VAR_11, "multiple_key");
 }
 if (VAR_10->flags & VAR_5) {
  FUNC_9(&VAR_11, "unique_key");
 }
 if (FUNC_0(VAR_10->flags)) {
  FUNC_9(&VAR_11, "blob");
 }
 VAR_12 = FUNC_11(VAR_10->type);
 if (VAR_12) {
  FUNC_7(VAR_8, "native_type", VAR_12);
 }
 FUNC_8(VAR_8, "flags", &VAR_11);
 FUNC_7(VAR_8, "table", (char *) (VAR_10->table?VAR_10->table : ""));

 FUNC_5(VAR_4);
}
