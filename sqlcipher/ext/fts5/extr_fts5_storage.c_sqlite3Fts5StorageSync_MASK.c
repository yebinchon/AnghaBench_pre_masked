
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_6__ {TYPE_1__* pConfig; int pIndex; scalar_t__ bTotalsValid; } ;
struct TYPE_5__ {int db; } ;
typedef TYPE_2__ Fts5Storage ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(Fts5Storage *VAR_1){
  int VAR_2 = VAR_0;
  i64 VAR_3 = FUNC_2(VAR_1->pConfig->db);
  if( VAR_1->bTotalsValid ){
    VAR_2 = FUNC_0(VAR_1);
    VAR_1->bTotalsValid = 0;
  }
  if( VAR_2==VAR_0 ){
    VAR_2 = FUNC_1(VAR_1->pIndex);
  }
  FUNC_3(VAR_1->pConfig->db, VAR_3);
  return VAR_2;
}
