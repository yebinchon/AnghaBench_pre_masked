
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef int zBuf ;
typedef int u32 ;
typedef int u16 ;
struct SrcList_item {char const* zName; char const* zAlias; int pTab; TYPE_1__* pSelect; } ;
typedef int sqlite3 ;
struct TYPE_20__ {int idxStr; int idxNum; } ;
struct TYPE_19__ {scalar_t__ nEq; TYPE_9__* pIndex; } ;
struct TYPE_21__ {TYPE_3__ vtab; TYPE_2__ btree; } ;
struct TYPE_22__ {int wsFlags; int nOut; TYPE_4__ u; } ;
typedef TYPE_5__ WhereLoop ;
struct TYPE_23__ {size_t iFrom; TYPE_5__* pWLoop; } ;
typedef TYPE_6__ WhereLevel ;
typedef int Vdbe ;
struct TYPE_26__ {char const* zName; } ;
struct TYPE_25__ {int addrExplain; int * db; int * pVdbe; } ;
struct TYPE_24__ {struct SrcList_item* a; } ;
struct TYPE_18__ {char const* selId; } ;
struct TYPE_17__ {int explain; } ;
typedef int StrAccum ;
typedef TYPE_7__ SrcList ;
typedef TYPE_8__ Parse ;
typedef TYPE_9__ Index ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_9__*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (char*,char*) ;
 char const* FUNC_5 (int) ;
 TYPE_13__* FUNC_6 (TYPE_8__*) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,char*,int,int ) ;
 int FUNC_9 (int *,int ,int ,int ,int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,char const*,char const*,...) ;

int FUNC_14(
  Parse *VAR_18,
  SrcList *VAR_19,
  WhereLevel *VAR_20,
  u16 VAR_21
){
  int VAR_22 = 0;

  if( FUNC_6(VAR_18)->explain==2 )

  {
    struct SrcList_item *VAR_23 = &VAR_19->a[VAR_20->iFrom];
    Vdbe *VAR_24 = VAR_18->pVdbe;
    sqlite3 *VAR_25 = VAR_18->db;
    int VAR_26;
    WhereLoop *VAR_27;
    u32 VAR_28;
    char *VAR_29;
    StrAccum VAR_30;
    char VAR_31[100];

    VAR_27 = VAR_20->pWLoop;
    VAR_28 = VAR_27->wsFlags;
    if( (VAR_28&VAR_11) || (VAR_21&VAR_14) ) return 0;

    VAR_26 = (VAR_28&(VAR_5|VAR_16))!=0
            || ((VAR_28&VAR_17)==0 && (VAR_27->u.btree.nEq>0))
            || (VAR_21&(VAR_13|VAR_12));

    FUNC_8(&VAR_30, VAR_25, VAR_31, sizeof(VAR_31), VAR_2);
    FUNC_12(&VAR_30, VAR_26 ? "SEARCH" : "SCAN");
    if( VAR_23->pSelect ){
      FUNC_13(&VAR_30, " SUBQUERY %u", VAR_23->pSelect->selId);
    }else{
      FUNC_13(&VAR_30, " TABLE %s", VAR_23->zName);
    }

    if( VAR_23->zAlias ){
      FUNC_13(&VAR_30, " AS %s", VAR_23->zAlias);
    }
    if( (VAR_28 & (VAR_10|VAR_17))==0 ){
      const char *VAR_32 = 0;
      Index *VAR_33;

      FUNC_2( VAR_27->u.btree.pIndex!=0 );
      VAR_33 = VAR_27->u.btree.pIndex;
      FUNC_2( !(VAR_28&VAR_3) || (VAR_28&VAR_9) );
      if( !FUNC_0(VAR_23->pTab) && FUNC_1(VAR_33) ){
        if( VAR_26 ){
          VAR_32 = "PRIMARY KEY";
        }
      }else if( VAR_28 & VAR_15 ){
        VAR_32 = "AUTOMATIC PARTIAL COVERING INDEX";
      }else if( VAR_28 & VAR_3 ){
        VAR_32 = "AUTOMATIC COVERING INDEX";
      }else if( VAR_28 & VAR_9 ){
        VAR_32 = "COVERING INDEX %s";
      }else{
        VAR_32 = "INDEX %s";
      }
      if( VAR_32 ){
        FUNC_11(&VAR_30, " USING ", 7);
        FUNC_13(&VAR_30, VAR_32, VAR_33->zName);
        FUNC_3(&VAR_30, VAR_27);
      }
    }else if( (VAR_28 & VAR_10)!=0 && (VAR_28 & VAR_8)!=0 ){
      const char *VAR_34;
      if( VAR_28&(VAR_6|VAR_7) ){
        VAR_34 = "=";
      }else if( (VAR_28&VAR_4)==VAR_4 ){
        VAR_34 = ">? AND rowid<";
      }else if( VAR_28&VAR_5 ){
        VAR_34 = ">";
      }else{
        FUNC_2( VAR_28&VAR_16);
        VAR_34 = "<";
      }
      FUNC_13(&VAR_30,
          " USING INTEGER PRIMARY KEY (rowid%s?)",VAR_34);
    }

    else if( (VAR_28 & VAR_17)!=0 ){
      FUNC_13(&VAR_30, " VIRTUAL TABLE INDEX %d:%s",
                  VAR_27->u.vtab.idxNum, VAR_27->u.vtab.idxStr);
    }
    VAR_29 = FUNC_7(&VAR_30);
    FUNC_4("",VAR_29);
    VAR_22 = FUNC_9(VAR_24, VAR_0, FUNC_10(VAR_24),
                            VAR_18->addrExplain, 0, VAR_29,VAR_1);
  }
  return VAR_22;
}
