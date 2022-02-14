
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* xFileid ) (int ,void*,int*) ;} ;
typedef TYPE_1__ lsm_env ;
struct TYPE_8__ {TYPE_3__* pFS; TYPE_1__* pEnv; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_9__ {int fdDb; } ;
typedef TYPE_3__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 void* FUNC_1 (TYPE_1__*,int,int*) ;
 int FUNC_2 (int ,void*,int*) ;
 int FUNC_3 (int ,void*,int*) ;

int FUNC_4(lsm_db *VAR_1, void **VAR_2, int *VAR_3){
  lsm_env *VAR_4 = VAR_1->pEnv;
  FileSystem *VAR_5 = VAR_1->pFS;
  int VAR_6;
  int VAR_7 = 0;
  void *VAR_8;

  VAR_6 = VAR_4->xFileid(VAR_5->fdDb, 0, &VAR_7);
  VAR_8 = FUNC_1(VAR_4, VAR_7, &VAR_6);
  if( VAR_6==VAR_0 ) VAR_6 = VAR_4->xFileid(VAR_5->fdDb, VAR_8, &VAR_7);

  if( VAR_6!=VAR_0 ){
    FUNC_0(VAR_4, VAR_8);
    VAR_8 = 0;
    VAR_7 = 0;
  }

  *VAR_2 = VAR_8;
  *VAR_3 = VAR_7;
  return VAR_6;
}
