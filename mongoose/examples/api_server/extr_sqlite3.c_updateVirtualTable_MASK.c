
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int Vdbe ;
struct TYPE_21__ {scalar_t__ iPKey; int nCol; TYPE_2__* aCol; } ;
typedef TYPE_3__ Table ;
struct TYPE_23__ {TYPE_1__* a; } ;
struct TYPE_22__ {int nMem; int nTab; int * db; int * pVdbe; } ;
struct TYPE_20__ {char* zName; } ;
struct TYPE_19__ {int * pExpr; } ;
typedef int SrcList ;
typedef int SelectDest ;
typedef int Select ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ ExprList ;
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
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int *,int *,int ) ;
 TYPE_5__* FUNC_3 (TYPE_4__*,TYPE_5__*,int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ,int) ;
 int * FUNC_9 (TYPE_4__*,TYPE_5__*,int *,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int *,int ,int,int) ;
 int FUNC_11 (int *,int ,int,int,int) ;
 int FUNC_12 (int *,int ,int ,int,int,char const*,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_16(
  Parse *VAR_12,
  SrcList *VAR_13,
  Table *VAR_14,
  ExprList *VAR_15,
  Expr *VAR_16,
  int *VAR_17,
  Expr *VAR_18,
  int VAR_19
){
  Vdbe *VAR_20 = VAR_12->pVdbe;
  ExprList *VAR_21 = 0;
  Select *VAR_22 = 0;
  Expr *VAR_23;
  int VAR_24;
  int VAR_25;
  int VAR_26;
  int VAR_27;
  sqlite3 *VAR_28 = VAR_12->db;
  const char *VAR_29 = (const char*)FUNC_4(VAR_28, VAR_14);
  SelectDest VAR_30;




  VAR_21 = FUNC_3(VAR_12, 0, FUNC_1(VAR_28, VAR_11, "_rowid_"));
  if( VAR_16 ){
    VAR_21 = FUNC_3(VAR_12, VAR_21,
                                   FUNC_2(VAR_28, VAR_16, 0));
  }
  FUNC_0( VAR_14->iPKey<0 );
  for(VAR_25=0; VAR_25<VAR_14->nCol; VAR_25++){
    if( VAR_17[VAR_25]>=0 ){
      VAR_23 = FUNC_2(VAR_28, VAR_15->a[VAR_17[VAR_25]].pExpr, 0);
    }else{
      VAR_23 = FUNC_1(VAR_28, VAR_11, VAR_14->aCol[VAR_25].zName);
    }
    VAR_21 = FUNC_3(VAR_12, VAR_21, VAR_23);
  }
  VAR_22 = FUNC_9(VAR_12, VAR_21, VAR_13, VAR_18, 0, 0, 0, 0, 0, 0);




  FUNC_0( *VAR_20 );
  VAR_24 = VAR_12->nTab++;
  FUNC_10(VAR_20, VAR_6, VAR_24, VAR_14->nCol+1+(VAR_16!=0));
  FUNC_13(VAR_20, VAR_0);



  FUNC_8(&VAR_30, VAR_10, VAR_24);
  FUNC_6(VAR_12, VAR_22, &VAR_30);


  VAR_27 = ++VAR_12->nMem;
  VAR_12->nMem += VAR_14->nCol+1;
  VAR_26 = FUNC_10(VAR_20, VAR_7, VAR_24, 0);
  FUNC_11(VAR_20, VAR_4, VAR_24, 0, VAR_27);
  FUNC_11(VAR_20, VAR_4, VAR_24, (VAR_16?1:0), VAR_27+1);
  for(VAR_25=0; VAR_25<VAR_14->nCol; VAR_25++){
    FUNC_11(VAR_20, VAR_4, VAR_24, VAR_25+1+(VAR_16!=0), VAR_27+2+VAR_25);
  }
  FUNC_15(VAR_12, VAR_14);
  FUNC_12(VAR_20, VAR_8, 0, VAR_14->nCol+2, VAR_27, VAR_29, VAR_9);
  FUNC_13(VAR_20, VAR_19==VAR_2 ? VAR_1 : VAR_19);
  FUNC_5(VAR_12);
  FUNC_10(VAR_20, VAR_5, VAR_24, VAR_26+1);
  FUNC_14(VAR_20, VAR_26);
  FUNC_10(VAR_20, VAR_3, VAR_24, 0);


  FUNC_7(VAR_28, VAR_22);
}
