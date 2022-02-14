
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* columns; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_8__ {int stmt; } ;
typedef TYPE_3__ pdo_sqlite_stmt ;
struct TYPE_6__ {int maxlen; int param_type; scalar_t__ precision; int name; } ;


 int VAR_0 ;





 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_6(pdo_stmt_t *VAR_1, int VAR_2)
{
 pdo_sqlite_stmt *VAR_3 = (pdo_sqlite_stmt*)VAR_1->driver_data;
 const char *VAR_4;

 if(VAR_2 >= FUNC_1(VAR_3->stmt)) {

  FUNC_0(VAR_1);
  return 0;
 }

 VAR_4 = FUNC_2(VAR_3->stmt, VAR_2);
 VAR_1->columns[VAR_2].name = FUNC_5(VAR_4, FUNC_4(VAR_4), 0);
 VAR_1->columns[VAR_2].maxlen = 0xffffffff;
 VAR_1->columns[VAR_2].precision = 0;

 switch (FUNC_3(VAR_3->stmt, VAR_2)) {
  case 129:
  case 130:
  case 132:
  case 131:
  case 128:
  default:
   VAR_1->columns[VAR_2].param_type = VAR_0;
   break;
 }

 return 1;
}
