
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* fns; } ;
typedef TYPE_2__ vfs_file ;
typedef int uint32_t ;
struct TYPE_4__ {int (* size ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static uint32_t FUNC_1( int VAR_0 ) {
  vfs_file *VAR_1 = (vfs_file *)VAR_0;
  return VAR_1 ? VAR_1->fns->size( VAR_1 ) : 0;
}
