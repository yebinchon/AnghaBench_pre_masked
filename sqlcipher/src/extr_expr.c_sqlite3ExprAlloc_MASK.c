
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int sqlite3 ;
struct TYPE_10__ {int n; int z; } ;
typedef TYPE_2__ Token ;
struct TYPE_9__ {int iValue; char* zToken; } ;
struct TYPE_11__ {int iAgg; int flags; int nHeight; TYPE_1__ u; scalar_t__ op; } ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 TYPE_3__* FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 scalar_t__ FUNC_6 (char) ;

Expr *FUNC_7(
  sqlite3 *VAR_3,
  int VAR_4,
  const Token *VAR_5,
  int VAR_6
){
  Expr *VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;

  FUNC_0( VAR_3!=0 );
  if( VAR_5 ){
    if( VAR_4!=VAR_2 || VAR_5->z==0
          || FUNC_5(VAR_5->z, &VAR_9)==0 ){
      VAR_8 = VAR_5->n+1;
      FUNC_0( VAR_9>=0 );
    }
  }
  VAR_7 = FUNC_3(VAR_3, sizeof(Expr)+VAR_8);
  if( VAR_7 ){
    FUNC_2(VAR_7, 0, sizeof(Expr));
    VAR_7->op = (u8)VAR_4;
    VAR_7->iAgg = -1;
    if( VAR_5 ){
      if( VAR_8==0 ){
        VAR_7->flags |= VAR_0|VAR_1;
        VAR_7->u.iValue = VAR_9;
      }else{
        VAR_7->u.zToken = (char*)&VAR_7[1];
        FUNC_0( VAR_5->z!=0 || VAR_5->n==0 );
        if( VAR_5->n ) FUNC_1(VAR_7->u.zToken, VAR_5->z, VAR_5->n);
        VAR_7->u.zToken[VAR_5->n] = 0;
        if( VAR_6 && FUNC_6(VAR_7->u.zToken[0]) ){
          FUNC_4(VAR_7);
        }
      }
    }



  }
  return VAR_7;
}
