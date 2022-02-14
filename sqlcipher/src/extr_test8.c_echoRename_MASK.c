
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {int db; int * zTableName; int zThis; scalar_t__ isPattern; } ;
typedef TYPE_1__ echo_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int *,char const*,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(sqlite3_vtab *VAR_2, const char *VAR_3){
  int VAR_4 = VAR_1;
  echo_vtab *VAR_5 = (echo_vtab *)VAR_2;

  if( FUNC_0(VAR_5, "xRename") ){
    return VAR_0;
  }

  if( VAR_5->isPattern ){
    int VAR_6 = (int)FUNC_4(VAR_5->zThis);
    char *VAR_7 = FUNC_3("ALTER TABLE %s RENAME TO %s%s",
        VAR_5->zTableName, VAR_3, &VAR_5->zTableName[VAR_6]
    );
    VAR_4 = FUNC_1(VAR_5->db, VAR_7, 0, 0, 0);
    FUNC_2(VAR_7);
  }

  return VAR_4;
}
