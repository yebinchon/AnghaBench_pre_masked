
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_9__ {int n; int p; } ;
struct TYPE_8__ {TYPE_1__* pConfig; } ;
struct TYPE_7__ {scalar_t__ bColumnsize; } ;
typedef TYPE_2__ Fts5Storage ;
typedef TYPE_3__ Fts5Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int **,int ) ;
 int FUNC_1 (int *,int,int ,int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(
  Fts5Storage *VAR_3,
  i64 VAR_4,
  Fts5Buffer *VAR_5
){
  int VAR_6 = VAR_1;
  if( VAR_3->pConfig->bColumnsize ){
    sqlite3_stmt *VAR_7 = 0;
    VAR_6 = FUNC_0(VAR_3, VAR_0, &VAR_7, 0);
    if( VAR_6==VAR_1 ){
      FUNC_2(VAR_7, 1, VAR_4);
      FUNC_1(VAR_7, 2, VAR_5->p, VAR_5->n, VAR_2);
      FUNC_5(VAR_7);
      VAR_6 = FUNC_4(VAR_7);
      FUNC_3(VAR_7, 2);
    }
  }
  return VAR_6;
}
