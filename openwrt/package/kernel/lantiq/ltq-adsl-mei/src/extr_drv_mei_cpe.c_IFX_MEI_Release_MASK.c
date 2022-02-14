
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_rdev; } ;
typedef TYPE_1__ DSL_DRV_inode_t ;
typedef int DSL_DRV_file_t ;
typedef int DSL_DEV_Device_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_2 (DSL_DRV_inode_t * VAR_2, DSL_DRV_file_t * VAR_3)
{

 int VAR_4 = FUNC_1 (VAR_2->i_rdev);
 DSL_DEV_Device_t *VAR_5;

 VAR_5 = &VAR_1[VAR_4];
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 FUNC_0 (VAR_5);
 return 0;
}
