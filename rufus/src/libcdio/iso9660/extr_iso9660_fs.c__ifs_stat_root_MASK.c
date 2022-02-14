
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int root_directory_record; } ;
struct TYPE_5__ {int root_directory_record; } ;
struct TYPE_7__ {int u_joliet_level; int b_xa; TYPE_2__ pvd; TYPE_1__ svd; } ;
typedef TYPE_3__ iso9660_t ;
typedef int iso9660_stat_t ;
typedef int iso9660_dir_t ;


 int * FUNC_0 (int *,int *,int ,int ) ;

__attribute__((used)) static iso9660_stat_t *
FUNC_1 (iso9660_t *VAR_0)
{
  iso9660_stat_t *VAR_1;
  iso9660_dir_t *VAR_2;






  VAR_2 = &(VAR_0->pvd.root_directory_record) ;


  VAR_1 = FUNC_0 (VAR_2, ((void*)0),
        VAR_0->b_xa,
        VAR_0->u_joliet_level);
  return VAR_1;
}
