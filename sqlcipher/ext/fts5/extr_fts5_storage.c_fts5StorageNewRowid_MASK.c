
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_6__ {TYPE_1__* pConfig; } ;
struct TYPE_5__ {int db; scalar_t__ bColumnsize; } ;
typedef TYPE_2__ Fts5Storage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int **,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(Fts5Storage *VAR_3, i64 *VAR_4){
  int VAR_5 = VAR_1;
  if( VAR_3->pConfig->bColumnsize ){
    sqlite3_stmt *VAR_6 = 0;
    VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_6, 0);
    if( VAR_5==VAR_2 ){
      FUNC_1(VAR_6, 1);
      FUNC_1(VAR_6, 2);
      FUNC_4(VAR_6);
      VAR_5 = FUNC_3(VAR_6);
    }
    if( VAR_5==VAR_2 ){
      *VAR_4 = FUNC_2(VAR_3->pConfig->db);
    }
  }
  return VAR_5;
}
