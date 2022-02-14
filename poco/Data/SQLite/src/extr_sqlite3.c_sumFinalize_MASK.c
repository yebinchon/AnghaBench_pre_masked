
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_3__ {scalar_t__ cnt; int iSum; int rSum; scalar_t__ approx; scalar_t__ overflow; } ;
typedef TYPE_1__ SumCtx ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(sqlite3_context *VAR_0){
  SumCtx *VAR_1;
  VAR_1 = FUNC_0(VAR_0, 0);
  if( VAR_1 && VAR_1->cnt>0 ){
    if( VAR_1->overflow ){
      FUNC_2(VAR_0,"integer overflow",-1);
    }else if( VAR_1->approx ){
      FUNC_1(VAR_0, VAR_1->rSum);
    }else{
      FUNC_3(VAR_0, VAR_1->iSum);
    }
  }
}
