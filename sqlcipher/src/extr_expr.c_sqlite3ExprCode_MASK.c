
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ op; int iTable; } ;
struct TYPE_9__ {int nMem; scalar_t__ pVdbe; TYPE_1__* db; } ;
struct TYPE_8__ {scalar_t__ mallocFailed; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_2 (scalar_t__,int ,int,int) ;

void FUNC_3(Parse *VAR_3, Expr *VAR_4, int VAR_5){
  int VAR_6;

  FUNC_0( VAR_5>0 && VAR_5<=VAR_3->nMem );
  if( VAR_4 && VAR_4->op==VAR_2 ){
    FUNC_2(VAR_3->pVdbe, VAR_0, VAR_4->iTable, VAR_5);
  }else{
    VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
    FUNC_0( VAR_3->pVdbe!=0 || VAR_3->db->mallocFailed );
    if( VAR_6!=VAR_5 && VAR_3->pVdbe ){
      FUNC_2(VAR_3->pVdbe, VAR_1, VAR_6, VAR_5);
    }
  }
}
