
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int hIdx; int pzErrmsg; int * dbm; } ;
typedef TYPE_1__ sqlite3expert ;
typedef int sqlite3 ;
struct TYPE_17__ {struct TYPE_17__* pLink; } ;
struct TYPE_16__ {TYPE_2__* pTab; } ;
struct TYPE_15__ {char* zName; } ;
typedef TYPE_2__ IdxTable ;
typedef TYPE_3__ IdxScan ;
typedef TYPE_4__ IdxConstraint ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int*,char*,TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int*,int *,TYPE_3__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (int*,int *,char*,char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *,char*,int ,int ,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,char const*,...) ;

__attribute__((used)) static int FUNC_7(
  sqlite3expert *VAR_2,
  IdxScan *VAR_3,
  IdxConstraint *VAR_4,
  IdxConstraint *VAR_5
){
  sqlite3 *VAR_6 = VAR_2->dbm;
  int VAR_7 = VAR_1;
  if( (VAR_4 || VAR_5) && 0==FUNC_1(&VAR_7, VAR_6, VAR_3, VAR_4, VAR_5) ){
    IdxTable *VAR_8 = VAR_3->pTab;
    char *VAR_9 = 0;
    char *VAR_10 = 0;
    IdxConstraint *VAR_11;
    unsigned int VAR_12 = 0;
    const char *VAR_13;

    for(VAR_11=VAR_4; VAR_11; VAR_11=VAR_11->pLink){
      VAR_9 = FUNC_0(&VAR_7, VAR_9, VAR_8, VAR_11);
    }
    for(VAR_11=VAR_5; VAR_11; VAR_11=VAR_11->pLink){
      VAR_9 = FUNC_0(&VAR_7, VAR_9, VAR_8, VAR_11);
    }

    if( VAR_7==VAR_1 ){

      const char *VAR_14 = VAR_3->pTab->zName;
      char *VAR_15;
      int VAR_16;
      for(VAR_16=0; VAR_9[VAR_16]; VAR_16++){
        VAR_12 += ((VAR_12<<3) + VAR_9[VAR_16]);
      }
      VAR_15 = FUNC_6("%s_idx_%08x", VAR_14, VAR_12);
      if( VAR_15==0 ){
        VAR_7 = VAR_0;
      }else{
        if( FUNC_3(VAR_14) ){
          VAR_13 = "CREATE INDEX '%q' ON %Q(%s)";
        }else{
          VAR_13 = "CREATE INDEX %s ON %s(%s)";
        }
        VAR_10 = FUNC_6(VAR_13, VAR_15, VAR_14, VAR_9);
        if( !VAR_10 ){
          VAR_7 = VAR_0;
        }else{
          VAR_7 = FUNC_4(VAR_6, VAR_10, 0, 0, VAR_2->pzErrmsg);
          FUNC_2(&VAR_7, &VAR_2->hIdx, VAR_15, VAR_10);
        }
        FUNC_5(VAR_15);
        FUNC_5(VAR_10);
      }
    }

    FUNC_5(VAR_9);
  }
  return VAR_7;
}
