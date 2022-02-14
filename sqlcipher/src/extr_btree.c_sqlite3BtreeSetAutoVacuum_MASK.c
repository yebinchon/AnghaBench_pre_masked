
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int btsFlags; int autoVacuum; int incrVacuum; } ;
struct TYPE_6__ {TYPE_2__* pBt; } ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(Btree *VAR_3, int VAR_4){



  BtShared *VAR_5 = VAR_3->pBt;
  int VAR_6 = VAR_1;
  u8 VAR_7 = (u8)VAR_4;

  FUNC_0(VAR_3);
  if( (VAR_5->btsFlags & VAR_0)!=0 && (VAR_7 ?1:0)!=VAR_5->autoVacuum ){
    VAR_6 = VAR_2;
  }else{
    VAR_5->autoVacuum = VAR_7 ?1:0;
    VAR_5->incrVacuum = VAR_7==2 ?1:0;
  }
  FUNC_1(VAR_3);
  return VAR_6;

}
