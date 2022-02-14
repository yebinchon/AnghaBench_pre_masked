
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef scalar_t__ i64 ;
struct TYPE_3__ {int approx; int overflow; int rSum; int iSum; int cnt; } ;
typedef TYPE_1__ SumCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(sqlite3_context *VAR_2, int VAR_3, sqlite3_value **VAR_4){
  SumCtx *VAR_5;
  int VAR_6;
  FUNC_1( VAR_3==1 );
  FUNC_0(VAR_3);
  VAR_5 = FUNC_3(VAR_2, sizeof(*VAR_5));
  VAR_6 = FUNC_6(VAR_4[0]);
  if( VAR_5 && VAR_6!=VAR_1 ){
    VAR_5->cnt++;
    if( VAR_6==VAR_0 ){
      i64 VAR_7 = FUNC_5(VAR_4[0]);
      VAR_5->rSum += VAR_7;
      if( (VAR_5->approx|VAR_5->overflow)==0 && FUNC_2(&VAR_5->iSum, VAR_7) ){
        VAR_5->overflow = 1;
      }
    }else{
      VAR_5->rSum += FUNC_4(VAR_4[0]);
      VAR_5->approx = 1;
    }
  }
}
