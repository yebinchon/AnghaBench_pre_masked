
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_9__ {scalar_t__ incrVacuum; scalar_t__ autoVacuum; TYPE_1__* pPage1; } ;
struct TYPE_8__ {scalar_t__ inTrans; TYPE_3__* pBt; } ;
struct TYPE_7__ {unsigned char* aData; int pDbPage; } ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;

int FUNC_5(Btree *VAR_3, int VAR_4, u32 VAR_5){
  BtShared *VAR_6 = VAR_3->pBt;
  unsigned char *VAR_7;
  int VAR_8;
  FUNC_0( VAR_4>=1 && VAR_4<=15 );
  FUNC_2(VAR_3);
  FUNC_0( VAR_3->inTrans==VAR_2 );
  FUNC_0( VAR_6->pPage1!=0 );
  VAR_7 = VAR_6->pPage1->aData;
  VAR_8 = FUNC_4(VAR_6->pPage1->pDbPage);
  if( VAR_8==VAR_1 ){
    FUNC_1(&VAR_7[36 + VAR_4*4], VAR_5);

    if( VAR_4==VAR_0 ){
      FUNC_0( VAR_6->autoVacuum || VAR_5==0 );
      FUNC_0( VAR_5==0 || VAR_5==1 );
      VAR_6->incrVacuum = (u8)VAR_5;
    }

  }
  FUNC_3(VAR_3);
  return VAR_8;
}
