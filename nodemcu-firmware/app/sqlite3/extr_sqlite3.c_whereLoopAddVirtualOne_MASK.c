
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
struct TYPE_21__ {int nConstraint; scalar_t__ needToFreeIdxStr; double estimatedCost; int estimatedRows; int idxFlags; scalar_t__ nOrderBy; scalar_t__ orderByConsumed; scalar_t__ idxStr; scalar_t__ idxNum; int aConstraint; scalar_t__ colUsed; struct sqlite3_index_constraint_usage* aConstraintUsage; } ;
typedef TYPE_5__ sqlite3_index_info ;
typedef int pUsage ;
typedef scalar_t__ i8 ;
struct TYPE_22__ {int prereqRight; int eOperator; } ;
typedef TYPE_6__ WhereTerm ;
struct TYPE_23__ {TYPE_2__* pWInfo; TYPE_8__* pNew; TYPE_9__* pWC; } ;
typedef TYPE_7__ WhereLoopBuilder ;
struct TYPE_19__ {int omitMask; scalar_t__ needFree; scalar_t__ idxStr; scalar_t__ isOrdered; scalar_t__ idxNum; } ;
struct TYPE_20__ {TYPE_3__ vtab; } ;
struct TYPE_24__ {size_t iTab; int prereq; int nLSlot; int nLTerm; TYPE_4__ u; int wsFlags; int nOut; int rRun; scalar_t__ rSetup; TYPE_6__** aLTerm; } ;
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
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
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
  WhereLoopBuilder *VAR_6,
  Bitmask VAR_7,
  Bitmask VAR_8,
  u16 VAR_9,
  sqlite3_index_info *VAR_10,
  u16 VAR_11,
  int *VAR_12
){
  WhereClause *VAR_13 = VAR_6->pWC;
  struct sqlite3_index_constraint *VAR_14;
  struct sqlite3_index_constraint_usage *VAR_15 = VAR_10->aConstraintUsage;
  int VAR_16;
  int VAR_17;
  int VAR_18 = VAR_3;
  WhereLoop *VAR_19 = VAR_6->pNew;
  Parse *VAR_20 = VAR_6->pWInfo->pParse;
  struct SrcList_item *VAR_21 = &VAR_6->pWInfo->pTabList->a[VAR_19->iTab];
  int VAR_22 = VAR_10->nConstraint;

  FUNC_1( (VAR_8 & VAR_7)==VAR_7 );
  *VAR_12 = 0;
  VAR_19->prereq = VAR_7;



  VAR_14 = *(struct sqlite3_index_constraint**)&VAR_10->aConstraint;
  for(VAR_16=0; VAR_16<VAR_22; VAR_16++, VAR_14++){
    WhereTerm *VAR_23 = &VAR_13->a[VAR_14->iTermOffset];
    VAR_14->usable = 0;
    if( (VAR_23->prereqRight & VAR_8)==VAR_23->prereqRight
     && (VAR_23->eOperator & VAR_9)==0
    ){
      VAR_14->usable = 1;
    }
  }


  FUNC_2(VAR_15, 0, sizeof(VAR_15[0])*VAR_22);
  FUNC_1( VAR_10->needToFreeIdxStr==0 );
  VAR_10->idxStr = 0;
  VAR_10->idxNum = 0;
  VAR_10->orderByConsumed = 0;
  VAR_10->estimatedCost = VAR_0 / (double)2;
  VAR_10->estimatedRows = 25;
  VAR_10->idxFlags = 0;
  VAR_10->colUsed = (sqlite3_int64)VAR_21->colUsed;


  VAR_18 = FUNC_8(VAR_20, VAR_21->pTab, VAR_10);
  if( VAR_18 ) return VAR_18;

  VAR_17 = -1;
  FUNC_1( VAR_19->nLSlot>=VAR_22 );
  for(VAR_16=0; VAR_16<VAR_22; VAR_16++) VAR_19->aLTerm[VAR_16] = 0;
  VAR_19->u.vtab.omitMask = 0;
  VAR_14 = *(struct sqlite3_index_constraint**)&VAR_10->aConstraint;
  for(VAR_16=0; VAR_16<VAR_22; VAR_16++, VAR_14++){
    int VAR_24;
    if( (VAR_24 = VAR_15[VAR_16].argvIndex - 1)>=0 ){
      WhereTerm *VAR_25;
      int VAR_26 = VAR_14->iTermOffset;
      if( VAR_24>=VAR_22
       || VAR_26<0
       || VAR_26>=VAR_13->nTerm
       || VAR_19->aLTerm[VAR_24]!=0
       || VAR_14->usable==0
      ){
        VAR_18 = VAR_1;
        FUNC_3(VAR_20,"%s.xBestIndex malfunction",VAR_21->pTab->zName);
        return VAR_18;
      }
      FUNC_7( VAR_24==VAR_22-1 );
      FUNC_7( VAR_26==0 );
      FUNC_7( VAR_26==VAR_13->nTerm-1 );
      VAR_25 = &VAR_13->a[VAR_26];
      VAR_19->prereq |= VAR_25->prereqRight;
      FUNC_1( VAR_24<VAR_19->nLSlot );
      VAR_19->aLTerm[VAR_24] = VAR_25;
      if( VAR_24>VAR_17 ) VAR_17 = VAR_24;
      FUNC_7( VAR_24==15 );
      FUNC_7( VAR_24==16 );
      if( VAR_24<16 && VAR_15[VAR_16].omit ) VAR_19->u.vtab.omitMask |= 1<<VAR_24;
      if( (VAR_25->eOperator & VAR_5)!=0 ){





        VAR_10->orderByConsumed = 0;
        VAR_10->idxFlags &= ~VAR_2;
        *VAR_12 = 1; FUNC_1( (VAR_9 & VAR_5)==0 );
      }
    }
  }
  VAR_19->u.vtab.omitMask &= ~VAR_11;

  VAR_19->nLTerm = VAR_17+1;
  FUNC_1( VAR_19->nLTerm<=VAR_19->nLSlot );
  VAR_19->u.vtab.idxNum = VAR_10->idxNum;
  VAR_19->u.vtab.needFree = VAR_10->needToFreeIdxStr;
  VAR_10->needToFreeIdxStr = 0;
  VAR_19->u.vtab.idxStr = VAR_10->idxStr;
  VAR_19->u.vtab.isOrdered = (i8)(VAR_10->orderByConsumed ?
      VAR_10->nOrderBy : 0);
  VAR_19->rSetup = 0;
  VAR_19->rRun = FUNC_5(VAR_10->estimatedCost);
  VAR_19->nOut = FUNC_4(VAR_10->estimatedRows);



  if( VAR_10->idxFlags & VAR_2 ){
    VAR_19->wsFlags |= VAR_4;
  }else{
    VAR_19->wsFlags &= ~VAR_4;
  }
  VAR_18 = FUNC_9(VAR_6, VAR_19);
  if( VAR_19->u.vtab.needFree ){
    FUNC_6(VAR_19->u.vtab.idxStr);
    VAR_19->u.vtab.needFree = 0;
  }
  FUNC_0(0xffff, ("  bIn=%d prereqIn=%04llx prereqOut=%04llx\n",
                      *VAR_12, (sqlite3_uint64)VAR_7,
                      (sqlite3_uint64)(VAR_19->prereq & ~VAR_7)));

  return VAR_18;
}
