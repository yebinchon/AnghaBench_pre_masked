
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ n; } ;
typedef TYPE_1__ Token ;
struct TYPE_12__ {int flags; struct TYPE_12__* pLeft; } ;
struct TYPE_11__ {int db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ,int ,TYPE_1__ const*,int) ;

Expr *FUNC_1(
  Parse *VAR_3,
  Expr *VAR_4,
  const Token *VAR_5,
  int VAR_6
){
  if( VAR_5->n>0 ){
    Expr *VAR_7 = FUNC_0(VAR_3->db, VAR_2, VAR_5, VAR_6);
    if( VAR_7 ){
      VAR_7->pLeft = VAR_4;
      VAR_7->flags |= VAR_0|VAR_1;
      VAR_4 = VAR_7;
    }
  }
  return VAR_4;
}
