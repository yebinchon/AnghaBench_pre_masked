
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int pList; } ;
struct TYPE_11__ {scalar_t__ iValue; scalar_t__ zToken; } ;
struct TYPE_10__ {int pWin; } ;
struct TYPE_13__ {scalar_t__ op; int flags; scalar_t__ iColumn; int iTable; TYPE_3__ x; struct TYPE_13__* pRight; struct TYPE_13__* pLeft; TYPE_2__ u; TYPE_1__ y; } ;
typedef int Parse ;
typedef TYPE_4__ Expr ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

int FUNC_10(Parse *VAR_16, Expr *VAR_17, Expr *VAR_18, int VAR_19){
  u32 VAR_20;
  if( VAR_17==0 || VAR_18==0 ){
    return VAR_18==VAR_17 ? 0 : 2;
  }
  if( VAR_16 && VAR_17->op==VAR_15 && FUNC_4(VAR_16, VAR_17, VAR_18) ){
    return 0;
  }
  VAR_20 = VAR_17->flags | VAR_18->flags;
  if( VAR_20 & VAR_2 ){
    if( (VAR_17->flags&VAR_18->flags&VAR_2)!=0 && VAR_17->u.iValue==VAR_18->u.iValue ){
      return 0;
    }
    return 2;
  }
  if( VAR_17->op!=VAR_18->op || VAR_17->op==VAR_12 ){
    if( VAR_17->op==VAR_8 && FUNC_10(VAR_16, VAR_17->pLeft,VAR_18,VAR_19)<2 ){
      return 1;
    }
    if( VAR_18->op==VAR_8 && FUNC_10(VAR_16, VAR_17,VAR_18->pLeft,VAR_19)<2 ){
      return 1;
    }
    return 2;
  }
  if( VAR_17->op!=VAR_9 && VAR_17->op!=VAR_7 && VAR_17->u.zToken ){
    if( VAR_17->op==VAR_10 ){
      if( FUNC_6(VAR_17->u.zToken,VAR_18->u.zToken)!=0 ) return 2;
      FUNC_3( FUNC_1(VAR_17,VAR_5)==FUNC_1(VAR_18,VAR_5) );
      if( FUNC_1(VAR_17,VAR_5) ){
        if( FUNC_7(VAR_16,VAR_17->y.pWin,VAR_18->y.pWin)!=0 ) return 2;
      }

    }else if( VAR_17->op==VAR_11 ){
      return 0;
    }else if( VAR_17->op==VAR_8 ){
      if( FUNC_8(VAR_17->u.zToken,VAR_18->u.zToken)!=0 ) return 2;
    }else if( FUNC_0(VAR_18->u.zToken!=0) && FUNC_9(VAR_17->u.zToken,VAR_18->u.zToken)!=0 ){
      return 2;
    }
  }
  if( (VAR_17->flags & VAR_0)!=(VAR_18->flags & VAR_0) ) return 2;
  if( (VAR_20 & VAR_4)==0 ){
    if( VAR_20 & VAR_6 ) return 2;
    if( (VAR_20 & VAR_1)==0
     && FUNC_10(VAR_16, VAR_17->pLeft, VAR_18->pLeft, VAR_19) ) return 2;
    if( FUNC_10(VAR_16, VAR_17->pRight, VAR_18->pRight, VAR_19) ) return 2;
    if( FUNC_5(VAR_17->x.pList, VAR_18->x.pList, VAR_19) ) return 2;
    if( VAR_17->op!=VAR_13
     && VAR_17->op!=VAR_14
     && (VAR_20 & VAR_3)==0
    ){
      if( VAR_17->iColumn!=VAR_18->iColumn ) return 2;
      if( VAR_17->iTable!=VAR_18->iTable
       && (VAR_17->iTable!=VAR_19 || FUNC_2(VAR_18->iTable>=0)) ) return 2;
    }
  }
  return 0;
}
