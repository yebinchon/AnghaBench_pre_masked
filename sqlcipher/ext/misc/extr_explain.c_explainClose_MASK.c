
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_3__ {struct TYPE_3__* zSql; int pExplain; } ;
typedef TYPE_1__ explain_cursor ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1){
  explain_cursor *VAR_2 = (explain_cursor*)VAR_1;
  FUNC_0(VAR_2->pExplain);
  FUNC_1(VAR_2->zSql);
  FUNC_1(VAR_2);
  return VAR_0;
}
