
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_3__ {int (* xRemap ) (int *,int ,void**,int *) ;} ;
typedef TYPE_1__ lsm_env ;
typedef int i64 ;


 int FUNC_0 (int *,int ,void**,int *) ;

__attribute__((used)) static int FUNC_1(
  lsm_env *VAR_0,
  lsm_file *VAR_1,
  i64 VAR_2,
  void **VAR_3,
  i64 *VAR_4
){
  return VAR_0->xRemap(VAR_1, VAR_2, VAR_3, VAR_4);
}
