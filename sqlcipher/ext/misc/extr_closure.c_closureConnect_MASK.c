
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_5__ {scalar_t__ zSelf; scalar_t__ zTableName; scalar_t__ zIdColumn; scalar_t__ zParentColumn; int base; void* zDb; int * db; } ;
typedef TYPE_1__ closure_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (char*,char const* const) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 (int) ;
 void* FUNC_7 (char*,char const* const) ;

__attribute__((used)) static int FUNC_8(
  sqlite3 *VAR_3,
  void *VAR_4,
  int VAR_5, const char *const*VAR_6,
  sqlite3_vtab **VAR_7,
  char **VAR_8
){
  int VAR_9 = VAR_2;
  closure_vtab *VAR_10 = 0;
  const char *VAR_11 = VAR_6[1];
  const char *VAR_12;
  int VAR_13;

  (void)VAR_4;
  *VAR_7 = 0;
  VAR_10 = FUNC_6( sizeof(*VAR_10) );
  if( VAR_10==0 ) return VAR_1;
  VAR_9 = VAR_1;
  FUNC_3(VAR_10, 0, sizeof(*VAR_10));
  VAR_10->db = VAR_3;
  VAR_10->zDb = FUNC_7("%s", VAR_11);
  if( VAR_10->zDb==0 ) goto closureConnectError;
  VAR_10->zSelf = FUNC_7("%s", VAR_6[2]);
  if( VAR_10->zSelf==0 ) goto closureConnectError;
  for(VAR_13=3; VAR_13<VAR_5; VAR_13++){
    VAR_12 = FUNC_2("tablename", VAR_6[VAR_13]);
    if( VAR_12 ){
      FUNC_5(VAR_10->zTableName);
      VAR_10->zTableName = FUNC_0(VAR_12);
      if( VAR_10->zTableName==0 ) goto closureConnectError;
      continue;
    }
    VAR_12 = FUNC_2("idcolumn", VAR_6[VAR_13]);
    if( VAR_12 ){
      FUNC_5(VAR_10->zIdColumn);
      VAR_10->zIdColumn = FUNC_0(VAR_12);
      if( VAR_10->zIdColumn==0 ) goto closureConnectError;
      continue;
    }
    VAR_12 = FUNC_2("parentcolumn", VAR_6[VAR_13]);
    if( VAR_12 ){
      FUNC_5(VAR_10->zParentColumn);
      VAR_10->zParentColumn = FUNC_0(VAR_12);
      if( VAR_10->zParentColumn==0 ) goto closureConnectError;
      continue;
    }
    *VAR_8 = FUNC_7("unrecognized argument: [%s]\n", VAR_6[VAR_13]);
    FUNC_1(VAR_10);
    *VAR_7 = 0;
    return VAR_0;
  }
  VAR_9 = FUNC_4(VAR_3,
         "CREATE TABLE x(id,depth,root HIDDEN,tablename HIDDEN,"
                        "idcolumn HIDDEN,parentcolumn HIDDEN)"
       );






  if( VAR_9!=VAR_2 ){
    FUNC_1(VAR_10);
  }
  *VAR_7 = &VAR_10->base;
  return VAR_9;

closureConnectError:
  FUNC_1(VAR_10);
  return VAR_9;
}
