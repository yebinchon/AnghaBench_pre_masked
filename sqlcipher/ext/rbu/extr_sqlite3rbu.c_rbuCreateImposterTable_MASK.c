
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ rc; int dbMain; } ;
typedef TYPE_1__ sqlite3rbu ;
struct TYPE_10__ {scalar_t__ eType; int iTnum; int nTblCol; char** azTblCol; int zTbl; scalar_t__* abNotNull; int * azTblType; scalar_t__* abTblPk; } ;
typedef TYPE_2__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (TYPE_1__*,char*,char*,char const*,...) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ,char*,char*) ;
 char* FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,char*,int ,char const*,int ,char const**,int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*,int,int) ;

__attribute__((used)) static void FUNC_5(sqlite3rbu *VAR_5, RbuObjIter *VAR_6){
  if( VAR_5->rc==VAR_3 && VAR_6->eType!=VAR_1 ){
    int VAR_7 = VAR_6->iTnum;
    const char *VAR_8 = "";
    char *VAR_9 = 0;
    int VAR_10;
    FUNC_4(VAR_4, VAR_5->dbMain, "main", 0, 1);

    for(VAR_10=0; VAR_5->rc==VAR_3 && VAR_10<VAR_6->nTblCol; VAR_10++){
      const char *VAR_11 = "";
      const char *VAR_12 = VAR_6->azTblCol[VAR_10];
      const char *VAR_13 = 0;

      VAR_5->rc = FUNC_3(
          VAR_5->dbMain, "main", VAR_6->zTbl, VAR_12, 0, &VAR_13, 0, 0, 0
      );

      if( VAR_6->eType==VAR_0 && VAR_6->abTblPk[VAR_10] ){


        VAR_11 = "PRIMARY KEY ";
      }
      VAR_9 = FUNC_0(VAR_5, "%z%s\"%w\" %s %sCOLLATE %Q%s",
          VAR_9, VAR_8, VAR_12, VAR_6->azTblType[VAR_10], VAR_11, VAR_13,
          (VAR_6->abNotNull[VAR_10] ? " NOT NULL" : "")
      );
      VAR_8 = ", ";
    }

    if( VAR_6->eType==VAR_2 ){
      char *VAR_14 = FUNC_2(VAR_5, VAR_6);
      if( VAR_14 ){
        VAR_9 = FUNC_0(VAR_5, "%z, %z", VAR_9, VAR_14);
      }
    }

    FUNC_4(VAR_4, VAR_5->dbMain, "main", 1, VAR_7);
    FUNC_1(VAR_5, VAR_5->dbMain, "CREATE TABLE \"rbu_imp_%w\"(%z)%s",
        VAR_6->zTbl, VAR_9,
        (VAR_6->eType==VAR_2 ? " WITHOUT ROWID" : "")
    );
    FUNC_4(VAR_4, VAR_5->dbMain, "main", 0, 0);
  }
}
