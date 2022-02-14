
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ obs_sceneitem_t ;
typedef int int64_t ;


 int FUNC_0 (TYPE_1__ const*,char*) ;

int64_t FUNC_1(const obs_sceneitem_t *VAR_0)
{
 if (!FUNC_0(VAR_0, "obs_sceneitem_get_id"))
  return 0;

 return VAR_0->id;
}
