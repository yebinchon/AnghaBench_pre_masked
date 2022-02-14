
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_6__ {int (* xTestLock ) (int ,int,int,int) ;} ;
typedef TYPE_2__ lsm_env ;
struct TYPE_7__ {int pReal; TYPE_1__* pDb; } ;
struct TYPE_5__ {scalar_t__ bNoRecovery; } ;
typedef TYPE_3__ LsmFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int) ;
 TYPE_2__* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(lsm_file *VAR_2, int VAR_3, int VAR_4, int VAR_5){
  LsmFile *VAR_6 = (LsmFile *)VAR_2;
  lsm_env *VAR_7 = FUNC_1();

  if( VAR_3==2 && VAR_5==VAR_1 && VAR_6->pDb->bNoRecovery ){
    return VAR_0;
  }
  return VAR_7->xTestLock(VAR_6->pReal, VAR_3, VAR_4, VAR_5);
}
