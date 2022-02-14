
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_str ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_4__ {int nAux; scalar_t__ zReadAuxSql; int nAuxNotNull; int * pWriteAux; int * pDeleteParent; int * pWriteParent; int * pReadParent; int * pDeleteRowid; int * pWriteRowid; int * pReadRowid; int * pDeleteNode; int * pWriteNode; int iNodeSize; int * db; } ;
typedef TYPE_1__ Rtree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char const*,char const*,char const*) ;
 int FUNC_4 (int *,char*,int,int const,int **,int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*,...) ;
 char* FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
  Rtree *VAR_5,
  sqlite3 *VAR_6,
  const char *VAR_7,
  const char *VAR_8,
  int VAR_9
){
  int VAR_10 = VAR_2;


  static const char *VAR_11[8] = {

    "INSERT OR REPLACE INTO '%q'.'%q_node' VALUES(?1, ?2)",
    "DELETE FROM '%q'.'%q_node' WHERE nodeno = ?1",


    "SELECT nodeno FROM '%q'.'%q_rowid' WHERE rowid = ?1",
    "INSERT OR REPLACE INTO '%q'.'%q_rowid' VALUES(?1, ?2)",
    "DELETE FROM '%q'.'%q_rowid' WHERE rowid = ?1",


    "SELECT parentnode FROM '%q'.'%q_parent' WHERE nodeno = ?1",
    "INSERT OR REPLACE INTO '%q'.'%q_parent' VALUES(?1, ?2)",
    "DELETE FROM '%q'.'%q_parent' WHERE nodeno = ?1"
  };
  sqlite3_stmt **VAR_12[8];
  int VAR_13;
  const int VAR_14 = VAR_4|VAR_3;

  VAR_5->db = VAR_6;

  if( VAR_9 ){
    char *VAR_15;
    sqlite3_str *VAR_16 = FUNC_8(VAR_6);
    int VAR_17;
    FUNC_6(VAR_16,
       "CREATE TABLE \"%w\".\"%w_rowid\"(rowid INTEGER PRIMARY KEY,nodeno",
       VAR_7, VAR_8);
    for(VAR_17=0; VAR_17<VAR_5->nAux; VAR_17++){
      FUNC_6(VAR_16,",a%d",VAR_17);
    }
    FUNC_6(VAR_16,
      ");CREATE TABLE \"%w\".\"%w_node\"(nodeno INTEGER PRIMARY KEY,data);",
      VAR_7, VAR_8);
    FUNC_6(VAR_16,
    "CREATE TABLE \"%w\".\"%w_parent\"(nodeno INTEGER PRIMARY KEY,parentnode);",
      VAR_7, VAR_8);
    FUNC_6(VAR_16,
       "INSERT INTO \"%w\".\"%w_node\"VALUES(1,zeroblob(%d))",
       VAR_7, VAR_8, VAR_5->iNodeSize);
    VAR_15 = FUNC_7(VAR_16);
    if( !VAR_15 ){
      return VAR_1;
    }
    VAR_10 = FUNC_1(VAR_6, VAR_15, 0, 0, 0);
    FUNC_2(VAR_15);
    if( VAR_10!=VAR_2 ){
      return VAR_10;
    }
  }

  VAR_12[0] = &VAR_5->pWriteNode;
  VAR_12[1] = &VAR_5->pDeleteNode;
  VAR_12[2] = &VAR_5->pReadRowid;
  VAR_12[3] = &VAR_5->pWriteRowid;
  VAR_12[4] = &VAR_5->pDeleteRowid;
  VAR_12[5] = &VAR_5->pReadParent;
  VAR_12[6] = &VAR_5->pWriteParent;
  VAR_12[7] = &VAR_5->pDeleteParent;

  VAR_10 = FUNC_0(VAR_6, VAR_5);
  for(VAR_13=0; VAR_13<8 && VAR_10==VAR_2; VAR_13++){
    char *VAR_18;
    const char *VAR_19;
    if( VAR_13!=3 || VAR_5->nAux==0 ){
       VAR_19 = VAR_11[VAR_13];
    }else {


       VAR_19 = "INSERT INTO\"%w\".\"%w_rowid\"(rowid,nodeno)VALUES(?1,?2)"
                  "ON CONFLICT(rowid)DO UPDATE SET nodeno=excluded.nodeno";
    }
    VAR_18 = FUNC_3(VAR_19, VAR_7, VAR_8);
    if( VAR_18 ){
      VAR_10 = FUNC_4(VAR_6, VAR_18, -1, VAR_14, VAR_12[VAR_13], 0);
    }else{
      VAR_10 = VAR_1;
    }
    FUNC_2(VAR_18);
  }
  if( VAR_5->nAux ){
    VAR_5->zReadAuxSql = FUNC_3(
       "SELECT * FROM \"%w\".\"%w_rowid\" WHERE rowid=?1",
       VAR_7, VAR_8);
    if( VAR_5->zReadAuxSql==0 ){
      VAR_10 = VAR_1;
    }else{
      sqlite3_str *VAR_20 = FUNC_8(VAR_6);
      int VAR_21;
      char *VAR_22;
      FUNC_6(VAR_20, "UPDATE \"%w\".\"%w_rowid\"SET ", VAR_7, VAR_8);
      for(VAR_21=0; VAR_21<VAR_5->nAux; VAR_21++){
        if( VAR_21 ) FUNC_5(VAR_20, ",", 1);
        if( VAR_21<VAR_5->nAuxNotNull ){
          FUNC_6(VAR_20,"a%d=coalesce(?%d,a%d)",VAR_21,VAR_21+2,VAR_21);
        }else{
          FUNC_6(VAR_20,"a%d=?%d",VAR_21,VAR_21+2);
        }
      }
      FUNC_6(VAR_20, " WHERE rowid=?1");
      VAR_22 = FUNC_7(VAR_20);
      if( VAR_22==0 ){
        VAR_10 = VAR_1;
      }else{
        VAR_10 = FUNC_4(VAR_6, VAR_22, -1, VAR_14, &VAR_5->pWriteAux, 0);
        FUNC_2(VAR_22);
      }
    }
  }

  return VAR_10;
}
