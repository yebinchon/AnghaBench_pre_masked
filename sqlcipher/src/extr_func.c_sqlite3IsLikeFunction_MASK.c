
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_17__ {int matchSet; int matchOne; int matchAll; } ;
struct TYPE_14__ {char* zToken; } ;
struct TYPE_13__ {TYPE_2__* pList; } ;
struct TYPE_16__ {scalar_t__ op; TYPE_4__ u; TYPE_3__ x; } ;
struct TYPE_15__ {int funcFlags; int pUserData; } ;
struct TYPE_12__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_11__ {TYPE_6__* pExpr; } ;
typedef TYPE_5__ FuncDef ;
typedef TYPE_6__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 TYPE_9__ VAR_6 ;
 int FUNC_3 (char*,int ,int) ;
 TYPE_5__* FUNC_4 (int *,char*,int,int ,int ) ;

int FUNC_5(sqlite3 *VAR_7, Expr *VAR_8, int *VAR_9, char *VAR_10){
  FuncDef *VAR_11;
  int VAR_12;
  if( VAR_8->op!=VAR_4 || !VAR_8->x.pList ){
    return 0;
  }
  FUNC_2( !FUNC_0(VAR_8, VAR_0) );
  VAR_12 = VAR_8->x.pList->nExpr;
  VAR_11 = FUNC_4(VAR_7, VAR_8->u.zToken, VAR_12, VAR_3, 0);
  if( FUNC_1(VAR_11==0) || (VAR_11->funcFlags & VAR_2)==0 ){
    return 0;
  }
  if( VAR_12<3 ){
    VAR_10[3] = 0;
  }else{
    Expr *VAR_13 = VAR_8->x.pList->a[2].pExpr;
    char *VAR_14;
    if( VAR_13->op!=VAR_5 ) return 0;
    VAR_14 = VAR_13->u.zToken;
    if( VAR_14[0]==0 || VAR_14[1]!=0 ) return 0;
    VAR_10[3] = VAR_14[0];
  }





  FUNC_3(VAR_10, VAR_11->pUserData, 3);
  FUNC_2( (char*)&VAR_6 == (char*)&VAR_6.matchAll );
  FUNC_2( &((char*)&VAR_6)[1] == (char*)&VAR_6.matchOne );
  FUNC_2( &((char*)&VAR_6)[2] == (char*)&VAR_6.matchSet );
  *VAR_9 = (VAR_11->funcFlags & VAR_1)==0;
  return 1;
}
