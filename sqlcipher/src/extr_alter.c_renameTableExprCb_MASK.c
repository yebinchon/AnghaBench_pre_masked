
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* pRename; } ;
struct TYPE_11__ {int pParse; TYPE_1__ u; } ;
typedef TYPE_3__ Walker ;
struct TYPE_10__ {scalar_t__ pTab; } ;
struct TYPE_13__ {scalar_t__ op; TYPE_2__ y; } ;
struct TYPE_12__ {scalar_t__ pTab; } ;
typedef TYPE_4__ RenameCtx ;
typedef TYPE_5__ Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_4__*,void*) ;

__attribute__((used)) static int FUNC_1(Walker *VAR_2, Expr *VAR_3){
  RenameCtx *VAR_4 = VAR_2->u.pRename;
  if( VAR_3->op==VAR_0 && VAR_4->pTab==VAR_3->y.pTab ){
    FUNC_0(VAR_2->pParse, VAR_4, (void*)&VAR_3->y.pTab);
  }
  return VAR_1;
}
