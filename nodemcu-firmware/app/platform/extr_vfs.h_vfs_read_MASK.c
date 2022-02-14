
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* fns; } ;
typedef TYPE_2__ vfs_file ;
typedef int int32_t ;
struct TYPE_4__ {int (* read ) (TYPE_2__*,void*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,void*,size_t) ;

__attribute__((used)) static int32_t FUNC_1( int VAR_1, void *VAR_2, size_t VAR_3 ) {
  vfs_file *VAR_4 = (vfs_file *)VAR_1;
  return VAR_4 ? VAR_4->fns->read( VAR_4, VAR_2, VAR_3 ) : VAR_0;
}
