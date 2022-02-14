
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct SrcList_item {int iSelectId; int zName; int zAlias; int pTab; scalar_t__ pSelect; } ;
typedef int sqlite3_int64 ;
struct TYPE_15__ {int idxStr; int idxNum; } ;
typedef TYPE_4__ sqlite3_index_info ;
typedef int sqlite3 ;
struct TYPE_13__ {TYPE_4__* pVtabIdx; TYPE_1__* pIdx; } ;
struct TYPE_14__ {int wsFlags; scalar_t__ nEq; scalar_t__ nRow; TYPE_2__ u; } ;
struct TYPE_16__ {size_t iFrom; TYPE_3__ plan; } ;
typedef TYPE_5__ WhereLevel ;
typedef int Vdbe ;
struct TYPE_18__ {int explain; int iSelectId; int * db; int * pVdbe; } ;
struct TYPE_17__ {struct SrcList_item* a; } ;
struct TYPE_12__ {char* zName; } ;
typedef TYPE_6__ SrcList ;
typedef TYPE_7__ Parse ;


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
 char* FUNC_0 (int *,TYPE_5__*,int ) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*,char*,char*,...) ;
 char* FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,int ,int,int,int,char*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(
  Parse *VAR_15,
  SrcList *VAR_16,
  WhereLevel *VAR_17,
  int VAR_18,
  int VAR_19,
  u16 VAR_20
){
  if( VAR_15->explain==2 ){
    u32 VAR_21 = VAR_17->plan.wsFlags;
    struct SrcList_item *VAR_22 = &VAR_16->a[VAR_17->iFrom];
    Vdbe *VAR_23 = VAR_15->pVdbe;
    sqlite3 *VAR_24 = VAR_15->db;
    char *VAR_25;
    sqlite3_int64 VAR_26;
    int VAR_27 = VAR_15->iSelectId;
    int VAR_28;

    if( (VAR_21&VAR_6) || (VAR_20&VAR_7) ) return;

    VAR_28 = (VAR_17->plan.nEq>0)
             || (VAR_21&(VAR_3|VAR_13))!=0
             || (VAR_20&(VAR_9|VAR_8));

    VAR_25 = FUNC_3(VAR_24, "%s", VAR_28?"SEARCH":"SCAN");
    if( VAR_22->pSelect ){
      VAR_25 = FUNC_2(VAR_24, VAR_25, "%s SUBQUERY %d", VAR_25,VAR_22->iSelectId);
    }else{
      VAR_25 = FUNC_2(VAR_24, VAR_25, "%s TABLE %s", VAR_25, VAR_22->zName);
    }

    if( VAR_22->zAlias ){
      VAR_25 = FUNC_2(VAR_24, VAR_25, "%s AS %s", VAR_25, VAR_22->zAlias);
    }
    if( (VAR_21 & VAR_5)!=0 ){
      char *VAR_29 = FUNC_0(VAR_24, VAR_17, VAR_22->pTab);
      VAR_25 = FUNC_2(VAR_24, VAR_25, "%s USING %s%sINDEX%s%s%s", VAR_25,
          ((VAR_21 & VAR_12)?"AUTOMATIC ":""),
          ((VAR_21 & VAR_4)?"COVERING ":""),
          ((VAR_21 & VAR_12)?"":" "),
          ((VAR_21 & VAR_12)?"": VAR_17->plan.u.pIdx->zName),
          VAR_29
      );
      FUNC_1(VAR_24, VAR_29);
    }else if( VAR_21 & (VAR_10|VAR_11) ){
      VAR_25 = FUNC_2(VAR_24, VAR_25, "%s USING INTEGER PRIMARY KEY", VAR_25);

      if( VAR_21&VAR_10 ){
        VAR_25 = FUNC_2(VAR_24, VAR_25, "%s (rowid=?)", VAR_25);
      }else if( (VAR_21&VAR_2)==VAR_2 ){
        VAR_25 = FUNC_2(VAR_24, VAR_25, "%s (rowid>? AND rowid<?)", VAR_25);
      }else if( VAR_21&VAR_3 ){
        VAR_25 = FUNC_2(VAR_24, VAR_25, "%s (rowid>?)", VAR_25);
      }else if( VAR_21&VAR_13 ){
        VAR_25 = FUNC_2(VAR_24, VAR_25, "%s (rowid<?)", VAR_25);
      }
    }

    else if( (VAR_21 & VAR_14)!=0 ){
      sqlite3_index_info *VAR_30 = VAR_17->plan.u.pVtabIdx;
      VAR_25 = FUNC_2(VAR_24, VAR_25, "%s VIRTUAL TABLE INDEX %d:%s", VAR_25,
                  VAR_30->idxNum, VAR_30->idxStr);
    }

    if( VAR_20&(VAR_9|VAR_8) ){
      FUNC_5( VAR_20 & VAR_9 );
      VAR_26 = 1;
    }else{
      VAR_26 = (sqlite3_int64)VAR_17->plan.nRow;
    }
    VAR_25 = FUNC_2(VAR_24, VAR_25, "%s (~%lld rows)", VAR_25, VAR_26);
    FUNC_4(VAR_23, VAR_0, VAR_27, VAR_18, VAR_19, VAR_25, VAR_1);
  }
}
