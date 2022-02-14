
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef char const sqlite3_stmt ;
struct TYPE_3__ {char const** aStmt; int db; int zName; int zDb; int zReadExprlist; int zWriteExprlist; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int,int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,int ,...) ;
 int FUNC_6 (int ,char*,int,int,char const**,int *) ;

__attribute__((used)) static int FUNC_7(
  Fts3Table *VAR_6,
  int VAR_7,
  sqlite3_stmt **VAR_8,
  sqlite3_value **VAR_9
){
  const char *VAR_10[] = {
          "DELETE FROM %Q.'%q_content' WHERE rowid = ?",
          "SELECT NOT EXISTS(SELECT docid FROM %Q.'%q_content' WHERE rowid!=?)",
          "DELETE FROM %Q.'%q_content'",
          "DELETE FROM %Q.'%q_segments'",
          "DELETE FROM %Q.'%q_segdir'",
          "DELETE FROM %Q.'%q_docsize'",
          "DELETE FROM %Q.'%q_stat'",
          "SELECT %s WHERE rowid=?",
          "SELECT (SELECT max(idx) FROM %Q.'%q_segdir' WHERE level = ?) + 1",
          "REPLACE INTO %Q.'%q_segments'(blockid, block) VALUES(?, ?)",
          "SELECT coalesce((SELECT max(blockid) FROM %Q.'%q_segments') + 1, 1)",
          "REPLACE INTO %Q.'%q_segdir' VALUES(?,?,?,?,?,?)",


          "SELECT idx, start_block, leaves_end_block, end_block, root "
            "FROM %Q.'%q_segdir' WHERE level = ? ORDER BY idx ASC",
          "SELECT idx, start_block, leaves_end_block, end_block, root "
            "FROM %Q.'%q_segdir' WHERE level BETWEEN ? AND ?"
            "ORDER BY level DESC, idx ASC",

          "SELECT count(*) FROM %Q.'%q_segdir' WHERE level = ?",
          "SELECT max(level) FROM %Q.'%q_segdir' WHERE level BETWEEN ? AND ?",

          "DELETE FROM %Q.'%q_segdir' WHERE level = ?",
          "DELETE FROM %Q.'%q_segments' WHERE blockid BETWEEN ? AND ?",
          "INSERT INTO %Q.'%q_content' VALUES(%s)",
          "DELETE FROM %Q.'%q_docsize' WHERE docid = ?",
          "REPLACE INTO %Q.'%q_docsize' VALUES(?,?)",
          "SELECT size FROM %Q.'%q_docsize' WHERE docid=?",
          "SELECT value FROM %Q.'%q_stat' WHERE id=?",
          "REPLACE INTO %Q.'%q_stat' VALUES(?,?)",
          "",
          "",

         "DELETE FROM %Q.'%q_segdir' WHERE level BETWEEN ? AND ?",
         "SELECT ? UNION SELECT level / (1024 * ?) FROM %Q.'%q_segdir'",






         "SELECT level, count(*) AS cnt FROM %Q.'%q_segdir' "
         "  GROUP BY level HAVING cnt>=?"
         "  ORDER BY (level %% 1024) ASC LIMIT 1",




         "SELECT 2 * total(1 + leaves_end_block - start_block) "
         "  FROM %Q.'%q_segdir' WHERE level = ? AND idx < ?",



         "DELETE FROM %Q.'%q_segdir' WHERE level = ? AND idx = ?",




         "UPDATE %Q.'%q_segdir' SET idx = ? WHERE level=? AND idx=?",




          "SELECT idx, start_block, leaves_end_block, end_block, root "
            "FROM %Q.'%q_segdir' WHERE level = ? AND idx = ?",




          "UPDATE %Q.'%q_segdir' SET start_block = ?, root = ?"
            "WHERE level = ? AND idx = ?",




          "SELECT 1 FROM %Q.'%q_segments' WHERE blockid=? AND block IS NULL",



          "SELECT idx FROM %Q.'%q_segdir' WHERE level=? ORDER BY 1 ASC",



          "SELECT max( level %% 1024 ) FROM %Q.'%q_segdir'",


          "SELECT level, idx, end_block "
            "FROM %Q.'%q_segdir' WHERE level BETWEEN ? AND ? "
            "ORDER BY level DESC, idx ASC",


          "UPDATE OR FAIL %Q.'%q_segdir' SET level=-1,idx=? "
            "WHERE level=? AND idx=?",
          "UPDATE OR FAIL %Q.'%q_segdir' SET level=? WHERE level=-1"

  };
  int VAR_11 = VAR_1;
  sqlite3_stmt *VAR_12;

  FUNC_1( FUNC_0(VAR_10)==FUNC_0(VAR_6->aStmt) );
  FUNC_1( VAR_7<FUNC_0(VAR_10) && VAR_7>=0 );

  VAR_12 = VAR_6->aStmt[VAR_7];
  if( !VAR_12 ){
    int VAR_13 = VAR_3|VAR_2;
    char *VAR_14;
    if( VAR_7==VAR_4 ){
      VAR_14 = FUNC_5(VAR_10[VAR_7], VAR_6->zDb, VAR_6->zName, VAR_6->zWriteExprlist);
    }else if( VAR_7==VAR_5 ){
      VAR_13 &= ~VAR_2;
      VAR_14 = FUNC_5(VAR_10[VAR_7], VAR_6->zReadExprlist);
    }else{
      VAR_14 = FUNC_5(VAR_10[VAR_7], VAR_6->zDb, VAR_6->zName);
    }
    if( !VAR_14 ){
      VAR_11 = VAR_0;
    }else{
      VAR_11 = FUNC_6(VAR_6->db, VAR_14, -1, VAR_13, &VAR_12, ((void*)0));
      FUNC_4(VAR_14);
      FUNC_1( VAR_11==VAR_1 || VAR_12==0 );
      VAR_6->aStmt[VAR_7] = VAR_12;
    }
  }
  if( VAR_9 ){
    int VAR_15;
    int VAR_16 = FUNC_2(VAR_12);
    for(VAR_15=0; VAR_11==VAR_1 && VAR_15<VAR_16; VAR_15++){
      VAR_11 = FUNC_3(VAR_12, VAR_15+1, VAR_9[VAR_15]);
    }
  }
  *VAR_8 = VAR_12;
  return VAR_11;
}
