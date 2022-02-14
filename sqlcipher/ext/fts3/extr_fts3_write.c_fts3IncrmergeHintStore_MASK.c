
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {int n; int a; } ;
typedef int Fts3Table ;
typedef TYPE_1__ Blob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int **,int ) ;
 int FUNC_1 (int *,int,int ,int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(Fts3Table *VAR_4, Blob *VAR_5){
  sqlite3_stmt *VAR_6 = 0;
  int VAR_7;

  VAR_7 = FUNC_0(VAR_4, VAR_3, &VAR_6, 0);
  if( VAR_7==VAR_1 ){
    FUNC_2(VAR_6, 1, VAR_0);
    FUNC_1(VAR_6, 2, VAR_5->a, VAR_5->n, VAR_2);
    FUNC_5(VAR_6);
    VAR_7 = FUNC_4(VAR_6);
    FUNC_3(VAR_6, 2);
  }

  return VAR_7;
}
