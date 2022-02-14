
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int volume_set_id; } ;
typedef TYPE_1__ iso9660_pvd_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

char *
FUNC_2(const iso9660_pvd_t *VAR_1)
{
  if ( ((void*)0) == VAR_1 ) return ((void*)0);
  return FUNC_0(FUNC_1(VAR_1->volume_set_id, VAR_0));
}
