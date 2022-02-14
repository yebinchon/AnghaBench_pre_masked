
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int WhereInfo ;
typedef int Vdbe ;
struct TYPE_21__ {int nCol; } ;
typedef TYPE_3__ Table ;
struct TYPE_24__ {TYPE_2__* a; } ;
struct TYPE_23__ {int nMem; scalar_t__ isMultiWrite; int nTab; int * db; int * pVdbe; } ;
struct TYPE_22__ {TYPE_1__* a; } ;
struct TYPE_20__ {int * pExpr; } ;
struct TYPE_19__ {int iCursor; } ;
typedef TYPE_4__ SrcList ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ ExprList ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int VAR_14 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int,int) ;
 int FUNC_8 (int *,int ,int,int,int) ;
 int FUNC_9 (int *,int ,int ,int,int,char const*,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (TYPE_5__*,TYPE_3__*) ;
 int * FUNC_14 (TYPE_5__*,TYPE_4__*,int *,int ,int ,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int*) ;

__attribute__((used)) static void FUNC_17(
  Parse *VAR_15,
  SrcList *VAR_16,
  Table *VAR_17,
  ExprList *VAR_18,
  Expr *VAR_19,
  int *VAR_20,
  Expr *VAR_21,
  int VAR_22
){
  Vdbe *VAR_23 = VAR_15->pVdbe;
  int VAR_24;
  int VAR_25;
  sqlite3 *VAR_26 = VAR_15->db;
  const char *VAR_27 = (const char*)FUNC_3(VAR_26, VAR_17);
  WhereInfo *VAR_28;
  int VAR_29 = 2 + VAR_17->nCol;
  int VAR_30;
  int VAR_31;
  int VAR_32;
  int VAR_33 = VAR_16->a[0].iCursor;
  int VAR_34[2];
  int VAR_35;
  int VAR_36;




  FUNC_1( VAR_23 );
  VAR_24 = VAR_15->nTab++;
  VAR_36= FUNC_7(VAR_23, VAR_8, VAR_24, VAR_29);
  VAR_30 = VAR_15->nMem + 1;
  VAR_15->nMem += VAR_29;
  VAR_31 = ++VAR_15->nMem;
  VAR_32 = ++VAR_15->nMem;


  VAR_28 = FUNC_14(VAR_15, VAR_16, VAR_21, 0,0,VAR_14,0);
  if( VAR_28==0 ) return;


  FUNC_7(VAR_23, VAR_10, VAR_33, VAR_30);
  if( VAR_19 ){
    FUNC_2(VAR_15, VAR_19, VAR_30+1);
  }else{
    FUNC_7(VAR_23, VAR_10, VAR_33, VAR_30+1);
  }
  for(VAR_25=0; VAR_25<VAR_17->nCol; VAR_25++){
    if( VAR_20[VAR_25]>=0 ){
      FUNC_2(VAR_15, VAR_18->a[VAR_20[VAR_25]].pExpr, VAR_30+2+VAR_25);
    }else{
      FUNC_8(VAR_23, VAR_11, VAR_33, VAR_25, VAR_30+2+VAR_25);
    }
  }

  VAR_35 = FUNC_16(VAR_28, VAR_34);

  if( VAR_35 ){



    FUNC_11(VAR_23, VAR_36);
    if( FUNC_4(VAR_15) ){
      VAR_15->isMultiWrite = 0;
    }
  }else{


    FUNC_8(VAR_23, VAR_5, VAR_30, VAR_29, VAR_31);
    FUNC_7(VAR_23, VAR_6, VAR_24, VAR_32);
    FUNC_8(VAR_23, VAR_4, VAR_24, VAR_31, VAR_32);
  }


  if( VAR_35==0 ){

    FUNC_15(VAR_28);


    VAR_36 = FUNC_6(VAR_23, VAR_9, VAR_24); FUNC_0(VAR_23);



    for(VAR_25=0; VAR_25<VAR_29; VAR_25++){
      FUNC_8(VAR_23, VAR_3, VAR_24, VAR_25, VAR_30+VAR_25);
    }
  }
  FUNC_13(VAR_15, VAR_17);
  FUNC_9(VAR_23, VAR_12, 0, VAR_29, VAR_30, VAR_27, VAR_13);
  FUNC_10(VAR_23, VAR_22==VAR_1 ? VAR_0 : VAR_22);
  FUNC_5(VAR_15);



  if( VAR_35==0 ){
    FUNC_7(VAR_23, VAR_7, VAR_24, VAR_36+1); FUNC_0(VAR_23);
    FUNC_12(VAR_23, VAR_36);
    FUNC_7(VAR_23, VAR_2, VAR_24, 0);
  }else{
    FUNC_15(VAR_28);
  }
}
