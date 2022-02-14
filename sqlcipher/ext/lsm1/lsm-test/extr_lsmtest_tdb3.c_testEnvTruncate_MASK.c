
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lsm_i64 ;
typedef int lsm_file ;
struct TYPE_6__ {int (* xTruncate ) (int ,int ) ;} ;
typedef TYPE_2__ lsm_env ;
struct TYPE_7__ {int pReal; TYPE_1__* pDb; } ;
struct TYPE_5__ {scalar_t__ bCrashed; } ;
typedef TYPE_3__ LsmFile ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(lsm_file *VAR_1, lsm_i64 VAR_2){
  lsm_env *VAR_3 = FUNC_1();
  LsmFile *VAR_4 = (LsmFile *)VAR_1;
  if( VAR_4->pDb->bCrashed ) return VAR_0;
  return VAR_3->xTruncate(VAR_4->pReal, VAR_2);
}
