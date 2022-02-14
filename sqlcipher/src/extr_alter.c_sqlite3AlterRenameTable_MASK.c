
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_40__ {int mDbFlags; TYPE_1__* aDb; int mallocFailed; } ;
typedef TYPE_4__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_41__ {TYPE_3__* pVtab; } ;
typedef TYPE_5__ VTable ;
typedef int Token ;
struct TYPE_42__ {char* zName; scalar_t__ pSelect; int pSchema; } ;
typedef TYPE_6__ Table ;
struct TYPE_44__ {int nMem; TYPE_4__* db; } ;
struct TYPE_43__ {int nSrc; int * a; } ;
struct TYPE_39__ {TYPE_2__* pModule; } ;
struct TYPE_38__ {scalar_t__ xRename; } ;
struct TYPE_37__ {char* zDbSName; } ;
typedef TYPE_7__ SrcList ;
typedef TYPE_8__ Parse ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_8__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_8__*,int) ;
 int FUNC_5 (TYPE_8__*,char*,int) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int ,char*,char*,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_8__*,char*) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 int FUNC_10 (TYPE_8__*,char*,char*) ;
 scalar_t__ FUNC_11 (TYPE_4__*,char*,char*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,char*,char*) ;
 TYPE_5__* FUNC_13 (TYPE_4__*,TYPE_6__*) ;
 int * FUNC_14 (TYPE_8__*) ;
 TYPE_6__* FUNC_15 (TYPE_8__*,int ,int *) ;
 int FUNC_16 (TYPE_8__*) ;
 char* FUNC_17 (TYPE_4__*,int *) ;
 int FUNC_18 (TYPE_8__*,char*,char*,char const*,char*,...) ;
 int FUNC_19 (TYPE_4__*,int ) ;
 int FUNC_20 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_21 (char const*,int) ;
 int FUNC_22 (int *,int ,int,int ,int ,char const*,int ) ;
 int FUNC_23 (int *,int,char*) ;
 scalar_t__ FUNC_24 (TYPE_8__*,TYPE_6__*) ;

void FUNC_25(
  Parse *VAR_6,
  SrcList *VAR_7,
  Token *VAR_8
){
  int VAR_9;
  char *VAR_10;
  Table *VAR_11;
  char *VAR_12 = 0;
  sqlite3 *VAR_13 = VAR_6->db;
  int VAR_14;
  const char *VAR_15;
  Vdbe *VAR_16;
  VTable *VAR_17 = 0;
  u32 VAR_18;

  VAR_18 = VAR_13->mDbFlags;
  if( FUNC_1(VAR_13->mallocFailed) ) goto exit_rename_table;
  FUNC_2( VAR_7->nSrc==1 );
  FUNC_2( FUNC_7(VAR_6->db) );

  VAR_11 = FUNC_15(VAR_6, 0, &VAR_7->a[0]);
  if( !VAR_11 ) goto exit_rename_table;
  VAR_9 = FUNC_19(VAR_6->db, VAR_11->pSchema);
  VAR_10 = VAR_13->aDb[VAR_9].zDbSName;
  VAR_13->mDbFlags |= VAR_0;


  VAR_12 = FUNC_17(VAR_13, VAR_8);
  if( !VAR_12 ) goto exit_rename_table;




  if( FUNC_12(VAR_13, VAR_12, VAR_10) || FUNC_11(VAR_13, VAR_12, VAR_10) ){
    FUNC_10(VAR_6,
        "there is already another table or index with this name: %s", VAR_12);
    goto exit_rename_table;
  }




  if( VAR_5!=FUNC_3(VAR_6, VAR_11) ){
    goto exit_rename_table;
  }
  if( VAR_5!=FUNC_8(VAR_6, VAR_12) ){ goto
    exit_rename_table;
  }


  if( VAR_11->pSelect ){
    FUNC_10(VAR_6, "view %s may not be altered", VAR_11->zName);
    goto exit_rename_table;
  }




  if( FUNC_6(VAR_6, VAR_4, VAR_10, VAR_11->zName, 0) ){
    goto exit_rename_table;
  }



  if( FUNC_24(VAR_6, VAR_11) ){
    goto exit_rename_table;
  }
  if( FUNC_0(VAR_11) ){
    VAR_17 = FUNC_13(VAR_13, VAR_11);
    if( VAR_17->pVtab->pModule->xRename==0 ){
      VAR_17 = 0;
    }
  }






  VAR_16 = FUNC_14(VAR_6);
  if( VAR_16==0 ){
    goto exit_rename_table;
  }
  FUNC_16(VAR_6);


  VAR_15 = VAR_11->zName;
  VAR_14 = FUNC_21(VAR_15, -1);



  FUNC_18(VAR_6,
      "UPDATE \"%w\".%s SET "
      "sql = sqlite_rename_table(%Q, type, name, sql, %Q, %Q, %d) "
      "WHERE (type!='index' OR tbl_name=%Q COLLATE nocase)"
      "AND   name NOT LIKE 'sqlite_%%'"
      , VAR_10, VAR_1, VAR_10, VAR_15, VAR_12, (VAR_9==1), VAR_15
  );



  FUNC_18(VAR_6,
      "UPDATE %Q.%s SET "
          "tbl_name = %Q, "
          "name = CASE "
            "WHEN type='table' THEN %Q "
            "WHEN name LIKE 'sqlite_autoindex%%' AND type='index' THEN "
             "'sqlite_autoindex_' || %Q || substr(name,%d+18) "
            "ELSE name END "
      "WHERE tbl_name=%Q COLLATE nocase AND "
          "(type='table' OR type='index' OR type='trigger');",
      VAR_10, VAR_1,
      VAR_12, VAR_12, VAR_12,
      VAR_14, VAR_15
  );





  if( FUNC_12(VAR_13, "sqlite_sequence", VAR_10) ){
    FUNC_18(VAR_6,
        "UPDATE \"%w\".sqlite_sequence set name = %Q WHERE name = %Q",
        VAR_10, VAR_12, VAR_11->zName);
  }





  if( VAR_9!=1 ){
    FUNC_18(VAR_6,
        "UPDATE sqlite_temp_master SET "
            "sql = sqlite_rename_table(%Q, type, name, sql, %Q, %Q, 1), "
            "tbl_name = "
              "CASE WHEN tbl_name=%Q COLLATE nocase AND "
              "          sqlite_rename_test(%Q, sql, type, name, 1) "
              "THEN %Q ELSE tbl_name END "
            "WHERE type IN ('view', 'trigger')"
        , VAR_10, VAR_15, VAR_12, VAR_15, VAR_10, VAR_12);
  }







  if( VAR_17 ){
    int VAR_19 = ++VAR_6->nMem;
    FUNC_23(VAR_16, VAR_19, VAR_12);
    FUNC_22(VAR_16, VAR_2, VAR_19, 0, 0,(const char*)VAR_17, VAR_3);
  }


  FUNC_4(VAR_6, VAR_9);
  FUNC_5(VAR_6, VAR_10, VAR_9==1);

exit_rename_table:
  FUNC_20(VAR_13, VAR_7);
  FUNC_9(VAR_13, VAR_12);
  VAR_13->mDbFlags = VAR_18;
}
