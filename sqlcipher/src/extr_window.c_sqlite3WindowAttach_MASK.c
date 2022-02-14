
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* pOwner; } ;
typedef TYPE_2__ Window ;
struct TYPE_12__ {TYPE_2__* pWin; } ;
struct TYPE_15__ {scalar_t__ op; int flags; TYPE_1__ y; } ;
struct TYPE_14__ {int db; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Expr ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (int ,TYPE_2__*) ;

void FUNC_5(Parse *VAR_3, Expr *VAR_4, Window *VAR_5){
  if( VAR_4 ){
    FUNC_2( VAR_4->op==VAR_2 );



    if( FUNC_0(VAR_5) ){
      VAR_4->y.pWin = VAR_5;
      FUNC_1(VAR_4, VAR_1);
      VAR_5->pOwner = VAR_4;
      if( VAR_4->flags & VAR_0 ){
        FUNC_3(VAR_3,
           "DISTINCT is not supported for window functions");
      }
    }
  }else{
    FUNC_4(VAR_3->db, VAR_5);
  }
}
