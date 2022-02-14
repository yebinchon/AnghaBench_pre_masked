
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int row_count; scalar_t__ executed; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_9__ {int done; int pre_fetched; int stmt; TYPE_1__* H; } ;
typedef TYPE_3__ pdo_sqlite_stmt ;
struct TYPE_7__ {int db; } ;







 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(pdo_stmt_t *VAR_0)
{
 pdo_sqlite_stmt *VAR_1 = (pdo_sqlite_stmt*)VAR_0->driver_data;

 if (VAR_0->executed && !VAR_1->done) {
  FUNC_5(VAR_1->stmt);
 }

 VAR_1->done = 0;
 switch (FUNC_6(VAR_1->stmt)) {
  case 128:
   VAR_1->pre_fetched = 1;
   FUNC_1(VAR_0, FUNC_4(VAR_1->stmt));
   return 1;

  case 131:
   FUNC_1(VAR_0, FUNC_3(VAR_1->stmt));
   VAR_0->row_count = FUNC_2(VAR_1->H->db);
   FUNC_5(VAR_1->stmt);
   VAR_1->done = 1;
   return 1;

  case 130:
   FUNC_5(VAR_1->stmt);
  case 129:
  case 132:
  default:
   FUNC_0(VAR_0);
   return 0;
 }
}
