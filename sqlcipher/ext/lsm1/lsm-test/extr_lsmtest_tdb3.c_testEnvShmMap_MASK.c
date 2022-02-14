
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_4__ {int (* xShmMap ) (int ,int,int,void**) ;} ;
typedef TYPE_1__ lsm_env ;
struct TYPE_5__ {int pReal; } ;
typedef TYPE_2__ LsmFile ;


 int FUNC_0 (int ,int,int,void**) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(lsm_file *VAR_0, int VAR_1, int VAR_2, void **VAR_3){
  LsmFile *VAR_4 = (LsmFile *)VAR_0;
  lsm_env *VAR_5 = FUNC_1();
  return VAR_5->xShmMap(VAR_4->pReal, VAR_1, VAR_2, VAR_3);
}
