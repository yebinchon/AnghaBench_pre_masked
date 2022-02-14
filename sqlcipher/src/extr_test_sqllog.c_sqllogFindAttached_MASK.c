
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_2__ {int bRec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*,char const*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(
  sqlite3 *VAR_3,
  const char *VAR_4,
  char *VAR_5,
  char *VAR_6
){
  sqlite3_stmt *VAR_7;
  int VAR_8;




  FUNC_0( VAR_2.bRec==0 );
  VAR_2.bRec = 1;
  VAR_8 = FUNC_6(VAR_3, "PRAGMA database_list", -1, &VAR_7, 0);
  if( VAR_8==VAR_0 ){
    while( VAR_1==FUNC_7(VAR_7) ){
      const char *VAR_9; int VAR_10;
      const char *VAR_11; int VAR_12;

      VAR_9 = (const char*)FUNC_3(VAR_7, 1);
      VAR_10 = FUNC_2(VAR_7, 1);
      if( VAR_5 ){
        FUNC_1(VAR_5, VAR_9, VAR_10+1);
      }

      VAR_11 = (const char*)FUNC_3(VAR_7, 2);
      VAR_12 = FUNC_2(VAR_7, 2);
      FUNC_1(VAR_6, VAR_11, VAR_12+1);

      if( VAR_4 && FUNC_9(VAR_4)==VAR_10
       && 0==FUNC_8(VAR_4, VAR_9, VAR_10)
      ){
        break;
      }
    }
    VAR_8 = FUNC_4(VAR_7);
  }
  VAR_2.bRec = 0;

  if( VAR_8!=VAR_0 ){
    FUNC_5(VAR_8, "sqllogFindAttached(): error in \"PRAGMA database_list\"");
  }
  return VAR_8;
}
