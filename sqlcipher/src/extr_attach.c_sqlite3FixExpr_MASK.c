
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_17__ {int zType; TYPE_10__* pParse; } ;
struct TYPE_13__ {int pList; int pSelect; } ;
struct TYPE_16__ {scalar_t__ op; struct TYPE_16__* pLeft; struct TYPE_16__* pRight; TYPE_1__ x; } ;
struct TYPE_14__ {scalar_t__ busy; } ;
struct TYPE_15__ {TYPE_2__ init; } ;
struct TYPE_12__ {TYPE_3__* db; } ;
typedef TYPE_4__ Expr ;
typedef TYPE_5__ DbFixer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_10__*,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;

int FUNC_4(
  DbFixer *VAR_5,
  Expr *VAR_6
){
  while( VAR_6 ){
    if( VAR_6->op==VAR_4 ){
      if( VAR_5->pParse->db->init.busy ){
        VAR_6->op = VAR_3;
      }else{
        FUNC_1(VAR_5->pParse, "%s cannot use variables", VAR_5->zType);
        return 1;
      }
    }
    if( FUNC_0(VAR_6, VAR_1|VAR_0) ) break;
    if( FUNC_0(VAR_6, VAR_2) ){
      if( FUNC_3(VAR_5, VAR_6->x.pSelect) ) return 1;
    }else{
      if( FUNC_2(VAR_5, VAR_6->x.pList) ) return 1;
    }
    if( FUNC_4(VAR_5, VAR_6->pRight) ){
      return 1;
    }
    VAR_6 = VAR_6->pLeft;
  }
  return 0;
}
