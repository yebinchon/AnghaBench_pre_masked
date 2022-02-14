
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3_stmt ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3 ;
struct TYPE_11__ {int bSwarm; int nSrc; int iPK; TYPE_2__* aSrc; scalar_t__ bHasContext; int nMaxOpen; int * db; } ;
typedef TYPE_1__ UnionTab ;
struct TYPE_12__ {scalar_t__ iMax; void* zDb; void* zTab; void* zContext; void* zFile; scalar_t__ iMin; } ;
typedef TYPE_2__ UnionSrc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*) ;
 char* FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char*,char const* const) ;
 int FUNC_10 (int*,TYPE_1__*,int *,int,char const* const*,char**) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int*,int *,char**) ;
 int * FUNC_14 (TYPE_1__*,TYPE_2__*) ;
 TYPE_1__* FUNC_15 (int*,int) ;
 int FUNC_16 (TYPE_1__*,int ,char**) ;
 int * FUNC_17 (int*,char**,int *,char*,char*,...) ;
 int FUNC_18 (TYPE_1__*,char**) ;
 void* FUNC_19 (int*,char const*) ;

__attribute__((used)) static int FUNC_20(
  sqlite3 *VAR_5,
  void *VAR_6,
  int VAR_7, const char *const*VAR_8,
  sqlite3_vtab **VAR_9,
  char **VAR_10
){
  UnionTab *VAR_11 = 0;
  int VAR_12 = VAR_2;
  int VAR_13 = (VAR_6==0 ? 0 : 1);
  const char *VAR_14 = (VAR_13 ? "swarmvtab" : "unionvtab");

  if( FUNC_9("temp", VAR_8[1]) ){

    *VAR_10 = FUNC_6("%s tables must be created in TEMP schema", VAR_14);
    VAR_12 = VAR_0;
  }else if( VAR_7<4 || (VAR_7>4 && VAR_13==0) ){
    *VAR_10 = FUNC_6("wrong number of arguments for %s", VAR_14);
    VAR_12 = VAR_0;
  }else{
    int VAR_15 = 0;
    sqlite3_stmt *VAR_16 = 0;
    char *VAR_17 = FUNC_19(&VAR_12, VAR_8[3]);





    FUNC_11(VAR_17);
    VAR_16 = FUNC_17(&VAR_12, VAR_10, VAR_5,
        "SELECT * FROM (%z) ORDER BY 3", VAR_17
    );


    VAR_11 = FUNC_15(&VAR_12, sizeof(UnionTab));
    if( VAR_11 ){
      FUNC_0( VAR_12==VAR_2 );
      VAR_11->db = VAR_5;
      VAR_11->bSwarm = VAR_13;
      VAR_11->nMaxOpen = VAR_4;
    }


    if( VAR_13 ){
      FUNC_10(&VAR_12, VAR_11, VAR_16, VAR_7-4, &VAR_8[4], VAR_10);
    }



    while( VAR_12==VAR_2 && VAR_3==FUNC_8(VAR_16) ){
      const char *VAR_18 = (const char*)FUNC_4(VAR_16, 0);
      const char *VAR_19 = (const char*)FUNC_4(VAR_16, 1);
      sqlite3_int64 VAR_20 = FUNC_3(VAR_16, 2);
      sqlite3_int64 VAR_21 = FUNC_3(VAR_16, 3);
      UnionSrc *VAR_22;


      if( VAR_15<=VAR_11->nSrc ){
        int VAR_23 = VAR_15 ? VAR_15*2 : 8;
        UnionSrc *VAR_24 = (UnionSrc*)FUNC_7(
            VAR_11->aSrc, VAR_23*sizeof(UnionSrc)
        );
        if( VAR_24==0 ){
          VAR_12 = VAR_1;
          break;
        }else{
          FUNC_1(&VAR_24[VAR_11->nSrc], 0, (VAR_23-VAR_11->nSrc)*sizeof(UnionSrc));
          VAR_11->aSrc = VAR_24;
          VAR_15 = VAR_23;
        }
      }


      if( VAR_21<VAR_20 || (VAR_11->nSrc>0 && VAR_20<=VAR_11->aSrc[VAR_11->nSrc-1].iMax) ){
        *VAR_10 = FUNC_6("rowid range mismatch error");
        VAR_12 = VAR_0;
      }

      if( VAR_12==VAR_2 ){
        VAR_22 = &VAR_11->aSrc[VAR_11->nSrc++];
        VAR_22->zTab = FUNC_19(&VAR_12, VAR_19);
        VAR_22->iMin = VAR_20;
        VAR_22->iMax = VAR_21;
        if( VAR_13 ){
          VAR_22->zFile = FUNC_19(&VAR_12, VAR_18);
        }else{
          VAR_22->zDb = FUNC_19(&VAR_12, VAR_18);
        }
        if( VAR_11->bHasContext ){
          const char *VAR_25 = (const char*)FUNC_4(VAR_16, 4);
          VAR_22->zContext = FUNC_19(&VAR_12, VAR_25);
        }
      }
    }
    FUNC_13(&VAR_12, VAR_16, VAR_10);
    VAR_16 = 0;




    if( VAR_12==VAR_2 && VAR_11->nSrc==0 ){
      *VAR_10 = FUNC_6("no source tables configured");
      VAR_12 = VAR_0;
    }




    if( VAR_12==VAR_2 ){
      if( VAR_13 ){
        VAR_12 = FUNC_16(VAR_11, 0, VAR_10);
      }else{
        VAR_12 = FUNC_18(VAR_11, VAR_10);
      }
    }


    if( VAR_12==VAR_2 ){
      UnionSrc *VAR_26 = &VAR_11->aSrc[0];
      sqlite3 *VAR_27 = FUNC_14(VAR_11, VAR_26);
      VAR_16 = FUNC_17(&VAR_12, VAR_10, VAR_27, "SELECT "
          "'CREATE TABLE xyz('"
          "    || group_concat(quote(name) || ' ' || type, ', ')"
          "    || ')',"
          "max((cid+1) * (type='INTEGER' COLLATE nocase AND pk=1))-1 "
          "FROM pragma_table_info(%Q, ?)",
          VAR_26->zTab, VAR_26->zDb
      );
    }
    if( VAR_12==VAR_2 && VAR_3==FUNC_8(VAR_16) ){
      const char *VAR_28 = (const char*)FUNC_4(VAR_16, 0);
      VAR_12 = FUNC_5(VAR_5, VAR_28);
      VAR_11->iPK = FUNC_2(VAR_16, 1);
    }

    FUNC_13(&VAR_12, VAR_16, VAR_10);
  }

  if( VAR_12!=VAR_2 ){
    FUNC_12((sqlite3_vtab*)VAR_11);
    VAR_11 = 0;
  }

  *VAR_9 = (sqlite3_vtab*)VAR_11;
  return VAR_12;
}
