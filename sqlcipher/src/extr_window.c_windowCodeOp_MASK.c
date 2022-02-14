
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int csr; int reg; } ;
struct TYPE_14__ {int csr; int reg; } ;
struct TYPE_13__ {int csr; int reg; } ;
struct TYPE_16__ {int eDelete; int regArg; TYPE_3__ end; TYPE_2__ start; TYPE_1__ current; int * pVdbe; TYPE_5__* pMWin; int * pParse; } ;
typedef TYPE_4__ WindowCodeArg ;
struct TYPE_17__ {scalar_t__ eFrmType; scalar_t__ eStart; scalar_t__ regStartRowid; int regEndRowid; TYPE_8__* pOrderBy; } ;
typedef TYPE_5__ Window ;
typedef int Vdbe ;
struct TYPE_18__ {int nExpr; } ;
typedef int Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *) ;

 int VAR_13 ;

 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int,int) ;
 int FUNC_7 (int *,int ,int,int ,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (int *,TYPE_5__*,int,int,int ) ;
 int FUNC_15 (TYPE_4__*,int ,int,int,int,int) ;
 int FUNC_16 (int *,TYPE_8__*,int,int,int) ;
 int FUNC_17 (TYPE_4__*,int,int) ;
 int FUNC_18 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_19(
 WindowCodeArg *VAR_14,
 int VAR_15,
 int VAR_16,
 int VAR_17
){
  int VAR_18, VAR_19;
  Parse *VAR_20 = VAR_14->pParse;
  Window *VAR_21 = VAR_14->pMWin;
  int VAR_22 = 0;
  Vdbe *VAR_23 = VAR_14->pVdbe;
  int VAR_24 = 0;
  int VAR_25 = 0;
  int VAR_26 = 0;
  int VAR_27 = (VAR_21->eFrmType!=VAR_11);

  int VAR_28 = FUNC_11(VAR_20);
  int VAR_29 = 0;



  if( VAR_15==129 && VAR_21->eStart==VAR_12 ){
    FUNC_1( VAR_16==0 && VAR_17==0 );
    return 0;
  }

  if( VAR_16>0 ){
    if( VAR_21->eFrmType==VAR_10 ){
      VAR_29 = FUNC_9(VAR_23);
      FUNC_1( VAR_15==129 || VAR_15==VAR_13 );
      if( VAR_15==129 ){
        if( VAR_21->eStart==VAR_9 ){
          FUNC_15(
              VAR_14, VAR_7, VAR_14->current.csr, VAR_16, VAR_14->start.csr, VAR_28
          );
        }else{
          FUNC_15(
              VAR_14, VAR_3, VAR_14->start.csr, VAR_16, VAR_14->current.csr, VAR_28
          );
        }
      }else{
        FUNC_15(
            VAR_14, VAR_5, VAR_14->end.csr, VAR_16, VAR_14->current.csr, VAR_28
        );
      }
    }else{
      VAR_24 = FUNC_7(VAR_23, VAR_6, VAR_16, 0, 1);
      FUNC_0(VAR_23);
    }
  }

  if( VAR_15==128 && VAR_21->regStartRowid==0 ){
    FUNC_13(VAR_14, 0);
  }
  VAR_25 = FUNC_9(VAR_23);
  switch( VAR_15 ){
    case 128:
      VAR_18 = VAR_14->current.csr;
      VAR_19 = VAR_14->current.reg;
      FUNC_18(VAR_14);
      break;

    case 129:
      VAR_18 = VAR_14->start.csr;
      VAR_19 = VAR_14->start.reg;
      if( VAR_21->regStartRowid ){
        FUNC_1( VAR_21->regEndRowid );
        FUNC_6(VAR_23, VAR_1, VAR_21->regStartRowid, 1);
      }else{
        FUNC_14(VAR_20, VAR_21, VAR_18, 1, VAR_14->regArg);
      }
      break;

    default:
      FUNC_1( VAR_15==VAR_13 );
      VAR_18 = VAR_14->end.csr;
      VAR_19 = VAR_14->end.reg;
      if( VAR_21->regStartRowid ){
        FUNC_1( VAR_21->regEndRowid );
        FUNC_6(VAR_23, VAR_1, VAR_21->regEndRowid, 1);
      }else{
        FUNC_14(VAR_20, VAR_21, VAR_18, 0, VAR_14->regArg);
      }
      break;
  }

  if( VAR_15==VAR_14->eDelete ){
    FUNC_5(VAR_23, VAR_2, VAR_18);
    FUNC_8(VAR_23, VAR_0);
  }

  if( VAR_17 ){
    FUNC_6(VAR_23, VAR_8, VAR_18, FUNC_9(VAR_23)+2);
    FUNC_0(VAR_23);
    VAR_22 = FUNC_4(VAR_23, VAR_4);
  }else{
    FUNC_6(VAR_23, VAR_8, VAR_18, FUNC_9(VAR_23)+1+VAR_27);
    FUNC_0(VAR_23);
    if( VAR_27 ){
      VAR_26 = FUNC_4(VAR_23, VAR_4);
    }
  }

  if( VAR_27 ){
    int VAR_30 = (VAR_21->pOrderBy ? VAR_21->pOrderBy->nExpr : 0);
    int VAR_31 = (VAR_30 ? FUNC_2(VAR_20, VAR_30) : 0);
    FUNC_17(VAR_14, VAR_18, VAR_31);
    FUNC_16(VAR_20, VAR_21->pOrderBy, VAR_31, VAR_19, VAR_25);
    FUNC_3(VAR_20, VAR_31, VAR_30);
  }

  if( VAR_29 ){
    FUNC_6(VAR_23, VAR_4, 0, VAR_29);
  }
  FUNC_12(VAR_23, VAR_28);
  if( VAR_26 ) FUNC_10(VAR_23, VAR_26);
  if( VAR_24 ) FUNC_10(VAR_23, VAR_24);
  return VAR_22;
}
