
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pIdxCover; } ;
struct TYPE_9__ {int eCode; TYPE_2__ u; } ;
typedef TYPE_3__ Walker ;
struct TYPE_10__ {scalar_t__ op; scalar_t__ iTable; int iColumn; } ;
struct TYPE_7__ {scalar_t__ iCur; int pIdx; } ;
typedef TYPE_4__ Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(Walker *VAR_3, Expr *VAR_4){
  if( VAR_4->op==VAR_0
   && VAR_4->iTable==VAR_3->u.pIdxCover->iCur
   && FUNC_0(VAR_3->u.pIdxCover->pIdx, VAR_4->iColumn)<0
  ){
    VAR_3->eCode = 1;
    return VAR_1;
  }
  return VAR_2;
}
