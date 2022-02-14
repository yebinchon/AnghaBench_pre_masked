
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_5__ {int (* xClose ) (int ) ;} ;
typedef TYPE_1__ lsm_env ;
struct TYPE_6__ {int pReal; } ;
typedef TYPE_2__ LsmFile ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(lsm_file *VAR_1){
  lsm_env *VAR_2 = FUNC_1();
  LsmFile *VAR_3 = (LsmFile *)VAR_1;

  VAR_2->xClose(VAR_3->pReal);
  FUNC_2(VAR_3);
  return VAR_0;
}
