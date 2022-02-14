
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mutex; TYPE_2__* pMain; TYPE_2__* pMainRbu; } ;
typedef TYPE_1__ rbu_vfs ;
struct TYPE_6__ {char const* zWal; struct TYPE_6__* pMainNext; struct TYPE_6__* pMainRbuNext; } ;
typedef TYPE_2__ rbu_file ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static rbu_file *FUNC_2(rbu_vfs *VAR_0, const char *VAR_1, int VAR_2){
  rbu_file *VAR_3;
  FUNC_0(VAR_0->mutex);
  if( VAR_2 ){
    for(VAR_3=VAR_0->pMainRbu; VAR_3 && VAR_3->zWal!=VAR_1; VAR_3=VAR_3->pMainRbuNext){}
  }else{
    for(VAR_3=VAR_0->pMain; VAR_3 && VAR_3->zWal!=VAR_1; VAR_3=VAR_3->pMainNext){}
  }
  FUNC_1(VAR_0->mutex);
  return VAR_3;
}
