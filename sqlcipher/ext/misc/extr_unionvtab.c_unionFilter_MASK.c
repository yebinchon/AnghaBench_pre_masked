
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ pVtab; } ;
typedef TYPE_2__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3 ;
struct TYPE_13__ {int zErrMsg; } ;
struct TYPE_15__ {int nSrc; TYPE_1__ base; TYPE_4__* aSrc; scalar_t__ bSwarm; } ;
typedef TYPE_3__ UnionTab ;
struct TYPE_16__ {scalar_t__ iMax; scalar_t__ iMin; char* zDb; int zTab; } ;
typedef TYPE_4__ UnionSrc ;
struct TYPE_17__ {int iTab; int pStmt; scalar_t__ iMaxRowid; } ;
typedef TYPE_5__ UnionCsr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*,char const*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*) ;
 int * FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,size_t) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,int,int *) ;
 int FUNC_9 (int*,int *,char*,int *) ;

__attribute__((used)) static int FUNC_10(
  sqlite3_vtab_cursor *VAR_9,
  int VAR_10, const char *VAR_11,
  int VAR_12, sqlite3_value **VAR_13
){
  UnionTab *VAR_14 = (UnionTab*)(VAR_9->pVtab);
  UnionCsr *VAR_15 = (UnionCsr*)VAR_9;
  int VAR_16 = VAR_8;
  int VAR_17;
  char *VAR_18 = 0;
  int VAR_19 = 0;

  sqlite3_int64 VAR_20 = VAR_1;
  sqlite3_int64 VAR_21 = VAR_0;

  FUNC_0( VAR_10==0
       || VAR_10==VAR_2
       || VAR_10==VAR_5
       || VAR_10==VAR_3
       || VAR_10==VAR_6
       || VAR_10==VAR_4
       || VAR_10==(VAR_3|VAR_5)
  );

  (void)VAR_11;

  if( VAR_10==VAR_2 ){
    FUNC_0( VAR_12==1 );
    VAR_20 = VAR_21 = FUNC_3(VAR_13[0]);
  }else{

    if( VAR_10 & (VAR_5|VAR_6) ){
      FUNC_0( VAR_12>=1 );
      VAR_21 = FUNC_3(VAR_13[0]);
      if( VAR_10 & VAR_6 ){
        if( VAR_21==VAR_1 ){
          VAR_19 = 1;
        }else{
          VAR_21--;
        }
      }
    }

    if( VAR_10 & (VAR_3|VAR_4) ){
      FUNC_0( VAR_12>=1 );
      VAR_20 = FUNC_3(VAR_13[VAR_12-1]);
      if( VAR_10 & VAR_4 ){
        if( VAR_20==VAR_0 ){
          VAR_19 = 1;
        }else{
          VAR_20++;
        }
      }
    }
  }

  FUNC_4(VAR_15);
  if( VAR_19 ){
    return VAR_8;
  }

  for(VAR_17=0; VAR_17<VAR_14->nSrc; VAR_17++){
    UnionSrc *VAR_22 = &VAR_14->aSrc[VAR_17];
    if( VAR_20>VAR_22->iMax || VAR_21<VAR_22->iMin ){
      continue;
    }

    VAR_18 = FUNC_2("%z%sSELECT rowid, * FROM %s%q%s%Q"
        , VAR_18
        , (VAR_18 ? " UNION ALL " : "")
        , (VAR_22->zDb ? "'" : "")
        , (VAR_22->zDb ? VAR_22->zDb : "")
        , (VAR_22->zDb ? "'." : "")
        , VAR_22->zTab
    );
    if( VAR_18==0 ){
      VAR_16 = VAR_7;
      break;
    }

    if( VAR_20==VAR_21 ){
      VAR_18 = FUNC_2("%z WHERE rowid=%lld", VAR_18, VAR_20);
    }else{
      const char *VAR_23 = "WHERE";
      if( VAR_20!=VAR_1 && VAR_20>VAR_22->iMin ){
        VAR_18 = FUNC_2("%z WHERE rowid>=%lld", VAR_18, VAR_20);
        VAR_23 = "AND";
      }
      if( VAR_21!=VAR_0 && VAR_21<VAR_22->iMax ){
        VAR_18 = FUNC_2("%z %s rowid<=%lld", VAR_18, VAR_23, VAR_21);
      }
    }

    if( VAR_14->bSwarm ){
      VAR_15->iTab = VAR_17;
      VAR_15->iMaxRowid = VAR_21;
      VAR_16 = FUNC_8(VAR_14, VAR_17, &VAR_14->base.zErrMsg);
      break;
    }
  }

  if( VAR_18==0 ){
    return VAR_16;
  }else{
    sqlite3 *VAR_24 = FUNC_5(VAR_14, &VAR_14->aSrc[VAR_15->iTab]);
    VAR_15->pStmt = FUNC_9(&VAR_16, VAR_24, VAR_18, &VAR_14->base.zErrMsg);
    if( VAR_15->pStmt ){
      FUNC_6(VAR_14, VAR_15->iTab);
    }
    FUNC_1(VAR_18);
  }
  if( VAR_16!=VAR_8 ) return VAR_16;
  return FUNC_7(VAR_9);
}
