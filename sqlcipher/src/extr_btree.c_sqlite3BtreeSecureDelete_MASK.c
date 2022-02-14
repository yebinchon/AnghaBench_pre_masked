
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pBt; } ;
struct TYPE_6__ {int btsFlags; } ;
typedef TYPE_2__ Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(Btree *VAR_3, int VAR_4){
  int VAR_5;
  if( VAR_3==0 ) return 0;
  FUNC_1(VAR_3);
  FUNC_0( VAR_1==VAR_2*2 );
  FUNC_0( VAR_0==(VAR_1|VAR_2) );
  if( VAR_4>=0 ){
    VAR_3->pBt->btsFlags &= ~VAR_0;
    VAR_3->pBt->btsFlags |= VAR_2*VAR_4;
  }
  VAR_5 = (VAR_3->pBt->btsFlags & VAR_0)/VAR_2;
  FUNC_2(VAR_3);
  return VAR_5;
}
