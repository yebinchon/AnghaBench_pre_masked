
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pTable; } ;
typedef TYPE_2__ sqlite3expert ;
typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_7__ {TYPE_1__* pTab; TYPE_2__* pExpert; } ;
struct TYPE_5__ {int zName; } ;
typedef TYPE_3__ ExpertVtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const* const) ;
 TYPE_3__* FUNC_2 (int*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,char const* const) ;

__attribute__((used)) static int FUNC_7(
  sqlite3 *VAR_3,
  void *VAR_4,
  int VAR_5, const char *const*VAR_6,
  sqlite3_vtab **VAR_7,
  char **VAR_8
){
  sqlite3expert *VAR_9 = (sqlite3expert*)VAR_4;
  ExpertVtab *VAR_10 = 0;
  int VAR_11;

  if( VAR_5!=4 ){
    *VAR_8 = FUNC_5("internal error!");
    VAR_11 = VAR_0;
  }else{
    char *VAR_12 = FUNC_1(VAR_6[3]);
    if( VAR_12 ){
      VAR_11 = FUNC_3(VAR_3, VAR_12);
      if( VAR_11==VAR_2 ){
        VAR_10 = FUNC_2(&VAR_11, sizeof(ExpertVtab));
      }
      if( VAR_11==VAR_2 ){
        VAR_10->pExpert = VAR_9;
        VAR_10->pTab = VAR_9->pTable;
        FUNC_0( FUNC_6(VAR_10->pTab->zName, VAR_6[2])==0 );
      }
      FUNC_4(VAR_12);
    }else{
      VAR_11 = VAR_1;
    }
  }

  *VAR_7 = (sqlite3_vtab*)VAR_10;
  return VAR_11;
}
