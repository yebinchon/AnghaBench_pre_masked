
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ volume_set_id; } ;
struct TYPE_6__ {scalar_t__ volume_set_id; } ;
struct TYPE_8__ {TYPE_2__ svd; TYPE_1__ pvd; } ;
typedef TYPE_3__ iso9660_t ;
typedef int cdio_utf8_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int **,char*,char*,int ) ;

bool FUNC_1(iso9660_t *VAR_1,
              cdio_utf8_t **VAR_2)
{
  return FUNC_0(VAR_1, VAR_2,
                       (char*)VAR_1->pvd.volume_set_id,
                       (char*)VAR_1->svd.volume_set_id,
                       VAR_0);
}
