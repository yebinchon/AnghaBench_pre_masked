
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_21__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int u16 ;
struct SrcList_item {TYPE_21__* pTab; } ;
typedef int sqlite3_uint64 ;
struct TYPE_30__ {int nConstraint; int idxStr; scalar_t__ needToFreeIdxStr; TYPE_5__* aConstraint; } ;
typedef TYPE_6__ sqlite3_index_info ;
struct TYPE_31__ {int pOrderBy; TYPE_8__* pNew; TYPE_10__* pWC; TYPE_9__* pWInfo; } ;
typedef TYPE_7__ WhereLoopBuilder ;
struct TYPE_26__ {scalar_t__ needFree; } ;
struct TYPE_27__ {TYPE_2__ vtab; } ;
struct TYPE_32__ {size_t iTab; scalar_t__ prereq; TYPE_3__ u; scalar_t__ nLTerm; int wsFlags; scalar_t__ rSetup; } ;
typedef TYPE_8__ WhereLoop ;
struct TYPE_33__ {TYPE_1__* pTabList; TYPE_11__* pParse; } ;
typedef TYPE_9__ WhereInfo ;
struct TYPE_22__ {TYPE_4__* a; } ;
typedef TYPE_10__ WhereClause ;
struct TYPE_29__ {size_t iTermOffset; } ;
struct TYPE_28__ {scalar_t__ prereqRight; } ;
struct TYPE_25__ {int zName; } ;
struct TYPE_24__ {struct SrcList_item* a; } ;
struct TYPE_23__ {int db; } ;
typedef TYPE_11__ Parse ;
typedef scalar_t__ Bitmask ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_21__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_2 (TYPE_11__*,TYPE_10__*,scalar_t__,struct SrcList_item*,int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_6__*) ;
 int FUNC_5 (int ,TYPE_6__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_7__*,scalar_t__,scalar_t__,int ,TYPE_6__*,int ,int*) ;
 scalar_t__ FUNC_8 (int ,TYPE_8__*,int) ;

__attribute__((used)) static int FUNC_9(
  WhereLoopBuilder *VAR_5,
  Bitmask VAR_6,
  Bitmask VAR_7
){
  int VAR_8 = VAR_2;
  WhereInfo *VAR_9;
  Parse *VAR_10;
  WhereClause *VAR_11;
  struct SrcList_item *VAR_12;
  sqlite3_index_info *VAR_13;
  int VAR_14;
  int VAR_15;
  WhereLoop *VAR_16;
  Bitmask VAR_17;
  u16 VAR_18;

  FUNC_3( (VAR_6 & VAR_7)==0 );
  VAR_9 = VAR_5->pWInfo;
  VAR_10 = VAR_9->pParse;
  VAR_11 = VAR_5->pWC;
  VAR_16 = VAR_5->pNew;
  VAR_12 = &VAR_9->pTabList->a[VAR_16->iTab];
  FUNC_3( FUNC_0(VAR_12->pTab) );
  VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_7, VAR_12, VAR_5->pOrderBy,
      &VAR_18);
  if( VAR_13==0 ) return VAR_1;
  VAR_16->rSetup = 0;
  VAR_16->wsFlags = VAR_3;
  VAR_16->nLTerm = 0;
  VAR_16->u.vtab.needFree = 0;
  VAR_14 = VAR_13->nConstraint;
  if( FUNC_8(VAR_10->db, VAR_16, VAR_14) ){
    FUNC_4(VAR_10->db, VAR_13);
    return VAR_1;
  }


  FUNC_1(0x800, ("BEGIN %s.addVirtual()\n", VAR_12->pTab->zName));
  FUNC_1(0x40, ("  VirtualOne: all usable\n"));
  VAR_8 = FUNC_7(VAR_5, VAR_6, VAR_0, 0, VAR_13, VAR_18, &VAR_15);






  if( VAR_8==VAR_2 && (VAR_17 = (VAR_16->prereq & ~VAR_6))!=0 ){
    int VAR_19 = 0;
    int VAR_20 = 0;
    Bitmask VAR_21 = 0;
    Bitmask VAR_22 = 0;



    if( VAR_15 ){
      FUNC_1(0x40, ("  VirtualOne: all usable w/o IN\n"));
      VAR_8 = FUNC_7(
          VAR_5, VAR_6, VAR_0, VAR_4, VAR_13, VAR_18, &VAR_15);
      FUNC_3( VAR_15==0 );
      VAR_22 = VAR_16->prereq & ~VAR_6;
      if( VAR_22==0 ){
        VAR_19 = 1;
        VAR_20 = 1;
      }
    }



    while( VAR_8==VAR_2 ){
      int VAR_23;
      Bitmask VAR_24 = VAR_0;
      FUNC_3( VAR_24>0 );
      for(VAR_23=0; VAR_23<VAR_14; VAR_23++){
        Bitmask VAR_25 = (
            VAR_11->a[VAR_13->aConstraint[VAR_23].iTermOffset].prereqRight & ~VAR_6
        );
        if( VAR_25>VAR_21 && VAR_25<VAR_24 ) VAR_24 = VAR_25;
      }
      VAR_21 = VAR_24;
      if( VAR_24==VAR_0 ) break;
      if( VAR_24==VAR_17 || VAR_24==VAR_22 ) continue;
      FUNC_1(0x40, ("  VirtualOne: mPrev=%04llx mNext=%04llx\n",
                       (sqlite3_uint64)VAR_21, (sqlite3_uint64)VAR_24));
      VAR_8 = FUNC_7(
          VAR_5, VAR_6, VAR_24|VAR_6, 0, VAR_13, VAR_18, &VAR_15);
      if( VAR_16->prereq==VAR_6 ){
        VAR_19 = 1;
        if( VAR_15==0 ) VAR_20 = 1;
      }
    }




    if( VAR_8==VAR_2 && VAR_19==0 ){
      FUNC_1(0x40, ("  VirtualOne: all disabled\n"));
      VAR_8 = FUNC_7(
          VAR_5, VAR_6, VAR_6, 0, VAR_13, VAR_18, &VAR_15);
      if( VAR_15==0 ) VAR_20 = 1;
    }




    if( VAR_8==VAR_2 && VAR_20==0 ){
      FUNC_1(0x40, ("  VirtualOne: all disabled and w/o IN\n"));
      VAR_8 = FUNC_7(
          VAR_5, VAR_6, VAR_6, VAR_4, VAR_13, VAR_18, &VAR_15);
    }
  }

  if( VAR_13->needToFreeIdxStr ) FUNC_6(VAR_13->idxStr);
  FUNC_5(VAR_10->db, VAR_13);
  FUNC_1(0x800, ("END %s.addVirtual(), rc=%d\n", VAR_12->pTab->zName, VAR_8));
  return VAR_8;
}
