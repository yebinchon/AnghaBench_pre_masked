
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ pgnoRoot; TYPE_1__* pPage; TYPE_3__* pBtree; } ;
struct TYPE_11__ {TYPE_2__* db; } ;
struct TYPE_10__ {int mutex; } ;
struct TYPE_9__ {scalar_t__ nCell; } ;
typedef TYPE_4__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;

int FUNC_5(BtCursor *VAR_2, int *VAR_3){
  int VAR_4;

  FUNC_0( FUNC_1(VAR_2) );
  FUNC_0( FUNC_4(VAR_2->pBtree->db->mutex) );
  VAR_4 = FUNC_3(VAR_2);
  if( VAR_4==VAR_1 ){
    FUNC_0( VAR_2->pPage->nCell>0 );
    *VAR_3 = 0;
    VAR_4 = FUNC_2(VAR_2);
  }else if( VAR_4==VAR_0 ){
    FUNC_0( VAR_2->pgnoRoot==0 || VAR_2->pPage->nCell==0 );
    *VAR_3 = 1;
    VAR_4 = VAR_1;
  }
  return VAR_4;
}
