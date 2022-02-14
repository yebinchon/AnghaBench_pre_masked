
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t i16 ;
struct TYPE_7__ {size_t* aiColumn; TYPE_2__* aColExpr; } ;
struct TYPE_6__ {TYPE_1__* a; } ;
struct TYPE_5__ {scalar_t__ pExpr; } ;
typedef TYPE_3__ Index ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int*,int) ;

__attribute__((used)) static int FUNC_2(
  Index *VAR_2,
  int VAR_3,
  int *VAR_4,
  int VAR_5
){
  i16 VAR_6 = VAR_2->aiColumn[VAR_3];
  FUNC_0( VAR_6!=VAR_1 );
  if( VAR_6>=0 ){
    return VAR_4[VAR_6]>=0;
  }
  FUNC_0( VAR_6==VAR_0 );
  FUNC_0( VAR_2->aColExpr!=0 );
  FUNC_0( VAR_2->aColExpr->a[VAR_3].pExpr!=0 );
  return FUNC_1(VAR_2->aColExpr->a[VAR_3].pExpr,
                                            VAR_4,VAR_5);
}
