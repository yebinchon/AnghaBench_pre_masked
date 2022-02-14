
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_i64 ;
typedef int lsm_file ;
struct TYPE_4__ {int (* xRemap ) (int ,int ,void**,int *) ;} ;
typedef TYPE_1__ lsm_env ;
struct TYPE_5__ {int pReal; } ;
typedef TYPE_2__ LsmFile ;


 int FUNC_0 (int ,int ,void**,int *) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(
  lsm_file *VAR_0,
  lsm_i64 VAR_1,
  void **VAR_2,
  lsm_i64 *VAR_3
){
  lsm_env *VAR_4 = FUNC_1();
  LsmFile *VAR_5 = (LsmFile *)VAR_0;
  return VAR_4->xRemap(VAR_5->pReal, VAR_1, VAR_2, VAR_3);
}
