
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; TYPE_2__* pMainRbu; TYPE_2__* pMain; } ;
typedef TYPE_1__ rbu_vfs ;
struct TYPE_5__ {int openFlags; scalar_t__ pRbu; struct TYPE_5__* pMainRbuNext; struct TYPE_5__* pMainNext; TYPE_1__* pRbuVfs; } ;
typedef TYPE_2__ rbu_file ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(rbu_file *VAR_1){
  rbu_vfs *VAR_2 = VAR_1->pRbuVfs;
  rbu_file *VAR_3;
  FUNC_0( (VAR_1->openFlags & VAR_0) );
  FUNC_1(VAR_2->mutex);
  if( VAR_1->pRbu==0 ){
    for(VAR_3=VAR_2->pMain; VAR_3; VAR_3=VAR_3->pMainNext);
    VAR_1->pMainNext = VAR_2->pMain;
    VAR_2->pMain = VAR_1;
  }else{
    for(VAR_3=VAR_2->pMainRbu; VAR_3 && VAR_3!=VAR_1; VAR_3=VAR_3->pMainRbuNext){}
    if( VAR_3==0 ){
      VAR_1->pMainRbuNext = VAR_2->pMainRbu;
      VAR_2->pMainRbu = VAR_1;
    }
  }
  FUNC_2(VAR_2->mutex);
}
