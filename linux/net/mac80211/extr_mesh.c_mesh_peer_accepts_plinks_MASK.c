
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802_11_elems {TYPE_1__* mesh_config; } ;
struct TYPE_2__ {int meshconf_cap; } ;


 int VAR_0 ;

bool FUNC_0(struct ieee802_11_elems *VAR_1)
{
 return (VAR_1->mesh_config->meshconf_cap &
   VAR_0) != 0;
}
