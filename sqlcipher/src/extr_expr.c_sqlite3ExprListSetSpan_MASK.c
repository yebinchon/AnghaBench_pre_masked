
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ExprList_item {int zSpan; } ;
struct TYPE_8__ {scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_10__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_9__ {TYPE_1__* db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ ExprList ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char const*,char const*) ;

void FUNC_3(
  Parse *VAR_0,
  ExprList *VAR_1,
  const char *VAR_2,
  const char *VAR_3
){
  sqlite3 *VAR_4 = VAR_0->db;
  FUNC_0( VAR_1!=0 || VAR_4->mallocFailed!=0 );
  if( VAR_1 ){
    struct ExprList_item *VAR_5 = &VAR_1->a[VAR_1->nExpr-1];
    FUNC_0( VAR_1->nExpr>0 );
    FUNC_1(VAR_4, VAR_5->zSpan);
    VAR_5->zSpan = FUNC_2(VAR_4, VAR_2, VAR_3);
  }
}
