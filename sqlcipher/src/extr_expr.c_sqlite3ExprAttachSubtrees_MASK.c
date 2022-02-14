
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_11__ {int flags; struct TYPE_11__* pLeft; struct TYPE_11__* pRight; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;

void FUNC_3(
  sqlite3 *VAR_1,
  Expr *VAR_2,
  Expr *VAR_3,
  Expr *VAR_4
){
  if( VAR_2==0 ){
    FUNC_0( VAR_1->mallocFailed );
    FUNC_2(VAR_1, VAR_3);
    FUNC_2(VAR_1, VAR_4);
  }else{
    if( VAR_4 ){
      VAR_2->pRight = VAR_4;
      VAR_2->flags |= VAR_0 & VAR_4->flags;
    }
    if( VAR_3 ){
      VAR_2->pLeft = VAR_3;
      VAR_2->flags |= VAR_0 & VAR_3->flags;
    }
    FUNC_1(VAR_2);
  }
}
