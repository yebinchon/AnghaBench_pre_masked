
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_4__ {scalar_t__ nPendingData; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int **,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(Fts3Table *VAR_2){
  int VAR_3 = VAR_0;

  if( VAR_2->nPendingData==0 ){
    sqlite3_stmt *VAR_4;
    VAR_3 = FUNC_0(VAR_2, VAR_1, &VAR_4, 0);
    if( VAR_3==VAR_0 ){
      FUNC_1(VAR_4, 1);
      FUNC_3(VAR_4);
      VAR_3 = FUNC_2(VAR_4);
    }
  }

  return VAR_3;
}
