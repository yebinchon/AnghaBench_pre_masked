
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_i64 ;
typedef int lsm_file ;
struct TYPE_3__ {int (* xWrite ) (int *,int ,void*,int) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,void*,int) ;

__attribute__((used)) static int FUNC_2(
  lsm_env *VAR_0,
  lsm_file *VAR_1,
  lsm_i64 VAR_2,
  const void *VAR_3,
  int VAR_4
){
  return FUNC_0( VAR_0->xWrite(VAR_1, VAR_2, (void *)VAR_3, VAR_4) );
}
