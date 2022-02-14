
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_long ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_6__ {int stmt; } ;
typedef TYPE_2__ pdo_sqlite_stmt ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (int ,scalar_t__) ;
 char* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(pdo_stmt_t *VAR_2, zend_long VAR_3, zval *VAR_4)
{
 pdo_sqlite_stmt *VAR_5 = (pdo_sqlite_stmt*)VAR_2->driver_data;
 const char *VAR_6;
 zval VAR_7;

 if (!VAR_5->stmt) {
  return VAR_0;
 }
 if(VAR_3 >= FUNC_8(VAR_5->stmt)) {

  FUNC_4(VAR_2);
  return VAR_0;
 }

 FUNC_3(VAR_4);
 FUNC_3(&VAR_7);

 switch (FUNC_7(VAR_5->stmt, VAR_3)) {
  case 129:
   FUNC_0(VAR_4, "native_type", "null");
   break;

  case 131:
   FUNC_0(VAR_4, "native_type", "double");
   break;

  case 132:
   FUNC_2(&VAR_7, "blob");
  case 128:
   FUNC_0(VAR_4, "native_type", "string");
   break;

  case 130:
   FUNC_0(VAR_4, "native_type", "integer");
   break;
 }

 VAR_6 = FUNC_5(VAR_5->stmt, VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_4, "sqlite:decl_type", (char *)VAR_6);
 }
 FUNC_1(VAR_4, "flags", &VAR_7);

 return VAR_1;
}
