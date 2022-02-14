
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct obs_sceneitem_crop {int crop; } const obs_sceneitem_crop ;
typedef struct obs_sceneitem_crop obs_sceneitem_t ;


 int FUNC_0 (struct obs_sceneitem_crop const*,int *,int) ;
 int FUNC_1 (struct obs_sceneitem_crop const*,char*) ;

void FUNC_2(const obs_sceneitem_t *VAR_0,
       struct obs_sceneitem_crop *VAR_1)
{
 if (!FUNC_1(VAR_0, "obs_sceneitem_get_crop"))
  return;
 if (!FUNC_1(VAR_1, "obs_sceneitem_get_crop"))
  return;

 FUNC_0(VAR_1, &VAR_0->crop, sizeof(*VAR_1));
}
