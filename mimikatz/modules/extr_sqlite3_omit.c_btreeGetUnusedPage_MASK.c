
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ isInit; int pDbPage; } ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef int BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,TYPE_1__**,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(
  BtShared *VAR_2,
  Pgno VAR_3,
  MemPage **VAR_4,
  int VAR_5
){
  int VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  if( VAR_6==VAR_1 ){
    if( FUNC_2((*VAR_4)->pDbPage)>1 ){
      FUNC_1(*VAR_4);
      *VAR_4 = 0;
      return VAR_0;
    }
    (*VAR_4)->isInit = 0;
  }else{
    *VAR_4 = 0;
  }
  return VAR_6;
}
