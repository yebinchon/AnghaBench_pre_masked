
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* fns; } ;
typedef TYPE_2__ vfs_file ;
typedef int int32_t ;
struct TYPE_4__ {int (* lseek ) (TYPE_2__*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int32_t FUNC_1( int VAR_1, int32_t VAR_2, int VAR_3 ) {
  vfs_file *VAR_4 = (vfs_file *)VAR_1;
  return VAR_4 ? VAR_4->fns->lseek( VAR_4, VAR_2, VAR_3 ) : VAR_0;
}
