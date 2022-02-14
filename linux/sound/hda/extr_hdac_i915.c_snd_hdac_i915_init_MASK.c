
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_audio_component {int dummy; } ;
struct hdac_bus {int dev; struct drm_audio_component* audio_component; } ;
struct drm_audio_component {int ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct hdac_bus*) ;
 int FUNC_7 (struct hdac_bus*,int *,int ,int) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(struct hdac_bus *VAR_5)
{
 struct drm_audio_component *VAR_6;
 int VAR_7;

 if (!FUNC_2())
  return -VAR_1;

 FUNC_3(&VAR_2);

 VAR_7 = FUNC_7(VAR_5, &VAR_4,
      VAR_3,
      sizeof(struct i915_audio_component) - sizeof(*VAR_6));
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6 = VAR_5->audio_component;
 if (!VAR_6)
  return -VAR_1;
 if (!VAR_6->ops) {
  if (!FUNC_0(VAR_0) ||
      !FUNC_5("i915")) {

   FUNC_8(&VAR_2,
         FUNC_4(60 * 1000));
  }
 }
 if (!VAR_6->ops) {
  FUNC_1(VAR_5->dev, "couldn't bind with audio component\n");
  FUNC_6(VAR_5);
  return -VAR_1;
 }
 return 0;
}
