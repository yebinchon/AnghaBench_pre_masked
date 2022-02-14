
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pPager; int mutex; } ;
typedef int Pgno ;
typedef int MemPage ;
typedef int DbPage ;
typedef TYPE_1__ BtShared ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,TYPE_1__*) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static MemPage *FUNC_4(BtShared *VAR_0, Pgno VAR_1){
  DbPage *VAR_2;
  FUNC_0( FUNC_3(VAR_0->mutex) );
  VAR_2 = FUNC_2(VAR_0->pPager, VAR_1);
  if( VAR_2 ){
    return FUNC_1(VAR_2, VAR_1, VAR_0);
  }
  return 0;
}
