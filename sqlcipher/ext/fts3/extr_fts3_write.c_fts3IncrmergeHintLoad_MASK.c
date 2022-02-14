
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_4__ {int n; int a; } ;
typedef int Fts3Table ;
typedef TYPE_1__ Blob ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int*) ;
 int FUNC_1 (int *,int ,int **,int ) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int *,int,int ) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(Fts3Table *VAR_4, Blob *VAR_5){
  sqlite3_stmt *VAR_6 = 0;
  int VAR_7;

  VAR_5->n = 0;
  VAR_7 = FUNC_1(VAR_4, VAR_3, &VAR_6, 0);
  if( VAR_7==VAR_1 ){
    int VAR_8;
    FUNC_3(VAR_6, 1, VAR_0);
    if( VAR_2==FUNC_7(VAR_6) ){
      const char *VAR_9 = FUNC_4(VAR_6, 0);
      int VAR_10 = FUNC_5(VAR_6, 0);
      if( VAR_9 ){
        FUNC_0(VAR_5, VAR_10, &VAR_7);
        if( VAR_7==VAR_1 ){
          FUNC_2(VAR_5->a, VAR_9, VAR_10);
          VAR_5->n = VAR_10;
        }
      }
    }
    VAR_8 = FUNC_6(VAR_6);
    if( VAR_7==VAR_1 ) VAR_7 = VAR_8;
  }

  return VAR_7;
}
