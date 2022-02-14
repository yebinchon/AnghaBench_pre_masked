
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int zName; } ;
struct TYPE_8__ {int rc; scalar_t__ zDataTbl; int nWorkUnit; TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*,char*,int,char**) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int*,int) ;
 scalar_t__ FUNC_5 (int*,char*,int ) ;

int FUNC_6(
  Fts5Config *VAR_2,
  int VAR_3,
  Fts5Index **VAR_4,
  char **VAR_5
){
  int VAR_6 = VAR_1;
  Fts5Index *VAR_7;

  *VAR_4 = VAR_7 = (Fts5Index*)FUNC_4(&VAR_6, sizeof(Fts5Index));
  if( VAR_6==VAR_1 ){
    VAR_7->pConfig = VAR_2;
    VAR_7->nWorkUnit = VAR_0;
    VAR_7->zDataTbl = FUNC_5(&VAR_6, "%s_data", VAR_2->zName);
    if( VAR_7->zDataTbl && VAR_3 ){
      VAR_6 = FUNC_1(
          VAR_2, "data", "id INTEGER PRIMARY KEY, block BLOB", 0, VAR_5
      );
      if( VAR_6==VAR_1 ){
        VAR_6 = FUNC_1(VAR_2, "idx",
            "segid, term, pgno, PRIMARY KEY(segid, term)",
            1, VAR_5
        );
      }
      if( VAR_6==VAR_1 ){
        VAR_6 = FUNC_3(VAR_7);
      }
    }
  }

  FUNC_0( VAR_6!=VAR_1 || VAR_7->rc==VAR_1 );
  if( VAR_6 ){
    FUNC_2(VAR_7);
    *VAR_4 = 0;
  }
  return VAR_6;
}
