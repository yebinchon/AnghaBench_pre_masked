
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ExprList_item {scalar_t__ zName; } ;
struct TYPE_10__ {int n; int z; } ;
typedef TYPE_1__ Token ;
struct TYPE_13__ {scalar_t__ mallocFailed; } ;
struct TYPE_12__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_11__ {TYPE_9__* db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ ExprList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_9__*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,void*,TYPE_1__*) ;

void FUNC_4(
  Parse *VAR_1,
  ExprList *VAR_2,
  Token *VAR_3,
  int VAR_4
){
  FUNC_0( VAR_2!=0 || VAR_1->db->mallocFailed!=0 );
  if( VAR_2 ){
    struct ExprList_item *VAR_5;
    FUNC_0( VAR_2->nExpr>0 );
    VAR_5 = &VAR_2->a[VAR_2->nExpr-1];
    FUNC_0( VAR_5->zName==0 );
    VAR_5->zName = FUNC_1(VAR_1->db, VAR_3->z, VAR_3->n);
    if( VAR_4 ) FUNC_2(VAR_5->zName);
    if( VAR_0 ){
      FUNC_3(VAR_1, (void*)VAR_5->zName, VAR_3);
    }
  }
}
