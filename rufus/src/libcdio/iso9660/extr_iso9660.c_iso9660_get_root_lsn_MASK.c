
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsn_t ;
struct TYPE_5__ {int extent; } ;
struct TYPE_4__ {TYPE_2__ root_directory_record; } ;
typedef TYPE_1__ iso9660_pvd_t ;
typedef TYPE_2__ iso9660_dir_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

lsn_t
FUNC_1(const iso9660_pvd_t *VAR_1)
{
  if (((void*)0) == VAR_1)
    return VAR_0;
  else {
    const iso9660_dir_t *VAR_2 = &(VAR_1->root_directory_record);
    if (((void*)0) == VAR_2) return VAR_0;
    return(FUNC_0 (VAR_2->extent));
  }
}
