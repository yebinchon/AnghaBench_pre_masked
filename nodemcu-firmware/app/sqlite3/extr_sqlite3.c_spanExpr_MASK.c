
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_12__ {int n; int * z; } ;
typedef TYPE_2__ Token ;
struct TYPE_11__ {char* zToken; } ;
struct TYPE_15__ {int iAgg; int nHeight; TYPE_1__ u; int flags; scalar_t__ op; } ;
struct TYPE_14__ {int * zEnd; int * zStart; TYPE_5__* pExpr; } ;
struct TYPE_13__ {int db; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprSpan ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 TYPE_5__* FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;

__attribute__((used)) static void FUNC_5(ExprSpan *VAR_2, Parse *VAR_3, int VAR_4, Token VAR_5){
    Expr *VAR_6 = FUNC_2(VAR_3->db, sizeof(Expr)+VAR_5.n+1);
    if( VAR_6 ){
      FUNC_1(VAR_6, 0, sizeof(Expr));
      VAR_6->op = (u8)VAR_4;
      VAR_6->flags = VAR_1;
      VAR_6->iAgg = -1;
      VAR_6->u.zToken = (char*)&VAR_6[1];
      FUNC_0(VAR_6->u.zToken, VAR_5.z, VAR_5.n);
      VAR_6->u.zToken[VAR_5.n] = 0;
      if( FUNC_4(VAR_6->u.zToken[0]) ){
        if( VAR_6->u.zToken[0]=='"' ) VAR_6->flags |= VAR_0;
        FUNC_3(VAR_6->u.zToken);
      }



    }
    VAR_2->pExpr = VAR_6;
    VAR_2->zStart = VAR_5.z;
    VAR_2->zEnd = &VAR_5.z[VAR_5.n];
  }
