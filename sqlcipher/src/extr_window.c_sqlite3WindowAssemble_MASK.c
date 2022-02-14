
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zBase; int * pOrderBy; int * pPartition; } ;
typedef TYPE_1__ Window ;
struct TYPE_9__ {int n; int z; } ;
typedef TYPE_2__ Token ;
struct TYPE_10__ {int db; } ;
typedef TYPE_3__ Parse ;
typedef int ExprList ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;

Window *FUNC_2(
  Parse *VAR_0,
  Window *VAR_1,
  ExprList *VAR_2,
  ExprList *VAR_3,
  Token *VAR_4
){
  if( VAR_1 ){
    VAR_1->pPartition = VAR_2;
    VAR_1->pOrderBy = VAR_3;
    if( VAR_4 ){
      VAR_1->zBase = FUNC_0(VAR_0->db, VAR_4->z, VAR_4->n);
    }
  }else{
    FUNC_1(VAR_0->db, VAR_2);
    FUNC_1(VAR_0->db, VAR_3);
  }
  return VAR_1;
}
