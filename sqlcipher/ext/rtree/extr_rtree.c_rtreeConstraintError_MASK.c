
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_4__ {void* zErrMsg; } ;
struct TYPE_5__ {int zName; TYPE_1__ base; int db; int zDb; } ;
typedef TYPE_2__ Rtree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*,int ,char const*,...) ;
 int FUNC_5 (int ,char*,int,int **,int ) ;

__attribute__((used)) static int FUNC_6(Rtree *VAR_3, int VAR_4){
  sqlite3_stmt *VAR_5 = 0;
  char *VAR_6;
  int VAR_7;

  FUNC_0( VAR_4==0 || VAR_4%2 );
  VAR_6 = FUNC_4("SELECT * FROM %Q.%Q", VAR_3->zDb, VAR_3->zName);
  if( VAR_6 ){
    VAR_7 = FUNC_5(VAR_3->db, VAR_6, -1, &VAR_5, 0);
  }else{
    VAR_7 = VAR_1;
  }
  FUNC_3(VAR_6);

  if( VAR_7==VAR_2 ){
    if( VAR_4==0 ){
      const char *VAR_8 = FUNC_1(VAR_5, 0);
      VAR_3->base.zErrMsg = FUNC_4(
          "UNIQUE constraint failed: %s.%s", VAR_3->zName, VAR_8
      );
    }else{
      const char *VAR_9 = FUNC_1(VAR_5, VAR_4);
      const char *VAR_10 = FUNC_1(VAR_5, VAR_4+1);
      VAR_3->base.zErrMsg = FUNC_4(
          "rtree constraint failed: %s.(%s<=%s)", VAR_3->zName, VAR_9, VAR_10
      );
    }
  }

  FUNC_2(VAR_5);
  return (VAR_7==VAR_2 ? VAR_0 : VAR_7);
}
