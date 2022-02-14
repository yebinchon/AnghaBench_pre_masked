
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int u16 ;
struct TYPE_23__ {int wtFlags; int eOperator; TYPE_3__* pExpr; } ;
typedef TYPE_4__ WhereTerm ;
struct TYPE_20__ {int nEq; TYPE_8__* pIndex; } ;
struct TYPE_21__ {TYPE_1__ btree; } ;
struct TYPE_24__ {int wsFlags; int nSkip; TYPE_4__** aLTerm; TYPE_2__ u; } ;
typedef TYPE_5__ WhereLoop ;
struct TYPE_25__ {int iIdxCur; int addrBrk; int addrSkip; TYPE_5__* pWLoop; } ;
typedef TYPE_6__ WhereLevel ;
typedef int Vdbe ;
struct TYPE_27__ {scalar_t__* aiColumn; int zName; } ;
struct TYPE_26__ {int nMem; TYPE_10__* db; int * pVdbe; } ;
struct TYPE_22__ {int flags; int * pRight; } ;
struct TYPE_19__ {scalar_t__ mallocFailed; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ Index ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_7__*,TYPE_4__*,TYPE_6__*,int,int,int) ;
 int FUNC_5 (TYPE_8__*,int) ;
 char FUNC_6 (int *,char) ;
 char* FUNC_7 (TYPE_10__*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char) ;
 int FUNC_10 (TYPE_10__*,TYPE_8__*) ;
 int FUNC_11 (TYPE_7__*,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *,int ,int,int) ;
 int FUNC_15 (int *,int ,int,int,int) ;
 int FUNC_16 (int *,int ,int,int ,int,int) ;
 int FUNC_17 (int *,int) ;
 scalar_t__ FUNC_18 (char*) ;
 int FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(
  Parse *VAR_17,
  WhereLevel *VAR_18,
  int VAR_19,
  int VAR_20,
  char **VAR_21
){
  u16 VAR_22;
  u16 VAR_23;
  Vdbe *VAR_24 = VAR_17->pVdbe;
  Index *VAR_25;
  WhereTerm *VAR_26;
  WhereLoop *VAR_27;
  int VAR_28;
  int VAR_29;
  int VAR_30;
  char *VAR_31;


  VAR_27 = VAR_18->pWLoop;
  FUNC_3( (VAR_27->wsFlags & VAR_13)==0 );
  VAR_22 = VAR_27->u.btree.nEq;
  VAR_23 = VAR_27->nSkip;
  VAR_25 = VAR_27->u.btree.pIndex;
  FUNC_3( VAR_25!=0 );



  VAR_29 = VAR_17->nMem + 1;
  VAR_30 = VAR_27->u.btree.nEq + VAR_20;
  VAR_17->nMem += VAR_30;

  VAR_31 = FUNC_7(VAR_17->db,FUNC_10(VAR_17->db,VAR_25));
  FUNC_3( VAR_31!=0 || VAR_17->db->mallocFailed );

  if( VAR_23 ){
    int VAR_32 = VAR_18->iIdxCur;
    FUNC_13(VAR_24, (VAR_19?VAR_4:VAR_5), VAR_32);
    FUNC_2(VAR_24, VAR_19==0);
    FUNC_2(VAR_24, VAR_19!=0);
    FUNC_0((VAR_24, "begin skip-scan on %s", VAR_25->zName));
    VAR_28 = FUNC_12(VAR_24, VAR_2);
    VAR_18->addrSkip = FUNC_16(VAR_24, (VAR_19?VAR_8:VAR_7),
                            VAR_32, 0, VAR_29, VAR_23);
    FUNC_2(VAR_24, VAR_19==0);
    FUNC_2(VAR_24, VAR_19!=0);
    FUNC_17(VAR_24, VAR_28);
    for(VAR_28=0; VAR_28<VAR_23; VAR_28++){
      FUNC_15(VAR_24, VAR_1, VAR_32, VAR_28, VAR_29+VAR_28);
      FUNC_19( VAR_25->aiColumn[VAR_28]==VAR_16 );
      FUNC_0((VAR_24, "%s", FUNC_5(VAR_25, VAR_28)));
    }
  }



  FUNC_3( VAR_31==0 || (int)FUNC_18(VAR_31)>=VAR_22 );
  for(VAR_28=VAR_23; VAR_28<VAR_22; VAR_28++){
    int VAR_33;
    VAR_26 = VAR_27->aLTerm[VAR_28];
    FUNC_3( VAR_26!=0 );


    FUNC_19( (VAR_26->wtFlags & VAR_10)!=0 );
    FUNC_19( VAR_26->wtFlags & VAR_12 );
    VAR_33 = FUNC_4(VAR_17, VAR_26, VAR_18, VAR_28, VAR_19, VAR_29+VAR_28);
    if( VAR_33!=VAR_29+VAR_28 ){
      if( VAR_30==1 ){
        FUNC_11(VAR_17, VAR_29);
        VAR_29 = VAR_33;
      }else{
        FUNC_14(VAR_24, VAR_6, VAR_33, VAR_29+VAR_28);
      }
    }
    if( VAR_26->eOperator & VAR_14 ){
      if( VAR_26->pExpr->flags & VAR_0 ){




        if( VAR_31 ) VAR_31[VAR_28] = VAR_9;
      }
    }else if( (VAR_26->eOperator & VAR_15)==0 ){
      Expr *VAR_34 = VAR_26->pExpr->pRight;
      if( (VAR_26->wtFlags & VAR_11)==0 && FUNC_8(VAR_34) ){
        FUNC_14(VAR_24, VAR_3, VAR_29+VAR_28, VAR_18->addrBrk);
        FUNC_1(VAR_24);
      }
      if( VAR_31 ){
        if( FUNC_6(VAR_34, VAR_31[VAR_28])==VAR_9 ){
          VAR_31[VAR_28] = VAR_9;
        }
        if( FUNC_9(VAR_34, VAR_31[VAR_28]) ){
          VAR_31[VAR_28] = VAR_9;
        }
      }
    }
  }
  *VAR_21 = VAR_31;
  return VAR_29;
}
