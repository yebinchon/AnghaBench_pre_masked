
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_17__ {int n; int z; } ;
typedef TYPE_4__ Token ;
struct TYPE_16__ {char* zToken; } ;
struct TYPE_15__ {scalar_t__ pTab; } ;
struct TYPE_14__ {scalar_t__ pList; } ;
struct TYPE_19__ {int iAgg; int nHeight; TYPE_3__ u; scalar_t__ iColumn; scalar_t__ iTable; scalar_t__ op2; TYPE_2__ y; scalar_t__ pAggInfo; TYPE_1__ x; scalar_t__ pRight; scalar_t__ pLeft; int flags; scalar_t__ affinity; scalar_t__ op; } ;
struct TYPE_18__ {int db; } ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 TYPE_6__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (TYPE_5__*,void*,TYPE_4__*) ;

__attribute__((used)) static Expr *FUNC_5(Parse *VAR_2, int VAR_3, Token VAR_4){
    Expr *VAR_5 = FUNC_1(VAR_2->db, sizeof(Expr)+VAR_4.n+1);
    if( VAR_5 ){

      VAR_5->op = (u8)VAR_3;
      VAR_5->affinity = 0;
      VAR_5->flags = VAR_0;
      VAR_5->iAgg = -1;
      VAR_5->pLeft = VAR_5->pRight = 0;
      VAR_5->x.pList = 0;
      VAR_5->pAggInfo = 0;
      VAR_5->y.pTab = 0;
      VAR_5->op2 = 0;
      VAR_5->iTable = 0;
      VAR_5->iColumn = 0;
      VAR_5->u.zToken = (char*)&VAR_5[1];
      FUNC_0(VAR_5->u.zToken, VAR_4.z, VAR_4.n);
      VAR_5->u.zToken[VAR_4.n] = 0;
      if( FUNC_3(VAR_5->u.zToken[0]) ){
        FUNC_2(VAR_5);
      }



      if( VAR_1 ){
        return (Expr*)FUNC_4(VAR_2, (void*)VAR_5, &VAR_4);
      }
    }
    return VAR_5;
  }
