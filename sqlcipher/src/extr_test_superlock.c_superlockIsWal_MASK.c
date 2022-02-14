
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {int bWal; int db; } ;
typedef TYPE_1__ Superlock ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int **,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(Superlock *VAR_2){
  int VAR_3;
  sqlite3_stmt *VAR_4;

  VAR_3 = FUNC_2(VAR_2->db, "PRAGMA main.journal_mode", -1, &VAR_4, 0);
  if( VAR_3!=VAR_0 ) return VAR_3;

  VAR_2->bWal = 0;
  if( VAR_1==FUNC_3(VAR_4) ){
    const char *VAR_5 = (const char *)FUNC_0(VAR_4, 0);
    if( VAR_5 && FUNC_5(VAR_5)==3 && FUNC_4("wal", VAR_5, 3)==0 ){
      VAR_2->bWal = 1;
    }
  }

  return FUNC_1(VAR_4);
}
