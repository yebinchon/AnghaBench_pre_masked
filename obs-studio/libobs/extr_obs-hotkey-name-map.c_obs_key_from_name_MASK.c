
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int obs_key_t ;
struct TYPE_3__ {int name_map; int name_map_init_token; } ;
struct TYPE_4__ {TYPE_1__ hotkeys; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,char const*,int*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

obs_key_t FUNC_3(const char *VAR_3)
{
 if (!VAR_2)
  return FUNC_1(VAR_3);

 if (FUNC_2(&VAR_2->hotkeys.name_map_init_token, VAR_1))
  return FUNC_1(VAR_3);

 int VAR_4 = 0;
 if (FUNC_0(VAR_2->hotkeys.name_map, VAR_3, &VAR_4))
  return VAR_4;

 return VAR_0;
}
