
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
typedef int sQueue ;
struct TYPE_8__ {char* zErrMsg; } ;
struct TYPE_9__ {char* zTableName; char* zIdColumn; char* zParentColumn; int db; TYPE_1__ base; } ;
typedef TYPE_2__ closure_vtab ;
typedef int closure_queue ;
struct TYPE_10__ {int pClosure; int pCurrent; void* zParentColumn; void* zIdColumn; void* zTableName; TYPE_2__* pVtab; } ;
typedef TYPE_3__ closure_cursor ;
struct TYPE_11__ {int iGeneration; int id; } ;
typedef TYPE_4__ closure_avl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*,int ,int) ;
 int FUNC_4 (int *,int ,int) ;
 TYPE_4__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 char const* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 void* FUNC_12 (char*,char const*,...) ;
 int FUNC_13 (int ,char*,int,int **,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(
  sqlite3_vtab_cursor *VAR_4,
  int VAR_5, const char *VAR_6,
  int VAR_7, sqlite3_value **VAR_8
){
  closure_cursor *VAR_9 = (closure_cursor *)VAR_4;
  closure_vtab *VAR_10 = VAR_9->pVtab;
  sqlite3_int64 VAR_11;
  int VAR_12 = 999999999;
  char *VAR_13;
  sqlite3_stmt *VAR_14;
  closure_avl *VAR_15;
  int VAR_16 = VAR_2;
  const char *VAR_17 = VAR_10->zTableName;
  const char *VAR_18 = VAR_10->zIdColumn;
  const char *VAR_19 = VAR_10->zParentColumn;
  closure_queue VAR_20;

  (void)VAR_6;
  (void)VAR_7;
  FUNC_2(VAR_9);
  FUNC_4(&VAR_20, 0, sizeof(VAR_20));
  if( (VAR_5 & 1)==0 ){

    return VAR_2;
  }
  VAR_11 = FUNC_17(VAR_8[0]);
  if( (VAR_5 & 0x000f0)!=0 ){
    VAR_12 = FUNC_16(VAR_8[(VAR_5>>4)&0x0f]);
    if( (VAR_5 & 0x00002)!=0 ) VAR_12--;
  }
  if( (VAR_5 & 0x00f00)!=0 ){
    VAR_17 = (const char*)FUNC_18(VAR_8[(VAR_5>>8)&0x0f]);
    VAR_9->zTableName = FUNC_12("%s", VAR_17);
  }
  if( (VAR_5 & 0x0f000)!=0 ){
    VAR_18 = (const char*)FUNC_18(VAR_8[(VAR_5>>12)&0x0f]);
    VAR_9->zIdColumn = FUNC_12("%s", VAR_18);
  }
  if( (VAR_5 & 0x0f0000)!=0 ){
    VAR_19 = (const char*)FUNC_18(VAR_8[(VAR_5>>16)&0x0f]);
    VAR_9->zParentColumn = FUNC_12("%s", VAR_19);
  }

  VAR_13 = FUNC_12(
       "SELECT \"%w\".\"%w\" FROM \"%w\" WHERE \"%w\".\"%w\"=?1",
       VAR_17, VAR_18, VAR_17, VAR_17, VAR_19);
  if( VAR_13==0 ){
    return VAR_1;
  }else{
    VAR_16 = FUNC_13(VAR_10->db, VAR_13, -1, &VAR_14, 0);
    FUNC_11(VAR_13);
    if( VAR_16 ){
      FUNC_11(VAR_10->base.zErrMsg);
      VAR_10->base.zErrMsg = FUNC_12("%s", FUNC_9(VAR_10->db));
      return VAR_16;
    }
  }
  if( VAR_16==VAR_2 ){
    VAR_16 = FUNC_3(&VAR_20, VAR_9, VAR_11, 0);
  }
  while( (VAR_15 = FUNC_5(&VAR_20))!=0 ){
    if( VAR_15->iGeneration>=VAR_12 ) continue;
    FUNC_6(VAR_14, 1, VAR_15->id);
    while( VAR_16==VAR_2 && FUNC_15(VAR_14)==VAR_3 ){
      if( FUNC_8(VAR_14,0)==VAR_0 ){
        sqlite3_int64 VAR_21 = FUNC_7(VAR_14, 0);
        if( FUNC_1(VAR_9->pClosure, VAR_21)==0 ){
          VAR_16 = FUNC_3(&VAR_20, VAR_9, VAR_21, VAR_15->iGeneration+1);
        }
      }
    }
    FUNC_14(VAR_14);
  }
  FUNC_10(VAR_14);
  if( VAR_16==VAR_2 ){
    VAR_9->pCurrent = FUNC_0(VAR_9->pClosure);
  }

  return VAR_16;
}
