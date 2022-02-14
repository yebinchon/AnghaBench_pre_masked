
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pRbuVfs; struct TYPE_5__* pMainRbuNext; struct TYPE_5__* pMainNext; } ;
typedef TYPE_2__ rbu_file ;
struct TYPE_4__ {int mutex; TYPE_2__* pMainRbu; TYPE_2__* pMain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(rbu_file *VAR_0){
  rbu_file **VAR_1;
  FUNC_0(VAR_0->pRbuVfs->mutex);
  for(VAR_1=&VAR_0->pRbuVfs->pMain; *VAR_1 && *VAR_1!=VAR_0; VAR_1=&((*VAR_1)->pMainNext)){}
  if( *VAR_1 ) *VAR_1 = VAR_0->pMainNext;
  VAR_0->pMainNext = 0;
  for(VAR_1=&VAR_0->pRbuVfs->pMainRbu; *VAR_1 && *VAR_1!=VAR_0; VAR_1=&((*VAR_1)->pMainRbuNext)){}
  if( *VAR_1 ) *VAR_1 = VAR_0->pMainRbuNext;
  VAR_0->pMainRbuNext = 0;
  FUNC_1(VAR_0->pRbuVfs->mutex);
}
