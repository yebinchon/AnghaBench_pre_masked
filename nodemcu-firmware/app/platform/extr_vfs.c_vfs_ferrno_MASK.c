
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* ferrno ) () ;} ;
typedef TYPE_2__ vfs_fs_fns ;
struct TYPE_9__ {TYPE_1__* fns; } ;
typedef TYPE_3__ vfs_file ;
typedef int int32_t ;
struct TYPE_7__ {int (* ferrno ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (char const*,char**,int ) ;
 TYPE_2__* FUNC_2 (char const*,char**,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int32_t FUNC_6( int VAR_1 )
{
  vfs_file *VAR_2 = (vfs_file *)VAR_1;

  if (VAR_2) {
    return VAR_2->fns->ferrno ? VAR_2->fns->ferrno( VAR_2 ) : 0;
  } else {
    vfs_fs_fns *VAR_3;
    const char *VAR_4 = "";
    char *VAR_5;
  }
}
