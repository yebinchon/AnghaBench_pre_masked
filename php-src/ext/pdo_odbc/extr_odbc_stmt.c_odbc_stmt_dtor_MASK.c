
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ executed; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_8__ {scalar_t__ stmt; struct TYPE_8__* convbuf; } ;
typedef TYPE_2__ pdo_odbc_stmt ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(pdo_stmt_t *VAR_2)
{
 pdo_odbc_stmt *VAR_3 = (pdo_odbc_stmt*)VAR_2->driver_data;

 if (VAR_3->stmt != VAR_1) {
  if (VAR_2->executed) {
   FUNC_0(VAR_3->stmt);
  }
  FUNC_1(VAR_0, VAR_3->stmt);
  VAR_3->stmt = VAR_1;
 }

 FUNC_3(VAR_2, VAR_3);
 if (VAR_3->convbuf) {
  FUNC_2(VAR_3->convbuf);
 }
 FUNC_2(VAR_3);

 return 1;
}
