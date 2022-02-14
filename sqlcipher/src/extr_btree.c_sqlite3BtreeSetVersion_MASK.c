
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {int btsFlags; TYPE_1__* pPage1; } ;
struct TYPE_7__ {TYPE_3__* pBt; } ;
struct TYPE_6__ {int pDbPage; scalar_t__* aData; } ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(Btree *VAR_2, int VAR_3){
  BtShared *VAR_4 = VAR_2->pBt;
  int VAR_5;

  FUNC_0( VAR_3==1 || VAR_3==2 );




  VAR_4->btsFlags &= ~VAR_0;
  if( VAR_3==1 ) VAR_4->btsFlags |= VAR_0;

  VAR_5 = FUNC_1(VAR_2, 0, 0);
  if( VAR_5==VAR_1 ){
    u8 *VAR_6 = VAR_4->pPage1->aData;
    if( VAR_6[18]!=(u8)VAR_3 || VAR_6[19]!=(u8)VAR_3 ){
      VAR_5 = FUNC_1(VAR_2, 2, 0);
      if( VAR_5==VAR_1 ){
        VAR_5 = FUNC_2(VAR_4->pPage1->pDbPage);
        if( VAR_5==VAR_1 ){
          VAR_6[18] = (u8)VAR_3;
          VAR_6[19] = (u8)VAR_3;
        }
      }
    }
  }

  VAR_4->btsFlags &= ~VAR_0;
  return VAR_5;
}
