
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ eState; int curFlags; int iPage; scalar_t__* aiIdx; int ix; scalar_t__ pgnoRoot; TYPE_4__* pPage; TYPE_3__** apPage; TYPE_2__* pBtree; } ;
struct TYPE_13__ {int nCell; int leaf; } ;
struct TYPE_12__ {scalar_t__ nCell; } ;
struct TYPE_11__ {TYPE_1__* db; } ;
struct TYPE_10__ {int mutex; } ;
typedef TYPE_5__ BtCursor ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ) ;

int FUNC_5(BtCursor *VAR_4, int *VAR_5){
  int VAR_6;

  FUNC_0( FUNC_1(VAR_4) );
  FUNC_0( FUNC_4(VAR_4->pBtree->db->mutex) );


  if( VAR_1==VAR_4->eState && (VAR_4->curFlags & VAR_0)!=0 ){
    return VAR_3;
  }

  VAR_6 = FUNC_3(VAR_4);
  if( VAR_6==VAR_3 ){
    FUNC_0( VAR_4->eState==VAR_1 );
    *VAR_5 = 0;
    VAR_6 = FUNC_2(VAR_4);
    if( VAR_6==VAR_3 ){
      VAR_4->curFlags |= VAR_0;
    }else{
      VAR_4->curFlags &= ~VAR_0;
    }
  }else if( VAR_6==VAR_2 ){
    FUNC_0( VAR_4->pgnoRoot==0 || VAR_4->pPage->nCell==0 );
    *VAR_5 = 1;
    VAR_6 = VAR_3;
  }
  return VAR_6;
}
