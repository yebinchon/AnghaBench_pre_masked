
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_17__ {int nExpr; int iECursor; } ;
struct TYPE_16__ {int * pVdbe; } ;
struct TYPE_15__ {int selFlags; int iLimit; int iOffset; } ;
typedef TYPE_1__ Select ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int,int ) ;
 int FUNC_2 (TYPE_2__*,int,int,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int,int,int) ;
 int FUNC_10 (int *,int ,int,int,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static void FUNC_12(
  Parse *VAR_10,
  ExprList *VAR_11,
  Select *VAR_12,
  int VAR_13
){
  Vdbe *VAR_14 = VAR_10->pVdbe;
  int VAR_15 = VAR_11->nExpr;
  int VAR_16 = FUNC_3(VAR_10, VAR_15+2);
  int VAR_17 = FUNC_4(VAR_10);
  int VAR_18;
  FUNC_0(VAR_10);
  FUNC_1(VAR_10, VAR_11, VAR_16, 0);
  FUNC_9(VAR_14, VAR_7, VAR_11->iECursor, VAR_16+VAR_15);
  FUNC_2(VAR_10, VAR_13, VAR_16+VAR_15+1, 1);
  FUNC_10(VAR_14, VAR_6, VAR_16, VAR_15 + 2, VAR_17);
  if( VAR_12->selFlags & VAR_9 ){
    VAR_18 = VAR_8;
  }else{
    VAR_18 = VAR_3;
  }
  FUNC_9(VAR_14, VAR_18, VAR_11->iECursor, VAR_17);
  FUNC_6(VAR_10, VAR_17);
  FUNC_5(VAR_10, VAR_16, VAR_15+2);
  if( VAR_12->iLimit ){
    int VAR_19, VAR_20;
    int VAR_21;
    if( VAR_12->iOffset ){
      VAR_21 = VAR_12->iOffset+1;
    }else{
      VAR_21 = VAR_12->iLimit;
    }
    VAR_19 = FUNC_8(VAR_14, VAR_4, VAR_21);
    FUNC_9(VAR_14, VAR_0, VAR_21, -1);
    VAR_20 = FUNC_7(VAR_14, VAR_2);
    FUNC_11(VAR_14, VAR_19);
    FUNC_8(VAR_14, VAR_5, VAR_11->iECursor);
    FUNC_8(VAR_14, VAR_1, VAR_11->iECursor);
    FUNC_11(VAR_14, VAR_20);
  }
}
