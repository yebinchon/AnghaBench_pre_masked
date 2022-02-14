
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {char* zErrmsg; scalar_t__ rc; int dbRbu; int dbMain; int zStateDb; } ;
typedef TYPE_1__ sqlite3rbu ;
struct TYPE_27__ {scalar_t__ bCleanup; scalar_t__ pSelect; int iTnum; char* zIdx; char* zTbl; scalar_t__ eType; int nCol; scalar_t__ pInsert; scalar_t__ pDelete; char* zDataTbl; int nTblCol; scalar_t__ abIndexed; } ;
typedef TYPE_2__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ,scalar_t__*,char**,char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,char*,char const*,char const*,char*,...) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 char* FUNC_7 (TYPE_1__*,int) ;
 char* FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 char* FUNC_9 (TYPE_1__*,TYPE_2__*,char**,char**,char**,int*) ;
 char* FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 char* FUNC_11 (TYPE_1__*,TYPE_2__*,char*) ;
 char* FUNC_12 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,char*,char const*) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*,...) ;
 int FUNC_16 (int ,int ,char*,int,int const) ;

__attribute__((used)) static int FUNC_17(
  sqlite3rbu *VAR_6,
  RbuObjIter *VAR_7,
  int VAR_8
){
  FUNC_0( VAR_7->bCleanup==0 );
  if( VAR_7->pSelect==0 && FUNC_6(VAR_6, VAR_7)==VAR_4 ){
    const int VAR_9 = VAR_7->iTnum;
    char *VAR_10 = 0;
    char **VAR_11 = &VAR_6->zErrmsg;
    const char *VAR_12 = VAR_7->zIdx;
    char *VAR_13 = 0;

    if( VAR_8 ){
      VAR_13 = FUNC_15(" LIMIT -1 OFFSET %d", VAR_8);
      if( !VAR_13 ) VAR_6->rc = VAR_3;
    }

    if( VAR_12 ){
      const char *VAR_14 = VAR_7->zTbl;
      char *VAR_15 = 0;
      char *VAR_16 = 0;
      char *VAR_17 = 0;
      char *VAR_18 = 0;
      char *VAR_19 = 0;
      int VAR_20 = 0;

      FUNC_0( VAR_7->eType!=VAR_2 );
      VAR_10 = FUNC_9(
          VAR_6, VAR_7, &VAR_15, &VAR_16, &VAR_17, &VAR_20
      );
      VAR_18 = FUNC_7(VAR_6, VAR_20);
      VAR_19 = FUNC_10(VAR_6, VAR_7);


      FUNC_16(VAR_5, VAR_6->dbMain, "main", 0, 1);
      FUNC_16(VAR_5, VAR_6->dbMain, "main", 1,VAR_9);
      FUNC_5(VAR_6, VAR_6->dbMain,
          "CREATE TABLE \"rbu_imp_%w\"( %s, PRIMARY KEY( %s ) ) WITHOUT ROWID",
          VAR_14, VAR_15, VAR_16
      );
      FUNC_16(VAR_5, VAR_6->dbMain, "main", 0, 0);


      VAR_7->nCol = VAR_20;
      if( VAR_6->rc==VAR_4 ){
        VAR_6->rc = FUNC_1(
            VAR_6->dbMain, &VAR_7->pInsert, &VAR_6->zErrmsg,
          FUNC_15("INSERT INTO \"rbu_imp_%w\" VALUES(%s)", VAR_14, VAR_18)
        );
      }


      if( FUNC_4(VAR_6)==0 && VAR_6->rc==VAR_4 ){
        VAR_6->rc = FUNC_1(
            VAR_6->dbMain, &VAR_7->pDelete, &VAR_6->zErrmsg,
          FUNC_15("DELETE FROM \"rbu_imp_%w\" WHERE %s", VAR_14, VAR_17)
        );
      }


      if( VAR_6->rc==VAR_4 ){
        char *VAR_21;
        if( FUNC_4(VAR_6) ){
          VAR_21 = FUNC_15(
              "SELECT %s, 0 AS rbu_control FROM '%q' %s ORDER BY %s%s",
              VAR_10,
              VAR_7->zDataTbl,
              VAR_19, VAR_10, VAR_13
          );
        }else

        if( VAR_7->eType==VAR_0 || VAR_7->eType==VAR_1 ){
          VAR_21 = FUNC_15(
              "SELECT %s, rbu_control FROM %s.'rbu_tmp_%q' %s ORDER BY %s%s",
              VAR_10, VAR_6->zStateDb, VAR_7->zDataTbl,
              VAR_19, VAR_10, VAR_13
          );
        }else{
          VAR_21 = FUNC_15(
              "SELECT %s, rbu_control FROM %s.'rbu_tmp_%q' %s "
              "UNION ALL "
              "SELECT %s, rbu_control FROM '%q' "
              "%s %s typeof(rbu_control)='integer' AND rbu_control!=1 "
              "ORDER BY %s%s",
              VAR_10, VAR_6->zStateDb, VAR_7->zDataTbl, VAR_19,
              VAR_10, VAR_7->zDataTbl,
              VAR_19,
              (VAR_19 ? "AND" : "WHERE"),
              VAR_10, VAR_13
          );
        }
        VAR_6->rc = FUNC_1(VAR_6->dbRbu, &VAR_7->pSelect, VAR_11, VAR_21);
      }

      FUNC_14(VAR_15);
      FUNC_14(VAR_16);
      FUNC_14(VAR_17);
      FUNC_14(VAR_18);
      FUNC_14(VAR_19);
    }else{
      int VAR_22 = (VAR_7->eType==VAR_2)
                    ||(VAR_7->eType==VAR_1)
                    ||(VAR_7->eType==VAR_0 && FUNC_4(VAR_6));
      const char *VAR_23 = VAR_7->zTbl;
      const char *VAR_24;

      char *VAR_25 = FUNC_7(VAR_6, VAR_7->nTblCol + VAR_22);
      char *VAR_26 = FUNC_12(VAR_6, VAR_7);
      char *VAR_27 = FUNC_11(VAR_6, VAR_7, "old");
      char *VAR_28 = FUNC_11(VAR_6, VAR_7, "new");

      VAR_10 = FUNC_8(VAR_6, VAR_7);
      VAR_7->nCol = VAR_7->nTblCol;


      FUNC_2(VAR_6, VAR_7);
      FUNC_3(VAR_6, VAR_7);
      VAR_24 = (VAR_7->eType==VAR_2 ? "" : "rbu_imp_");


      if( VAR_6->rc==VAR_4 ){
        VAR_6->rc = FUNC_1(VAR_6->dbMain, &VAR_7->pInsert, VAR_11,
            FUNC_15(
              "INSERT INTO \"%s%w\"(%s%s) VALUES(%s)",
              VAR_24, VAR_23, VAR_10, (VAR_22 ? ", _rowid_" : ""), VAR_25
            )
        );
      }




      if( FUNC_4(VAR_6)==0 && VAR_6->rc==VAR_4 ){
        VAR_6->rc = FUNC_1(VAR_6->dbMain, &VAR_7->pDelete, VAR_11,
            FUNC_15(
              "DELETE FROM \"%s%w\" WHERE %s", VAR_24, VAR_23, VAR_26
            )
        );
      }

      if( FUNC_4(VAR_6)==0 && VAR_7->abIndexed ){
        const char *VAR_29 = "";
        if( VAR_7->eType==VAR_0 || VAR_7->eType==VAR_1 ){
          VAR_29 = ", rbu_rowid";
        }


        FUNC_5(VAR_6, VAR_6->dbRbu,
            "CREATE TABLE IF NOT EXISTS %s.'rbu_tmp_%q' AS "
            "SELECT *%s FROM '%q' WHERE 0;"
            , VAR_6->zStateDb, VAR_7->zDataTbl
            , (VAR_7->eType==VAR_0 ? ", 0 AS rbu_rowid" : "")
            , VAR_7->zDataTbl
        );

        FUNC_5(VAR_6, VAR_6->dbMain,
            "CREATE TEMP TRIGGER rbu_delete_tr BEFORE DELETE ON \"%s%w\" "
            "BEGIN "
            "  SELECT rbu_tmp_insert(3, %s);"
            "END;"

            "CREATE TEMP TRIGGER rbu_update1_tr BEFORE UPDATE ON \"%s%w\" "
            "BEGIN "
            "  SELECT rbu_tmp_insert(3, %s);"
            "END;"

            "CREATE TEMP TRIGGER rbu_update2_tr AFTER UPDATE ON \"%s%w\" "
            "BEGIN "
            "  SELECT rbu_tmp_insert(4, %s);"
            "END;",
            VAR_24, VAR_23, VAR_27,
            VAR_24, VAR_23, VAR_27,
            VAR_24, VAR_23, VAR_28
        );

        if( VAR_7->eType==VAR_0 || VAR_7->eType==VAR_1 ){
          FUNC_5(VAR_6, VAR_6->dbMain,
              "CREATE TEMP TRIGGER rbu_insert_tr AFTER INSERT ON \"%s%w\" "
              "BEGIN "
              "  SELECT rbu_tmp_insert(0, %s);"
              "END;",
              VAR_24, VAR_23, VAR_28
          );
        }

        FUNC_13(VAR_6, VAR_7, VAR_10, VAR_29);
      }


      if( VAR_6->rc==VAR_4 ){
        const char *VAR_30 = "";
        if( VAR_22 ){
          VAR_30 = FUNC_4(VAR_6) ? ",_rowid_ " : ",rbu_rowid";
        }
        VAR_6->rc = FUNC_1(VAR_6->dbRbu, &VAR_7->pSelect, VAR_11,
            FUNC_15(
              "SELECT %s,%s rbu_control%s FROM '%q'%s",
              VAR_10,
              (FUNC_4(VAR_6) ? "0 AS " : ""),
              VAR_30,
              VAR_7->zDataTbl, VAR_13
            )
        );
      }

      FUNC_14(VAR_26);
      FUNC_14(VAR_27);
      FUNC_14(VAR_28);
      FUNC_14(VAR_25);
    }
    FUNC_14(VAR_10);
    FUNC_14(VAR_13);
  }

  return VAR_6->rc;
}
