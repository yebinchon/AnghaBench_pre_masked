
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int u16 ;
struct sqlite3_index_constraint_usage {int argvIndex; scalar_t__ omit; } ;
struct sqlite3_index_constraint {size_t iTermOffset; int usable; } ;
struct SrcList_item {TYPE_14__* pTab; scalar_t__ colUsed; } ;
typedef int sqlite3_uint64 ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_21__ {int nConstraint; int needToFreeIdxStr; double estimatedCost; int estimatedRows; int idxFlags; scalar_t__ nOrderBy; scalar_t__ orderByConsumed; scalar_t__ idxStr; scalar_t__ idxNum; int aConstraint; scalar_t__ colUsed; struct sqlite3_index_constraint_usage* aConstraintUsage; } ;
typedef TYPE_5__ sqlite3_index_info ;
typedef int pUsage ;
typedef scalar_t__ i8 ;
struct TYPE_22__ {int prereqRight; int eOperator; } ;
typedef TYPE_6__ WhereTerm ;
struct TYPE_23__ {TYPE_2__* pWInfo; TYPE_8__* pNew; TYPE_9__* pWC; } ;
typedef TYPE_7__ WhereLoopBuilder ;
struct TYPE_19__ {int omitMask; int needFree; scalar_t__ idxStr; scalar_t__ isOrdered; scalar_t__ idxNum; } ;
struct TYPE_20__ {TYPE_3__ vtab; } ;
struct TYPE_24__ {size_t iTab; int prereq; int nLSlot; int nLTerm; scalar_t__* aLTerm; TYPE_4__ u; int wsFlags; int nOut; int rRun; scalar_t__ rSetup; } ;
typedef TYPE_8__ WhereLoop ;
struct TYPE_25__ {int nTerm; TYPE_6__* a; } ;
typedef TYPE_9__ WhereClause ;
struct TYPE_18__ {TYPE_1__* pTabList; int * pParse; } ;
struct TYPE_17__ {struct SrcList_item* a; } ;
struct TYPE_16__ {int zName; } ;
typedef int Parse ;
typedef int Bitmask ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sqlite3_index_constraint_usage*,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (double) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,TYPE_14__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_7__*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_10(
  WhereLoopBuilder *VAR_7,
  Bitmask VAR_8,
  Bitmask VAR_9,
  u16 VAR_10,
  sqlite3_index_info *VAR_11,
  u16 VAR_12,
  int *VAR_13
){
  WhereClause *VAR_14 = VAR_7->pWC;
  struct sqlite3_index_constraint *VAR_15;
  struct sqlite3_index_constraint_usage *VAR_16 = VAR_11->aConstraintUsage;
  int VAR_17;
  int VAR_18;
  int VAR_19 = VAR_4;
  WhereLoop *VAR_20 = VAR_7->pNew;
  Parse *VAR_21 = VAR_7->pWInfo->pParse;
  struct SrcList_item *VAR_22 = &VAR_7->pWInfo->pTabList->a[VAR_20->iTab];
  int VAR_23 = VAR_11->nConstraint;

  FUNC_1( (VAR_9 & VAR_8)==VAR_8 );
  *VAR_13 = 0;
  VAR_20->prereq = VAR_8;



  VAR_15 = *(struct sqlite3_index_constraint**)&VAR_11->aConstraint;
  for(VAR_17=0; VAR_17<VAR_23; VAR_17++, VAR_15++){
    WhereTerm *VAR_24 = &VAR_14->a[VAR_15->iTermOffset];
    VAR_15->usable = 0;
    if( (VAR_24->prereqRight & VAR_9)==VAR_24->prereqRight
     && (VAR_24->eOperator & VAR_10)==0
    ){
      VAR_15->usable = 1;
    }
  }


  FUNC_2(VAR_16, 0, sizeof(VAR_16[0])*VAR_23);
  FUNC_1( VAR_11->needToFreeIdxStr==0 );
  VAR_11->idxStr = 0;
  VAR_11->idxNum = 0;
  VAR_11->orderByConsumed = 0;
  VAR_11->estimatedCost = VAR_0 / (double)2;
  VAR_11->estimatedRows = 25;
  VAR_11->idxFlags = 0;
  VAR_11->colUsed = (sqlite3_int64)VAR_22->colUsed;


  VAR_19 = FUNC_8(VAR_21, VAR_22->pTab, VAR_11);
  if( VAR_19 ){
    if( VAR_19==VAR_1 ){




      FUNC_0(0xffff, ("  ^^^^--- non-viable plan rejected!\n"));
      return VAR_4;
    }
    return VAR_19;
  }

  VAR_18 = -1;
  FUNC_1( VAR_20->nLSlot>=VAR_23 );
  for(VAR_17=0; VAR_17<VAR_23; VAR_17++) VAR_20->aLTerm[VAR_17] = 0;
  VAR_20->u.vtab.omitMask = 0;
  VAR_15 = *(struct sqlite3_index_constraint**)&VAR_11->aConstraint;
  for(VAR_17=0; VAR_17<VAR_23; VAR_17++, VAR_15++){
    int VAR_25;
    if( (VAR_25 = VAR_16[VAR_17].argvIndex - 1)>=0 ){
      WhereTerm *VAR_26;
      int VAR_27 = VAR_15->iTermOffset;
      if( VAR_25>=VAR_23
       || VAR_27<0
       || VAR_27>=VAR_14->nTerm
       || VAR_20->aLTerm[VAR_25]!=0
       || VAR_15->usable==0
      ){
        FUNC_3(VAR_21,"%s.xBestIndex malfunction",VAR_22->pTab->zName);
        FUNC_7( VAR_11->needToFreeIdxStr );
        return VAR_2;
      }
      FUNC_7( VAR_25==VAR_23-1 );
      FUNC_7( VAR_27==0 );
      FUNC_7( VAR_27==VAR_14->nTerm-1 );
      VAR_26 = &VAR_14->a[VAR_27];
      VAR_20->prereq |= VAR_26->prereqRight;
      FUNC_1( VAR_25<VAR_20->nLSlot );
      VAR_20->aLTerm[VAR_25] = VAR_26;
      if( VAR_25>VAR_18 ) VAR_18 = VAR_25;
      FUNC_7( VAR_25==15 );
      FUNC_7( VAR_25==16 );
      if( VAR_25<16 && VAR_16[VAR_17].omit ) VAR_20->u.vtab.omitMask |= 1<<VAR_25;
      if( (VAR_26->eOperator & VAR_6)!=0 ){





        VAR_11->orderByConsumed = 0;
        VAR_11->idxFlags &= ~VAR_3;
        *VAR_13 = 1; FUNC_1( (VAR_10 & VAR_6)==0 );
      }
    }
  }
  VAR_20->u.vtab.omitMask &= ~VAR_12;

  VAR_20->nLTerm = VAR_18+1;
  for(VAR_17=0; VAR_17<=VAR_18; VAR_17++){
    if( VAR_20->aLTerm[VAR_17]==0 ){


      FUNC_3(VAR_21,"%s.xBestIndex malfunction",VAR_22->pTab->zName);
      FUNC_7( VAR_11->needToFreeIdxStr );
      return VAR_2;
    }
  }
  FUNC_1( VAR_20->nLTerm<=VAR_20->nLSlot );
  VAR_20->u.vtab.idxNum = VAR_11->idxNum;
  VAR_20->u.vtab.needFree = VAR_11->needToFreeIdxStr;
  VAR_11->needToFreeIdxStr = 0;
  VAR_20->u.vtab.idxStr = VAR_11->idxStr;
  VAR_20->u.vtab.isOrdered = (i8)(VAR_11->orderByConsumed ?
      VAR_11->nOrderBy : 0);
  VAR_20->rSetup = 0;
  VAR_20->rRun = FUNC_5(VAR_11->estimatedCost);
  VAR_20->nOut = FUNC_4(VAR_11->estimatedRows);



  if( VAR_11->idxFlags & VAR_3 ){
    VAR_20->wsFlags |= VAR_5;
  }else{
    VAR_20->wsFlags &= ~VAR_5;
  }
  VAR_19 = FUNC_9(VAR_7, VAR_20);
  if( VAR_20->u.vtab.needFree ){
    FUNC_6(VAR_20->u.vtab.idxStr);
    VAR_20->u.vtab.needFree = 0;
  }
  FUNC_0(0xffff, ("  bIn=%d prereqIn=%04llx prereqOut=%04llx\n",
                      *VAR_13, (sqlite3_uint64)VAR_8,
                      (sqlite3_uint64)(VAR_20->prereq & ~VAR_8)));

  return VAR_19;
}
