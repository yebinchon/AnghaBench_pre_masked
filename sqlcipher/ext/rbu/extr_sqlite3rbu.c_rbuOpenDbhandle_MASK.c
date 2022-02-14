
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rc; int zErrmsg; int zVfsName; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char const*,int **,int const,int ) ;

__attribute__((used)) static sqlite3 *FUNC_4(
  sqlite3rbu *VAR_4,
  const char *VAR_5,
  int VAR_6
){
  sqlite3 *VAR_7 = 0;
  if( VAR_4->rc==VAR_0 ){
    const int VAR_8 = VAR_2|VAR_1|VAR_3;
    VAR_4->rc = FUNC_3(VAR_5, &VAR_7, VAR_8, VAR_6 ? VAR_4->zVfsName : 0);
    if( VAR_4->rc ){
      VAR_4->zErrmsg = FUNC_2("%s", FUNC_1(VAR_7));
      FUNC_0(VAR_7);
      VAR_7 = 0;
    }
  }
  return VAR_7;
}
