
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
typedef int sqlite3 ;
struct TYPE_8__ {int interp; int * db; } ;
typedef TYPE_2__ echo_vtab ;
struct TYPE_9__ {scalar_t__ pStmt; } ;
typedef TYPE_3__ echo_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (scalar_t__,int,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,char const*,int,scalar_t__*,int ) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
  sqlite3_vtab_cursor *VAR_2,
  int VAR_3, const char *VAR_4,
  int VAR_5, sqlite3_value **VAR_6
){
  int VAR_7;
  int VAR_8;

  echo_cursor *VAR_9 = (echo_cursor *)VAR_2;
  echo_vtab *VAR_10 = (echo_vtab *)VAR_2->pVtab;
  sqlite3 *VAR_11 = VAR_10->db;

  if( FUNC_4(VAR_10, "xFilter") ){
    return VAR_0;
  }


  FUNC_1( VAR_3==FUNC_3(VAR_4) );


  FUNC_0(VAR_10->interp, "xFilter");
  FUNC_0(VAR_10->interp, VAR_4);
  for(VAR_8=0; VAR_8<VAR_5; VAR_8++){
    FUNC_0(VAR_10->interp, (const char*)FUNC_8(VAR_6[VAR_8]));
  }

  FUNC_6(VAR_9->pStmt);
  VAR_9->pStmt = 0;




  VAR_7 = FUNC_7(VAR_11, VAR_4, -1, &VAR_9->pStmt, 0);
  FUNC_1( VAR_9->pStmt || VAR_7!=VAR_1 );
  for(VAR_8=0; VAR_7==VAR_1 && VAR_8<VAR_5; VAR_8++){
    VAR_7 = FUNC_5(VAR_9->pStmt, VAR_8+1, VAR_6[VAR_8]);
  }


  if( VAR_7==VAR_1 ){
    VAR_7 = FUNC_2(VAR_2);
  }

  return VAR_7;
}
