
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sqlite3_index_constraint_usage {int argvIndex; int omit; } ;
struct sqlite3_index_constraint {int iColumn; int op; int usable; } ;
typedef int sqlite3_vtab ;
typedef int sqlite3_stmt ;
struct TYPE_9__ {int nConstraint; int nOrderBy; int orderByConsumed; char* idxStr; int needToFreeIdxStr; double estimatedCost; int idxNum; TYPE_1__* aOrderBy; struct sqlite3_index_constraint_usage* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_10__ {char* zTableName; char** aCol; int * interp; scalar_t__* aIndex; int db; } ;
typedef TYPE_3__ echo_vtab ;
typedef int Tcl_Interp ;
struct TYPE_8__ {size_t iColumn; scalar_t__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 double FUNC_2 (scalar_t__) ;
 char* FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char const*,...) ;
 int FUNC_10 (int ,char*,int,int **,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char**,char*,int,int*) ;

__attribute__((used)) static int FUNC_13(sqlite3_vtab *VAR_4, sqlite3_index_info *VAR_5){
  int VAR_6;
  char *VAR_7 = 0;
  char *VAR_8 = 0;
  char *VAR_9;
  int VAR_10 = 0;
  const char *VAR_11 = "WHERE";
  echo_vtab *VAR_12 = (echo_vtab *)VAR_4;
  sqlite3_stmt *VAR_13 = 0;
  Tcl_Interp *VAR_14 = VAR_12->interp;

  int VAR_15 = 0;
  int VAR_16 = 0;
  int VAR_17 = VAR_2;
  int VAR_18 = 0;
  double VAR_19 = 0;
  int VAR_20 = 0;
  if( FUNC_0(VAR_14, "echo_module_ignore_usable", VAR_3) ){
    VAR_20 = 1;
  }

  if( FUNC_5(VAR_12, "xBestIndex") ){
    return VAR_0;
  }






  if( FUNC_0(VAR_14, "echo_module_cost", VAR_3) ){
    VAR_19 = FUNC_2(FUNC_0(VAR_14, "echo_module_cost", VAR_3));
    VAR_18 = 1;
  } else {
    VAR_7 = FUNC_9("SELECT count(*) FROM %Q", VAR_12->zTableName);
    if( !VAR_7 ){
      return VAR_1;
    }
    VAR_17 = FUNC_10(VAR_12->db, VAR_7, -1, &VAR_13, 0);
    FUNC_8(VAR_7);
    if( VAR_17!=VAR_2 ){
      return VAR_17;
    }
    FUNC_11(VAR_13);
    VAR_15 = FUNC_6(VAR_13, 0);
    VAR_17 = FUNC_7(VAR_13);
    if( VAR_17!=VAR_2 ){
      return VAR_17;
    }
  }

  VAR_8 = FUNC_3(VAR_12, VAR_5);
  if( !VAR_8 ) return VAR_1;
  VAR_7 = FUNC_9("SELECT rowid%z FROM %Q", VAR_8, VAR_12->zTableName);
  if( !VAR_7 ) return VAR_1;

  for(VAR_6=0; VAR_6<VAR_5->nConstraint; VAR_6++){
    const struct sqlite3_index_constraint *VAR_21;
    struct sqlite3_index_constraint_usage *VAR_22;
    int VAR_23;

    VAR_21 = &VAR_5->aConstraint[VAR_6];
    VAR_22 = &VAR_5->aConstraintUsage[VAR_6];

    if( !VAR_20 && !VAR_21->usable ) continue;

    VAR_23 = VAR_21->iColumn;
    if( VAR_23<0 || VAR_12->aIndex[VAR_23] ){
      char *VAR_24 = VAR_23>=0 ? VAR_12->aCol[VAR_23] : "rowid";
      char *VAR_25 = 0;
      VAR_16 = 1;
      switch( VAR_21->op ){
        case 136:
          VAR_25 = "="; break;
        case 130:
          VAR_25 = "<"; break;
        case 133:
          VAR_25 = ">"; break;
        case 132:
          VAR_25 = "<="; break;
        case 135:
          VAR_25 = ">="; break;
        case 129:







          VAR_25 = "LIKE"; break;
        case 131:
          VAR_25 = "like"; break;
        case 134:
          VAR_25 = "glob"; break;
        case 128:
          VAR_25 = "regexp"; break;
      }
      if( VAR_25 ){
        if( VAR_25[0]=='L' ){
          VAR_9 = FUNC_9(" %s %s LIKE (SELECT '%%'||?||'%%')",
              VAR_11, VAR_24);
        } else {
          VAR_9 = FUNC_9(" %s %s %s ?", VAR_11, VAR_24, VAR_25);
        }
        FUNC_12(&VAR_7, VAR_9, 1, &VAR_17);
        VAR_11 = "AND";
        VAR_22->argvIndex = ++VAR_10;
        VAR_22->omit = 1;
      }
    }
  }





  if( VAR_5->nOrderBy==1 && (
        VAR_5->aOrderBy->iColumn<0 ||
        VAR_12->aIndex[VAR_5->aOrderBy->iColumn]) ){
    int VAR_26 = VAR_5->aOrderBy->iColumn;
    char *VAR_27 = VAR_26>=0 ? VAR_12->aCol[VAR_26] : "rowid";
    char *VAR_28 = VAR_5->aOrderBy->desc?"DESC":"ASC";
    VAR_9 = FUNC_9(" ORDER BY %s %s", VAR_27, VAR_28);
    FUNC_12(&VAR_7, VAR_9, 1, &VAR_17);
    VAR_5->orderByConsumed = 1;
  }

  FUNC_1(VAR_12->interp, "xBestIndex");;
  FUNC_1(VAR_12->interp, VAR_7);

  if( !VAR_7 ){
    return VAR_17;
  }
  VAR_5->idxNum = FUNC_4(VAR_7);
  VAR_5->idxStr = VAR_7;
  VAR_5->needToFreeIdxStr = 1;
  if( VAR_18 ){
    VAR_5->estimatedCost = VAR_19;
  }else if( VAR_16 ){

    for( VAR_6=0; VAR_6<(sizeof(int)*8)-1; VAR_6++ ){
      if( VAR_15 & (1<<VAR_6) ){
        VAR_5->estimatedCost = (double)VAR_6;
      }
    }
  }else{
    VAR_5->estimatedCost = (double)VAR_15;
  }
  return VAR_17;
}
